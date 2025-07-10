

#include "huaweicloud/rgc/v1/model/UpdateManagedAccountRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




UpdateManagedAccountRequestBody::UpdateManagedAccountRequestBody()
{
    parentOrganizationalUnitId_ = "";
    parentOrganizationalUnitIdIsSet_ = false;
    parentOrganizationalUnitName_ = "";
    parentOrganizationalUnitNameIsSet_ = false;
    blueprintIsSet_ = false;
}

UpdateManagedAccountRequestBody::~UpdateManagedAccountRequestBody() = default;

void UpdateManagedAccountRequestBody::validate()
{
}

web::json::value UpdateManagedAccountRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_id")] = ModelBase::toJson(parentOrganizationalUnitId_);
    }
    if(parentOrganizationalUnitNameIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_name")] = ModelBase::toJson(parentOrganizationalUnitName_);
    }
    if(blueprintIsSet_) {
        val[utility::conversions::to_string_t("blueprint")] = ModelBase::toJson(blueprint_);
    }

    return val;
}
bool UpdateManagedAccountRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitName(refVal);
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


std::string UpdateManagedAccountRequestBody::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void UpdateManagedAccountRequestBody::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool UpdateManagedAccountRequestBody::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void UpdateManagedAccountRequestBody::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string UpdateManagedAccountRequestBody::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void UpdateManagedAccountRequestBody::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool UpdateManagedAccountRequestBody::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void UpdateManagedAccountRequestBody::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

Blueprint UpdateManagedAccountRequestBody::getBlueprint() const
{
    return blueprint_;
}

void UpdateManagedAccountRequestBody::setBlueprint(const Blueprint& value)
{
    blueprint_ = value;
    blueprintIsSet_ = true;
}

bool UpdateManagedAccountRequestBody::blueprintIsSet() const
{
    return blueprintIsSet_;
}

void UpdateManagedAccountRequestBody::unsetblueprint()
{
    blueprintIsSet_ = false;
}

}
}
}
}
}


