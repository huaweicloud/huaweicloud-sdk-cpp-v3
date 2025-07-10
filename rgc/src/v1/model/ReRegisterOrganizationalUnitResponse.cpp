

#include "huaweicloud/rgc/v1/model/ReRegisterOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ReRegisterOrganizationalUnitResponse::ReRegisterOrganizationalUnitResponse()
{
    organizationalUnitOperationId_ = "";
    organizationalUnitOperationIdIsSet_ = false;
}

ReRegisterOrganizationalUnitResponse::~ReRegisterOrganizationalUnitResponse() = default;

void ReRegisterOrganizationalUnitResponse::validate()
{
}

web::json::value ReRegisterOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitOperationIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_operation_id")] = ModelBase::toJson(organizationalUnitOperationId_);
    }

    return val;
}
bool ReRegisterOrganizationalUnitResponse::fromJson(const web::json::value& val)
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


std::string ReRegisterOrganizationalUnitResponse::getOrganizationalUnitOperationId() const
{
    return organizationalUnitOperationId_;
}

void ReRegisterOrganizationalUnitResponse::setOrganizationalUnitOperationId(const std::string& value)
{
    organizationalUnitOperationId_ = value;
    organizationalUnitOperationIdIsSet_ = true;
}

bool ReRegisterOrganizationalUnitResponse::organizationalUnitOperationIdIsSet() const
{
    return organizationalUnitOperationIdIsSet_;
}

void ReRegisterOrganizationalUnitResponse::unsetorganizationalUnitOperationId()
{
    organizationalUnitOperationIdIsSet_ = false;
}

}
}
}
}
}


