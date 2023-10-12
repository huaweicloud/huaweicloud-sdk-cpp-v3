
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandLicensePlateItem_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandLicensePlateItem_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  ThailandLicensePlateItem
    : public ModelBase
{
public:
    ThailandLicensePlateItem();
    virtual ~ThailandLicensePlateItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThailandLicensePlateItem members

    /// <summary>
    /// 车牌内容。 
    /// </summary>

    std::string getPlateNumber() const;
    bool plateNumberIsSet() const;
    void unsetplateNumber();
    void setPlateNumber(const std::string& value);

    /// <summary>
    /// 车牌的区域位置信息，列表形式，包含文字区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPlateLocation();
    bool plateLocationIsSet() const;
    void unsetplateLocation();
    void setPlateLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。注：置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);


protected:
    std::string plateNumber_;
    bool plateNumberIsSet_;
    std::vector<std::vector<int32_t>> plateLocation_;
    bool plateLocationIsSet_;
    float confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandLicensePlateItem_H_
