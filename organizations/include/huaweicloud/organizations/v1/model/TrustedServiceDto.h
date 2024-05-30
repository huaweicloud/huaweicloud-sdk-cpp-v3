
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TrustedServiceDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TrustedServiceDto_H_


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
/// 包含可信服务详细信息的结构，可信服务表示已启用与组织集成的服务。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  TrustedServiceDto
    : public ModelBase
{
public:
    TrustedServiceDto();
    virtual ~TrustedServiceDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrustedServiceDto members

    /// <summary>
    /// 可信服务的名称。
    /// </summary>

    std::string getServicePrincipal() const;
    bool servicePrincipalIsSet() const;
    void unsetservicePrincipal();
    void setServicePrincipal(const std::string& value);

    /// <summary>
    /// 可信服务与组织集成的日期。
    /// </summary>

    utility::datetime getEnabledAt() const;
    bool enabledAtIsSet() const;
    void unsetenabledAt();
    void setEnabledAt(const utility::datetime& value);


protected:
    std::string servicePrincipal_;
    bool servicePrincipalIsSet_;
    utility::datetime enabledAt_;
    bool enabledAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TrustedServiceDto_H_
