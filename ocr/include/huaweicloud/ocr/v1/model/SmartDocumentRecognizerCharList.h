
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerCharList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerCharList_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerCharList
    : public ModelBase
{
public:
    SmartDocumentRecognizerCharList();
    virtual ~SmartDocumentRecognizerCharList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerCharList members

    /// <summary>
    /// 单字符识别结果。 
    /// </summary>

    std::string getChar() const;
    bool charIsSet() const;
    void unsetchar();
    void setChar(const std::string& value);

    /// <summary>
    /// 单字符的置信度，置信度越大，表示本次识别的文字的可靠性越高，在统计意义上，置信度越大，准确率越高。置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    float getCharConfidence() const;
    bool charConfidenceIsSet() const;
    void unsetcharConfidence();
    void setCharConfidence(float value);

    /// <summary>
    /// 单字符的位置信息，列表形式，分别表示文字块4个顶点的x, y坐标;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getCharLocation();
    bool charLocationIsSet() const;
    void unsetcharLocation();
    void setCharLocation(const std::vector<std::vector<int32_t>>& value);


protected:
    std::string char_;
    bool charIsSet_;
    float charConfidence_;
    bool charConfidenceIsSet_;
    std::vector<std::vector<int32_t>> charLocation_;
    bool charLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerCharList_H_
