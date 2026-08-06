
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyPolicyResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyPolicyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateKeyPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateKeyPolicyResponse();
    virtual ~CreateKeyPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKeyPolicyResponse members

    /// <summary>
    /// **参数解释：** 密钥策略ID **取值范围：** 不涉及
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyPolicyResponse_H_
