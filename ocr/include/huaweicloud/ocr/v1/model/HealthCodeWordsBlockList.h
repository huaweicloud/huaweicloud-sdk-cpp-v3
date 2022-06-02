
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeWordsBlockList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeWordsBlockList_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  HealthCodeWordsBlockList
    : public ModelBase
{
public:
    HealthCodeWordsBlockList();
    virtual ~HealthCodeWordsBlockList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HealthCodeWordsBlockList members

    /// <summary>
    /// 文字块识别结果。 
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 识别到的文字块的区域位置信息，列表形式，分别表示文字块4个顶点的（x,y）坐标。采用图像坐标系，图像坐标原点为图像左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<int32_t>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(std::vector<int32_t> value);

    /// <summary>
    /// 各个字段的置信度 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);


protected:
    std::string words_;
    bool wordsIsSet_;
    std::vector<int32_t> location_;
    bool locationIsSet_;
    float confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeWordsBlockList_H_
