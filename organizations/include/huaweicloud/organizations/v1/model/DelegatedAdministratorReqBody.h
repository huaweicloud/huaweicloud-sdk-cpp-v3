
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedAdministratorReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedAdministratorReqBody_H_


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
/// 委托管理员相关操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  DelegatedAdministratorReqBody
    : public ModelBase
{
public:
    DelegatedAdministratorReqBody();
    virtual ~DelegatedAdministratorReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DelegatedAdministratorReqBody members

    /// <summary>
    /// 服务主体名称。
    /// </summary>

    std::string getServicePrincipal() const;
    bool servicePrincipalIsSet() const;
    void unsetservicePrincipal();
    void setServicePrincipal(const std::string& value);

    /// <summary>
    /// 账号的唯一标识符（ID）。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);


protected:
    std::string servicePrincipal_;
    bool servicePrincipalIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedAdministratorReqBody_H_
