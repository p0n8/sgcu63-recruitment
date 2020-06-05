import urllib.request

webUrl = urllib.request.urlopen('https://rubnongkaomai.com/baan')
data = str(webUrl.read())

file = open('table.html', 'w')
file.write('<!DOCTYPE html>\n')
file.write('<html>\n')
file.write('<body>\n\n')
file.write('<table>"\n')

for i in range(0, 15) :

    idxStart = data.find('<a href="/baan') + 14
    data = data[idxStart:]
    idxEnd = data.find('">')
    url = 'https://rubnongkaomai.com/baan' + data[:idxEnd]
    data = data[idxEnd:]

    webUrl = urllib.request.urlopen(url)
    newData = str(webUrl.read())

    idxStart = newData.find('<h1 type="header">') + 18
    newData = newData[idxStart:]
    idxEnd = newData.find('</h1>')
    baan = newData[:idxEnd]
    newData = newData[idxEnd:]

    idxStart = newData.find('<h3 type="header">') + 18
    newData = newData[idxStart:]
    idxEnd = newData.find('</h3>')
    concept = newData[:idxEnd]
    newData = newData[idxEnd:]

    file.write('<tr>\n')
    file.write('<th>' + baan + '</th>\n')
    file.write('<th>' + concept + '</th>\n')
    file.write('</tr>\n')

file.write('</table>"\n')
file.write('</body>\n')
file.write('</html>\n')
file.close()