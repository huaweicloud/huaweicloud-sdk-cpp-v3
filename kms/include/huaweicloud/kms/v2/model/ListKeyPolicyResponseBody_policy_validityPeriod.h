
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyPolicyResponseBody_policy_validityPeriod_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyPolicyResponseBody_policy_validityPeriod_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 密钥策略有效期 **取值范围：** 不涉及
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListKeyPolicyResponseBody_policy_validityPeriod
    : public ModelBase
{
public:
    ListKeyPolicyResponseBody_policy_validityPeriod();
    virtual ~ListKeyPolicyResponseBody_policy_validityPeriod();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeyPolicyResponseBody_policy_validityPeriod members

    /// <summary>
    /// **参数解释：** 密钥策略生效时间 **取值范围：** 不涉及
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略截止时间 **取值范围：** 不涉及
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyPolicyResponseBody_policy_validityPeriod_H_
