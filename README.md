Sample project for using the Data Flow Library on the [ESP32](https://www.espressif.com/en/products/socs/esp32)  
[DFL Documentation](https://oyalmli.github.io/data_flow_library/)  
[DFL Source](https://github.com/Oyalmli/data_flow_library)

#### Need:  
```brew install cmake ninja```

#### Setup:
```git clone --recursive https://github.com/Oyalmli/esp_dfl_sample.git```

#### Add build tools to PATH
```get_idf```

#### Build
```idf.py build```

#### Flash to device, and monitor *USB-port of device
```idf.py -p (PORT) flash```  
```idf.py -p (PORT) monitor```