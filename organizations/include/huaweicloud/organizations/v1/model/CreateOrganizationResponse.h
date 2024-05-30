
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/OrganizationDto.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateOrganizationResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateOrganizationResponse();
    virtual ~CreateOrganizationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOrganizationResponse members

    /// <summary>
    /// 
    /// </summary>

    OrganizationDto getOrganization() const;
    bool organizationIsSet() const;
    void unsetorganization();
    void setOrganization(const OrganizationDto& value);


protected:
    OrganizationDto organization_;
    bool organizationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationResponse_H_
