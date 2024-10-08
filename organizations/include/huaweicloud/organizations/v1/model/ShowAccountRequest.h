
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowAccountRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowAccountRequest_H_


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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ShowAccountRequest
    : public ModelBase
{
public:
    ShowAccountRequest();
    virtual ~ShowAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAccountRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 是否返回账号邮箱、手机号信息。若此参数为True，Limit最多200。
    /// </summary>

    bool isWithRegisterContactInfo() const;
    bool withRegisterContactInfoIsSet() const;
    void unsetwithRegisterContactInfo();
    void setWithRegisterContactInfo(bool value);

    /// <summary>
    /// 账号的唯一标识符（ID）。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    bool withRegisterContactInfo_;
    bool withRegisterContactInfoIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAccountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowAccountRequest_H_
