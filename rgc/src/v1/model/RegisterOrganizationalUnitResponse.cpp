

#include "huaweicloud/rgc/v1/model/RegisterOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




RegisterOrganizationalUnitResponse::RegisterOrganizationalUnitResponse()
{
    organizationalUnitOperationId_ = "";
    organizationalUnitOperationIdIsSet_ = false;
}

RegisterOrganizationalUnitResponse::~RegisterOrganizationalUnitResponse() = default;

void RegisterOrganizationalUnitResponse::validate()
{
}

web::json::value RegisterOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitOperationIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_operation_id")] = ModelBase::toJson(organizationalUnitOperationId_);
    }

    return val;
}
bool RegisterOrganizationalUnitResponse::fromJson(const web::json::value& val)
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


std::string RegisterOrganizationalUnitResponse::getOrganizationalUnitOperationId() const
{
    return organizationalUnitOperationId_;
}

void RegisterOrganizationalUnitResponse::setOrganizationalUnitOperationId(const std::string& value)
{
    organizationalUnitOperationId_ = value;
    organizationalUnitOperationIdIsSet_ = true;
}

bool RegisterOrganizationalUnitResponse::organizationalUnitOperationIdIsSet() const
{
    return organizationalUnitOperationIdIsSet_;
}

void RegisterOrganizationalUnitResponse::unsetorganizationalUnitOperationId()
{
    organizationalUnitOperationIdIsSet_ = false;
}

}
}
}
}
}


