
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateOrganizationalUnitResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateOrganizationalUnitResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/OrganizationalUnitDto.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UpdateOrganizationalUnitResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateOrganizationalUnitResponse();
    virtual ~UpdateOrganizationalUnitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateOrganizationalUnitResponse members

    /// <summary>
    /// 
    /// </summary>

    OrganizationalUnitDto getOrganizationalUnit() const;
    bool organizationalUnitIsSet() const;
    void unsetorganizationalUnit();
    void setOrganizationalUnit(const OrganizationalUnitDto& value);


protected:
    OrganizationalUnitDto organizationalUnit_;
    bool organizationalUnitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateOrganizationalUnitResponse_H_
