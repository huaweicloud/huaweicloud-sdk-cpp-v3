

#include "huaweicloud/organizations/v1/model/ShowOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowOrganizationalUnitRequest::ShowOrganizationalUnitRequest()
{
    organizationalUnitId_ = "";
    organizationalUnitIdIsSet_ = false;
}

ShowOrganizationalUnitRequest::~ShowOrganizationalUnitRequest() = default;

void ShowOrganizationalUnitRequest::validate()
{
}

web::json::value ShowOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_id")] = ModelBase::toJson(organizationalUnitId_);
    }

    return val;
}
bool ShowOrganizationalUnitRequest::fromJson(const web::json::value& val)
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


std::string ShowOrganizationalUnitRequest::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void ShowOrganizationalUnitRequest::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool ShowOrganizationalUnitRequest::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void ShowOrganizationalUnitRequest::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

}
}
}
}
}


