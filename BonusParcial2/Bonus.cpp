void filterByWeightAndReplace(string*& names, int*& weights, bool*& delivered, int& size) {
    if (size == 0) {
        cout << "No hay paquetes.\n";
        return;
    }

    int limit;
    cout << "Ingrese el límite de peso: ";
    cin >> limit;

  
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (weights[i] > limit) count++;
    }

    if (count == 0) {
        cout << "No hay paquetes con peso mayor al límite." << endl;
        return;
    }

    string* newNames = new string[count];
    int* newWeights = new int[count];
    bool* newDelivered = new bool[count];

    int idx = 0;
    for (int i = 0; i < size; i++) {
        if (weights[i] > limit) {
            newNames[idx] = names[i];
            newWeights[idx] = weights[i];
            newDelivered[idx] = delivered[i];
            idx++;
        }
    }

    cout << "PAQUETES FILTRADOS:" << endl;
    for (int i = 0; i < count; i++) {
        cout << newNames[i] << " -> "
             << newWeights[i] << " kg -> "
             << (newDelivered[i] ? "Entregado" : "Pendiente")
             << endl;
    }

    int opc;
    cout << "¿Desea reemplazar la lista actual con esta? 1. Sí 2. No" << endl;
    cin >> opc;

    if (opc == 1) {
        delete[] names;
        delete[] weights;
        delete[] delivered;

        names = newNames;
        weights = newWeights;
        delivered = newDelivered;
        size = count;

        cout << "Listas reemplazadas correctamente." << endl;
    }
    else {
        delete[] newNames;
        delete[] newWeights;
        delete[] newDelivered;
        cout << "Las listas filtradas fueron descartadas." endl;
    }
}
