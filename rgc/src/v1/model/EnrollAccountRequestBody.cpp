

#include "huaweicloud/rgc/v1/model/EnrollAccountRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnrollAccountRequestBody::EnrollAccountRequestBody()
{
    parentOrganizationalUnitId_ = "";
    parentOrganizationalUnitIdIsSet_ = false;
    blueprintIsSet_ = false;
}

EnrollAccountRequestBody::~EnrollAccountRequestBody() = default;

void EnrollAccountRequestBody::validate()
{
}

web::json::value EnrollAccountRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_id")] = ModelBase::toJson(parentOrganizationalUnitId_);
    }
    if(blueprintIsSet_) {
        val[utility::conversions::to_string_t("blueprint")] = ModelBase::toJson(blueprint_);
    }

    return val;
}
bool EnrollAccountRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint"));
        if(!fieldValue.is_null())
        {
            Blueprint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprint(refVal);
        }
    }
    return ok;
}


std::string EnrollAccountRequestBody::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void EnrollAccountRequestBody::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool EnrollAccountRequestBody::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void EnrollAccountRequestBody::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

Blueprint EnrollAccountRequestBody::getBlueprint() const
{
    return blueprint_;
}

void EnrollAccountRequestBody::setBlueprint(const Blueprint& value)
{
    blueprint_ = value;
    blueprintIsSet_ = true;
}

bool EnrollAccountRequestBody::blueprintIsSet() const
{
    return blueprintIsSet_;
}

void EnrollAccountRequestBody::unsetblueprint()
{
    blueprintIsSet_ = false;
}

}
}
}
}
}


