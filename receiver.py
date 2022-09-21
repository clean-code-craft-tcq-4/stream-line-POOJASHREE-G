def calculate_min(values_list):
    min_value = min(values_list)
    return min_value


def calculate_max(values_list):
    max_value = max(values_list)
    return max_value


def calculate_smple_moving_average(values_list):
    avg_value = sum(values_list)/5
    return avg_value


def main():
    # Reading the input data 
    data = []
    while True:
        line = input()

        if line:
            data.append(line)
        else:
            break

    input_list = data
    temp_sensor_list = []
    soc_list = []

    for every_line in input_list:
        temp_sensor_list.append(every_line.split()[2])
        soc_list.append(every_line.split()[5])

    temp_sensor_list = [eval(i) for i in temp_sensor_list]
    soc_list = [eval(i) for i in soc_list]

    min_temp = calculate_min(temp_sensor_list)
    min_soc = calculate_min(soc_list)
 
    max_temp = calculate_max(temp_sensor_list)
    max_soc = calculate_max(soc_list)

    print("Minimum temperature value : ", min_temp)
    print("Maximum temperature value : ", max_temp)
    print("Minimum soc value : ", min_soc)
    print("Maximum soc value : ", max_soc)

    last_temp_values = temp_sensor_list[-5:]
    last_soc_values = soc_list[-5:]

    if len(last_temp_values) >= 5:
        avg_temp = calculate_smple_moving_average(last_temp_values)
        avg_soc = calculate_smple_moving_average(last_soc_values)
        print("Simple Moving Average temperature value : ", avg_temp)
        print("Simple Moving Average soc value : ", avg_soc)
    else:
        print("Lesser than 5 values provided to calculate the Simple Moving Average values!!!")


if __name__ == '__main__':
    main()
