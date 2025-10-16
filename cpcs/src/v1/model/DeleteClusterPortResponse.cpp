

#include "huaweicloud/cpcs/v1/model/DeleteClusterPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteClusterPortResponse::DeleteClusterPortResponse()
{
    deleteTenantResource_ = "";
    deleteTenantResourceIsSet_ = false;
}

DeleteClusterPortResponse::~DeleteClusterPortResponse() = default;

void DeleteClusterPortResponse::validate()
{
}

web::json::value DeleteClusterPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteTenantResourceIsSet_) {
        val[utility::conversions::to_string_t("delete_tenant_resource")] = ModelBase::toJson(deleteTenantResource_);
    }

    return val;
}
bool DeleteClusterPortResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_tenant_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_tenant_resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTenantResource(refVal);
        }
    }
    return ok;
}


std::string DeleteClusterPortResponse::getDeleteTenantResource() const
{
    return deleteTenantResource_;
}

void DeleteClusterPortResponse::setDeleteTenantResource(const std::string& value)
{
    deleteTenantResource_ = value;
    deleteTenantResourceIsSet_ = true;
}

bool DeleteClusterPortResponse::deleteTenantResourceIsSet() const
{
    return deleteTenantResourceIsSet_;
}

void DeleteClusterPortResponse::unsetdeleteTenantResource()
{
    deleteTenantResourceIsSet_ = false;
}

}
}
}
}
}


