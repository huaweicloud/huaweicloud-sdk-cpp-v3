

#include "huaweicloud/rgc/v1/model/CreateOrganizationalUnitReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateOrganizationalUnitReqBody::CreateOrganizationalUnitReqBody()
{
    name_ = "";
    nameIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
}

CreateOrganizationalUnitReqBody::~CreateOrganizationalUnitReqBody() = default;

void CreateOrganizationalUnitReqBody::validate()
{
}

web::json::value CreateOrganizationalUnitReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool CreateOrganizationalUnitReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    return ok;
}


std::string CreateOrganizationalUnitReqBody::getName() const
{
    return name_;
}

void CreateOrganizationalUnitReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateOrganizationalUnitReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateOrganizationalUnitReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateOrganizationalUnitReqBody::getParentId() const
{
    return parentId_;
}

void CreateOrganizationalUnitReqBody::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CreateOrganizationalUnitReqBody::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CreateOrganizationalUnitReqBody::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


