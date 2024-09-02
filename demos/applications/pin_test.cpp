// Copyright 2024 Khalil Estell
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <libhal-arm-mcu/stm32f1/input_pin.hpp>
#include <libhal-arm-mcu/stm32f1/pin.hpp>
#include <libhal-util/serial.hpp>
#include <libhal-util/steady_clock.hpp>

#include <resource_list.hpp>

void application(resource_list& p_map)
{
  auto& console = *p_map.console.value();
  auto& clock = *p_map.clock.value();
  hal::stm32f1::release_jtag_pins();
  static hal::stm32f1::input_pin a0('A', 0);
  static hal::stm32f1::input_pin a1('A', 1);
  static hal::stm32f1::input_pin a2('A', 2);
  static hal::stm32f1::input_pin a3('A', 3);
  static hal::stm32f1::input_pin a4('A', 4);
  static hal::stm32f1::input_pin a5('A', 5);
  static hal::stm32f1::input_pin a6('A', 6);
  static hal::stm32f1::input_pin a7('A', 7);
  static hal::stm32f1::input_pin a8('A', 8);
  static hal::stm32f1::input_pin a11('A', 11);
  static hal::stm32f1::input_pin a12('A', 12);

  static hal::stm32f1::input_pin b0('B', 0);
  static hal::stm32f1::input_pin b1('B', 1);
  static hal::stm32f1::input_pin b3('B', 3);
  static hal::stm32f1::input_pin b8('B', 8);
  static hal::stm32f1::input_pin b9('B', 9);
  static hal::stm32f1::input_pin b10('B', 10);
  static hal::stm32f1::input_pin b11('B', 11);
  static hal::stm32f1::input_pin b12('B', 12);
  static hal::stm32f1::input_pin b13('B', 13);
  static hal::stm32f1::input_pin b14('B', 14);
  static hal::stm32f1::input_pin b15('B', 15);

  a0.configure({ .resistor = hal::pin_resistor::pull_up });
  a1.configure({ .resistor = hal::pin_resistor::pull_up });
  a2.configure({ .resistor = hal::pin_resistor::pull_up });
  a3.configure({ .resistor = hal::pin_resistor::pull_up });
  a4.configure({ .resistor = hal::pin_resistor::pull_up });
  a5.configure({ .resistor = hal::pin_resistor::pull_up });
  a6.configure({ .resistor = hal::pin_resistor::pull_up });
  a7.configure({ .resistor = hal::pin_resistor::pull_up });
  a8.configure({ .resistor = hal::pin_resistor::pull_up });
  a11.configure({ .resistor = hal::pin_resistor::pull_up });
  a12.configure({ .resistor = hal::pin_resistor::pull_up });

  b0.configure({ .resistor = hal::pin_resistor::pull_up });
  b1.configure({ .resistor = hal::pin_resistor::pull_up });
  b3.configure({ .resistor = hal::pin_resistor::pull_down });
  b8.configure({ .resistor = hal::pin_resistor::pull_up });
  b9.configure({ .resistor = hal::pin_resistor::pull_up });
  b10.configure({ .resistor = hal::pin_resistor::pull_up });
  b11.configure({ .resistor = hal::pin_resistor::pull_up });
  b12.configure({ .resistor = hal::pin_resistor::pull_up });
  b13.configure({ .resistor = hal::pin_resistor::pull_up });
  b14.configure({ .resistor = hal::pin_resistor::pull_up });
  b15.configure({ .resistor = hal::pin_resistor::pull_up });

  hal::print(console, "Starting Pin test...");

  while (true) {
    hal::print(console, "\n");
    using namespace std::chrono_literals;

    hal::delay(clock, 1s);
    hal::print(console, "Active pins: ");
    if (a0.level()) {
      hal::print(console, "A0, ");
    }
    if (a1.level()) {
      hal::print(console, "A1, ");
    }
    if (a2.level()) {
      hal::print(console, "A2, ");
    }
    if (a3.level()) {
      hal::print(console, "A3, ");
    }
    if (a4.level()) {
      hal::print(console, "A4, ");
    }
    if (a5.level()) {
      hal::print(console, "A5, ");
    }
    if (a6.level()) {
      hal::print(console, "A6, ");
    }
    if (a7.level()) {
      hal::print(console, "A7, ");
    }
    if (a8.level()) {
      hal::print(console, "A8, ");
    }
    if (a11.level()) {
      hal::print(console, "A11, ");
    }
    if (a12.level()) {
      hal::print(console, "A12, ");
    }
    if (b0.level()) {
      hal::print(console, "B0, ");
    }
    if (b1.level()) {
      hal::print(console, "B1, ");
    }
    if (b3.level()) {
      hal::print(console, "B3, ");
    }
    if (b8.level()) {
      hal::print(console, "B8, ");
    }
    if (b9.level()) {
      hal::print(console, "B9, ");
    }
    if (b10.level()) {
      hal::print(console, "B10, ");
    }
    if (b11.level()) {
      hal::print(console, "B11, ");
    }
    if (b12.level()) {
      hal::print(console, "B12, ");
    }
    if (b13.level()) {
      hal::print(console, "B13, ");
    }
    if (b14.level()) {
      hal::print(console, "B14, ");
    }
    if (b15.level()) {
      hal::print(console, "B15, ");
    }
  }
}
