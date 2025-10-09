

#include "huaweicloud/cce/v3/model/GetAvailableZoneResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetAvailableZoneResponseBody::GetAvailableZoneResponseBody()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    azGroupIdsIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

GetAvailableZoneResponseBody::~GetAvailableZoneResponseBody() = default;

void GetAvailableZoneResponseBody::validate()
{
}

web::json::value GetAvailableZoneResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(azGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("azGroupIds")] = ModelBase::toJson(azGroupIds_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("PublicBorderGroup")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool GetAvailableZoneResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("azGroupIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azGroupIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PublicBorderGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("PublicBorderGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string GetAvailableZoneResponseBody::getId() const
{
    return id_;
}

void GetAvailableZoneResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetAvailableZoneResponseBody::idIsSet() const
{
    return idIsSet_;
}

void GetAvailableZoneResponseBody::unsetid()
{
    idIsSet_ = false;
}

std::string GetAvailableZoneResponseBody::getName() const
{
    return name_;
}

void GetAvailableZoneResponseBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetAvailableZoneResponseBody::nameIsSet() const
{
    return nameIsSet_;
}

void GetAvailableZoneResponseBody::unsetname()
{
    nameIsSet_ = false;
}

std::string GetAvailableZoneResponseBody::getDisplayName() const
{
    return displayName_;
}

void GetAvailableZoneResponseBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool GetAvailableZoneResponseBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void GetAvailableZoneResponseBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::vector<std::string>& GetAvailableZoneResponseBody::getAzGroupIds()
{
    return azGroupIds_;
}

void GetAvailableZoneResponseBody::setAzGroupIds(const std::vector<std::string>& value)
{
    azGroupIds_ = value;
    azGroupIdsIsSet_ = true;
}

bool GetAvailableZoneResponseBody::azGroupIdsIsSet() const
{
    return azGroupIdsIsSet_;
}

void GetAvailableZoneResponseBody::unsetazGroupIds()
{
    azGroupIdsIsSet_ = false;
}

std::string GetAvailableZoneResponseBody::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void GetAvailableZoneResponseBody::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool GetAvailableZoneResponseBody::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void GetAvailableZoneResponseBody::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string GetAvailableZoneResponseBody::getCategory() const
{
    return category_;
}

void GetAvailableZoneResponseBody::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool GetAvailableZoneResponseBody::categoryIsSet() const
{
    return categoryIsSet_;
}

void GetAvailableZoneResponseBody::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string GetAvailableZoneResponseBody::getAlias() const
{
    return alias_;
}

void GetAvailableZoneResponseBody::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool GetAvailableZoneResponseBody::aliasIsSet() const
{
    return aliasIsSet_;
}

void GetAvailableZoneResponseBody::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


