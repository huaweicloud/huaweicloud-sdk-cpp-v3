

#include "huaweicloud/rgc/v1/model/ReRegisterOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ReRegisterOrganizationalUnitRequest::ReRegisterOrganizationalUnitRequest()
{
    organizationalUnitId_ = "";
    organizationalUnitIdIsSet_ = false;
}

ReRegisterOrganizationalUnitRequest::~ReRegisterOrganizationalUnitRequest() = default;

void ReRegisterOrganizationalUnitRequest::validate()
{
}

web::json::value ReRegisterOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_id")] = ModelBase::toJson(organizationalUnitId_);
    }

    return val;
}
bool ReRegisterOrganizationalUnitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitId(refVal);
        }
    }
    return ok;
}


std::string ReRegisterOrganizationalUnitRequest::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void ReRegisterOrganizationalUnitRequest::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool ReRegisterOrganizationalUnitRequest::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void ReRegisterOrganizationalUnitRequest::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

}
}
}
}
}


