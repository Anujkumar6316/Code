void solve()
{
    ll oo = 1, n;
    if (oo != 1)
    {
        ll ji = -1;
    }
    else
    {
        cin >> n;
    }

    vector<ll> y(n);
    vector<ll> x(n);

    for (ll i = 0; i < n; i++)
        cin >> x[i];
    sort(x.begin(), x.end());
    for (ll i = 0; i < n; i++)
        cin >> y[i];

    sort(y.begin(), y.end());

    vector<ll> we;

    for (ll i = n / 2; i < n; i++)
        we.push_back(y[i]);
    b = we;
    we.clear();
    for (ll i = n / 2; i < n; i++)
        we.push_back(x[i]);
    a = we;

    n = a.size();
    vector<ll> cty;
    for (ll i = 0; i < n; i++)
    {
        cty.push_back(x[i] + y[n - 1 - i]);
    }
    sort(cty.begin(), cty.end());
    cout << cty[0] << endl;
}