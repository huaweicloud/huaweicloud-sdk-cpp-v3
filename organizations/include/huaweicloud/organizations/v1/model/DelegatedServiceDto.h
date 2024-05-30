
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedServiceDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedServiceDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含有关账号是可信服务委托管理员的信息。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  DelegatedServiceDto
    : public ModelBase
{
public:
    DelegatedServiceDto();
    virtual ~DelegatedServiceDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DelegatedServiceDto members

    /// <summary>
    /// 服务主体的名称。
    /// </summary>

    std::string getServicePrincipal() const;
    bool servicePrincipalIsSet() const;
    void unsetservicePrincipal();
    void setServicePrincipal(const std::string& value);

    /// <summary>
    /// 账号成为此服务的委托管理员的日期。
    /// </summary>

    utility::datetime getDelegationEnabledAt() const;
    bool delegationEnabledAtIsSet() const;
    void unsetdelegationEnabledAt();
    void setDelegationEnabledAt(const utility::datetime& value);


protected:
    std::string servicePrincipal_;
    bool servicePrincipalIsSet_;
    utility::datetime delegationEnabledAt_;
    bool delegationEnabledAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedServiceDto_H_
