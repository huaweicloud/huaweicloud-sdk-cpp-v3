
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseAlarmConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseAlarmConfidence_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_OCR_V1_EXPORT  VehicleLicenseAlarmConfidence
    : public ModelBase
{
public:
    VehicleLicenseAlarmConfidence();
    virtual ~VehicleLicenseAlarmConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VehicleLicenseAlarmConfidence members

    /// <summary>
    /// 证件图像框内遮挡告警分数，分数越高，证件图像框内遮挡的可能性越高。
    /// </summary>

    int32_t getBlockingWithinBorderScore() const;
    bool blockingWithinBorderScoreIsSet() const;
    void unsetblockingWithinBorderScore();
    void setBlockingWithinBorderScore(int32_t value);

    /// <summary>
    /// 证件图像边框完整性告警分数，分数越高，证件图像边框不完整的可能性越高。
    /// </summary>

    int32_t getBorderIntegrityScore() const;
    bool borderIntegrityScoreIsSet() const;
    void unsetborderIntegrityScore();
    void setBorderIntegrityScore(int32_t value);


protected:
    int32_t blockingWithinBorderScore_;
    bool blockingWithinBorderScoreIsSet_;
    int32_t borderIntegrityScore_;
    bool borderIntegrityScoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseAlarmConfidence_H_
