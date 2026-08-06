
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyPolicyResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyPolicyResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kms/v2/model/UpdateKeyPolicyResponseBody_policy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  UpdateKeyPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateKeyPolicyResponse();
    virtual ~UpdateKeyPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeyPolicyResponse members

    /// <summary>
    /// **参数解释：** 密钥策略ID **取值范围：** 不涉及
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateKeyPolicyResponseBody_policy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const UpdateKeyPolicyResponseBody_policy& value);

    /// <summary>
    /// **参数解释：** 密钥策略描述信息 **取值范围：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略最近更新时间 **取值范围：** 不涉及
    /// </summary>

    std::string getLastModifyTime() const;
    bool lastModifyTimeIsSet() const;
    void unsetlastModifyTime();
    void setLastModifyTime(const std::string& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    UpdateKeyPolicyResponseBody_policy policy_;
    bool policyIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string lastModifyTime_;
    bool lastModifyTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyPolicyResponse_H_
