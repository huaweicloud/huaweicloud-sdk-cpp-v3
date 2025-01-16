

#include "huaweicloud/ecs/v2/model/ListServerAzInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerAzInfo::ListServerAzInfo()
{
    availabilityZoneId_ = "";
    availabilityZoneIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    azGroupIdsIsSet_ = false;
    category_ = 0;
    categoryIsSet_ = false;
}

ListServerAzInfo::~ListServerAzInfo() = default;

void ListServerAzInfo::validate()
{
}

web::json::value ListServerAzInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIdIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_id")] = ModelBase::toJson(availabilityZoneId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(azGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("az_group_ids")] = ModelBase::toJson(azGroupIds_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool ListServerAzInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("az_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


std::string ListServerAzInfo::getAvailabilityZoneId() const
{
    return availabilityZoneId_;
}

void ListServerAzInfo::setAvailabilityZoneId(const std::string& value)
{
    availabilityZoneId_ = value;
    availabilityZoneIdIsSet_ = true;
}

bool ListServerAzInfo::availabilityZoneIdIsSet() const
{
    return availabilityZoneIdIsSet_;
}

void ListServerAzInfo::unsetavailabilityZoneId()
{
    availabilityZoneIdIsSet_ = false;
}

std::string ListServerAzInfo::getType() const
{
    return type_;
}

void ListServerAzInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListServerAzInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ListServerAzInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ListServerAzInfo::getMode() const
{
    return mode_;
}

void ListServerAzInfo::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListServerAzInfo::modeIsSet() const
{
    return modeIsSet_;
}

void ListServerAzInfo::unsetmode()
{
    modeIsSet_ = false;
}

std::string ListServerAzInfo::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListServerAzInfo::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListServerAzInfo::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListServerAzInfo::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ListServerAzInfo::getAlias() const
{
    return alias_;
}

void ListServerAzInfo::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool ListServerAzInfo::aliasIsSet() const
{
    return aliasIsSet_;
}

void ListServerAzInfo::unsetalias()
{
    aliasIsSet_ = false;
}

std::vector<std::string>& ListServerAzInfo::getAzGroupIds()
{
    return azGroupIds_;
}

void ListServerAzInfo::setAzGroupIds(const std::vector<std::string>& value)
{
    azGroupIds_ = value;
    azGroupIdsIsSet_ = true;
}

bool ListServerAzInfo::azGroupIdsIsSet() const
{
    return azGroupIdsIsSet_;
}

void ListServerAzInfo::unsetazGroupIds()
{
    azGroupIdsIsSet_ = false;
}

int32_t ListServerAzInfo::getCategory() const
{
    return category_;
}

void ListServerAzInfo::setCategory(int32_t value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListServerAzInfo::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListServerAzInfo::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


