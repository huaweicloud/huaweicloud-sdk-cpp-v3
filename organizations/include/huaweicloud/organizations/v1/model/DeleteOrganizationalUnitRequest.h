
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DeleteOrganizationalUnitRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DeleteOrganizationalUnitRequest_H_


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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  DeleteOrganizationalUnitRequest
    : public ModelBase
{
public:
    DeleteOrganizationalUnitRequest();
    virtual ~DeleteOrganizationalUnitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteOrganizationalUnitRequest members

    /// <summary>
    /// 与组织单元关联的唯一标识符（ID）。
    /// </summary>

    std::string getOrganizationalUnitId() const;
    bool organizationalUnitIdIsSet() const;
    void unsetorganizationalUnitId();
    void setOrganizationalUnitId(const std::string& value);


protected:
    std::string organizationalUnitId_;
    bool organizationalUnitIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteOrganizationalUnitRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteOrganizationalUnitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DeleteOrganizationalUnitRequest_H_
