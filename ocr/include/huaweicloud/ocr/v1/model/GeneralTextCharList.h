
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTextCharList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTextCharList_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  GeneralTextCharList
    : public ModelBase
{
public:
    GeneralTextCharList();
    virtual ~GeneralTextCharList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralTextCharList members

    /// <summary>
    /// 单字符识别结果。 
    /// </summary>

    std::string getChar() const;
    bool charIsSet() const;
    void unsetchar();
    void setChar(const std::string& value);

    /// <summary>
    /// 单字符的区域位置信息，列表形式，包含字符区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getCharLocation();
    bool charLocationIsSet() const;
    void unsetcharLocation();
    void setCharLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 单字符识别结果的置信度。 
    /// </summary>

    float getCharConfidence() const;
    bool charConfidenceIsSet() const;
    void unsetcharConfidence();
    void setCharConfidence(float value);


protected:
    std::string char_;
    bool charIsSet_;
    std::vector<std::vector<int32_t>> charLocation_;
    bool charLocationIsSet_;
    float charConfidence_;
    bool charConfidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTextCharList_H_
