

#include "huaweicloud/rgc/v1/model/DeregisterOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DeregisterOrganizationalUnitResponse::DeregisterOrganizationalUnitResponse()
{
    organizationalUnitOperationId_ = "";
    organizationalUnitOperationIdIsSet_ = false;
}

DeregisterOrganizationalUnitResponse::~DeregisterOrganizationalUnitResponse() = default;

void DeregisterOrganizationalUnitResponse::validate()
{
}

web::json::value DeregisterOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitOperationIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_operation_id")] = ModelBase::toJson(organizationalUnitOperationId_);
    }

    return val;
}
bool DeregisterOrganizationalUnitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitOperationId(refVal);
        }
    }
    return ok;
}


std::string DeregisterOrganizationalUnitResponse::getOrganizationalUnitOperationId() const
{
    return organizationalUnitOperationId_;
}

void DeregisterOrganizationalUnitResponse::setOrganizationalUnitOperationId(const std::string& value)
{
    organizationalUnitOperationId_ = value;
    organizationalUnitOperationIdIsSet_ = true;
}

bool DeregisterOrganizationalUnitResponse::organizationalUnitOperationIdIsSet() const
{
    return organizationalUnitOperationIdIsSet_;
}

void DeregisterOrganizationalUnitResponse::unsetorganizationalUnitOperationId()
{
    organizationalUnitOperationIdIsSet_ = false;
}

}
}
}
}
}


