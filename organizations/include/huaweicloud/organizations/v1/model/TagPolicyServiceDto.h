
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagPolicyServiceDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagPolicyServiceDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// A quota of organization.
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  TagPolicyServiceDto
    : public ModelBase
{
public:
    TagPolicyServiceDto();
    virtual ~TagPolicyServiceDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagPolicyServiceDto members

    /// <summary>
    /// The service name of the service.
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getResourceTypes();
    bool resourceTypesIsSet() const;
    void unsetresourceTypes();
    void setResourceTypes(const std::vector<std::string>& value);

    /// <summary>
    /// resource_type是否支持全量选择，即*
    /// </summary>

    bool isSupportAll() const;
    bool supportAllIsSet() const;
    void unsetsupportAll();
    void setSupportAll(bool value);


protected:
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::vector<std::string> resourceTypes_;
    bool resourceTypesIsSet_;
    bool supportAll_;
    bool supportAllIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagPolicyServiceDto_H_
