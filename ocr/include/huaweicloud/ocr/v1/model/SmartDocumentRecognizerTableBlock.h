
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableBlock_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableBlock_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerTableWordsBlock.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerTableBlock
    : public ModelBase
{
public:
    SmartDocumentRecognizerTableBlock();
    virtual ~SmartDocumentRecognizerTableBlock();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerTableBlock members

    /// <summary>
    /// 当前表格的位置信息，列表形式，分别表示文字块4个顶点的x, y坐标；坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 表格中所包含的单元格数量。 
    /// </summary>

    int32_t getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(int32_t value);

    /// <summary>
    /// 单元格识别结果列表。 
    /// </summary>

    std::vector<SmartDocumentRecognizerTableWordsBlock>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<SmartDocumentRecognizerTableWordsBlock>& value);

    /// <summary>
    /// 表格识别结果的base64编码，仅当return_excel为True时返回该字段。对返回的excel编码可用base64.b64decode解码并保存为.xlsx文件。 
    /// </summary>

    std::string getExcel() const;
    bool excelIsSet() const;
    void unsetexcel();
    void setExcel(const std::string& value);


protected:
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<SmartDocumentRecognizerTableWordsBlock> wordsBlockList_;
    bool wordsBlockListIsSet_;
    std::string excel_;
    bool excelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableBlock_H_
