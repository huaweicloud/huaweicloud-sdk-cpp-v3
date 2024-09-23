
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowEffectivePoliciesRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowEffectivePoliciesRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ShowEffectivePoliciesRequest
    : public ModelBase
{
public:
    ShowEffectivePoliciesRequest();
    virtual ~ShowEffectivePoliciesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEffectivePoliciesRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 账号的唯一标识符（ID）。当前还不支持指定根、组织单元。
    /// </summary>

    std::string getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();
    void setEntityId(const std::string& value);

    /// <summary>
    /// 策略类型的名称，tag_policy标签策略。
    /// </summary>

    std::string getPolicyType() const;
    bool policyTypeIsSet() const;
    void unsetpolicyType();
    void setPolicyType(const std::string& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string entityId_;
    bool entityIdIsSet_;
    std::string policyType_;
    bool policyTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowEffectivePoliciesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowEffectivePoliciesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowEffectivePoliciesRequest_H_
