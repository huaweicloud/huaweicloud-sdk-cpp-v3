
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerWordsBlockList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerWordsBlockList_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerWordsBlockList
    : public ModelBase
{
public:
    SmartDocumentRecognizerWordsBlockList();
    virtual ~SmartDocumentRecognizerWordsBlockList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SmartDocumentRecognizerWordsBlockList members

    /// <summary>
    /// 文字块识别结果。 
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 文字块的区域位置信息，列表形式，包含文字区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 文字块识别结果的置信度。  
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);


protected:
    std::string words_;
    bool wordsIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    float confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerWordsBlockList_H_
