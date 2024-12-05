
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetDisasterRecoverySettingsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetDisasterRecoverySettingsRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchoverRatioInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SetDisasterRecoverySettingsRequestBody
    : public ModelBase
{
public:
    SetDisasterRecoverySettingsRequestBody();
    virtual ~SetDisasterRecoverySettingsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetDisasterRecoverySettingsRequestBody members

    /// <summary>
    /// 容灾切换的故障节点比例列表。
    /// </summary>

    std::vector<SwitchoverRatioInfo>& getDisasterRecoverySettings();
    bool disasterRecoverySettingsIsSet() const;
    void unsetdisasterRecoverySettings();
    void setDisasterRecoverySettings(const std::vector<SwitchoverRatioInfo>& value);


protected:
    std::vector<SwitchoverRatioInfo> disasterRecoverySettings_;
    bool disasterRecoverySettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetDisasterRecoverySettingsRequestBody_H_
