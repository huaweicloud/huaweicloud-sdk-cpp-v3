
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyAutoEnlargePolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyAutoEnlargePolicyRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ModifyAutoEnlargePolicyRequestBody
    : public ModelBase
{
public:
    ModifyAutoEnlargePolicyRequestBody();
    virtual ~ModifyAutoEnlargePolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyAutoEnlargePolicyRequestBody members

    /// <summary>
    /// **参数解释**: 磁盘自动扩容开关。 **约束限制**: 不涉及。 **取值范围**: - true：开启磁盘自动扩容。 - false：开启磁盘自动扩容。  **默认取值**: 不涉及。
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);

    /// <summary>
    /// **参数解释**: 存储自动扩容上限。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    int32_t getLimitVolumeSize() const;
    bool limitVolumeSizeIsSet() const;
    void unsetlimitVolumeSize();
    void setLimitVolumeSize(int32_t value);

    /// <summary>
    /// **参数解释**: 可用存储空间率。 **约束限制**: 不涉及。 **取值范围**: 0-100。 **默认取值**: 20。
    /// </summary>

    int32_t getTriggerAvailablePercent() const;
    bool triggerAvailablePercentIsSet() const;
    void unsettriggerAvailablePercent();
    void setTriggerAvailablePercent(int32_t value);

    /// <summary>
    /// **参数解释**: 扩容步长，固定大小扩容方式。 **约束限制**: 40的倍数。 **取值范围**: 不涉及。 **默认取值**: 40。
    /// </summary>

    int32_t getStepSize() const;
    bool stepSizeIsSet() const;
    void unsetstepSize();
    void setStepSize(int32_t value);

    /// <summary>
    /// **参数解释**: 扩容步长，百分比扩容方式。 **约束限制**: 不能小于1。 **取值范围**: 不涉及。 **默认取值**: 20。
    /// </summary>

    int32_t getStepPercent() const;
    bool stepPercentIsSet() const;
    void unsetstepPercent();
    void setStepPercent(int32_t value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;
    int32_t limitVolumeSize_;
    bool limitVolumeSizeIsSet_;
    int32_t triggerAvailablePercent_;
    bool triggerAvailablePercentIsSet_;
    int32_t stepSize_;
    bool stepSizeIsSet_;
    int32_t stepPercent_;
    bool stepPercentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyAutoEnlargePolicyRequestBody_H_
