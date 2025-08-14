
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateHAConfigurationReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateHAConfigurationReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateHAConfigurationReqBody
    : public ModelBase
{
public:
    UpdateHAConfigurationReqBody();
    virtual ~UpdateHAConfigurationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHAConfigurationReqBody members

    /// <summary>
    /// 高可用选项，接受高可用或者拒绝高可用功能。
    /// </summary>

    std::string getDisasterRecoveryChoice() const;
    bool disasterRecoveryChoiceIsSet() const;
    void unsetdisasterRecoveryChoice();
    void setDisasterRecoveryChoice(const std::string& value);


protected:
    std::string disasterRecoveryChoice_;
    bool disasterRecoveryChoiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateHAConfigurationReqBody_H_
