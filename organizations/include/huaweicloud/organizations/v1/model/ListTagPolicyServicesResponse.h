
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListTagPolicyServicesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListTagPolicyServicesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/TagPolicyServiceDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListTagPolicyServicesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTagPolicyServicesResponse();
    virtual ~ListTagPolicyServicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTagPolicyServicesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TagPolicyServiceDto>& getServices();
    bool servicesIsSet() const;
    void unsetservices();
    void setServices(const std::vector<TagPolicyServiceDto>& value);


protected:
    std::vector<TagPolicyServiceDto> services_;
    bool servicesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListTagPolicyServicesResponse_H_
