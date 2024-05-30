
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TrustedServiceReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TrustedServiceReqBody_H_


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
/// 可信服务相关操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  TrustedServiceReqBody
    : public ModelBase
{
public:
    TrustedServiceReqBody();
    virtual ~TrustedServiceReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrustedServiceReqBody members

    /// <summary>
    /// 服务主体名称。
    /// </summary>

    std::string getServicePrincipal() const;
    bool servicePrincipalIsSet() const;
    void unsetservicePrincipal();
    void setServicePrincipal(const std::string& value);


protected:
    std::string servicePrincipal_;
    bool servicePrincipalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TrustedServiceReqBody_H_
