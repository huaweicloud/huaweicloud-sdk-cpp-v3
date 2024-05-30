

#include "huaweicloud/organizations/v1/model/UpdateOrganizationalUnitReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateOrganizationalUnitReqBody::UpdateOrganizationalUnitReqBody()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateOrganizationalUnitReqBody::~UpdateOrganizationalUnitReqBody() = default;

void UpdateOrganizationalUnitReqBody::validate()
{
}

web::json::value UpdateOrganizationalUnitReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateOrganizationalUnitReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string UpdateOrganizationalUnitReqBody::getName() const
{
    return name_;
}

void UpdateOrganizationalUnitReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateOrganizationalUnitReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateOrganizationalUnitReqBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


