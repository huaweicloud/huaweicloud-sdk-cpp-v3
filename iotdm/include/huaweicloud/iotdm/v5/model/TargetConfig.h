
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_TargetConfig_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_TargetConfig_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/Flavor.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例规格变更时，实例的目标规格配置。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  TargetConfig
    : public ModelBase
{
public:
    TargetConfig();
    virtual ~TargetConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TargetConfig members

    /// <summary>
    /// 
    /// </summary>

    Flavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const Flavor& value);

    /// <summary>
    /// **参数说明**：实例的付费方式。 **取值范围**： - prePaid：包年/包月 - postPaid：按需计费 
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);


protected:
    Flavor flavor_;
    bool flavorIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_TargetConfig_H_
