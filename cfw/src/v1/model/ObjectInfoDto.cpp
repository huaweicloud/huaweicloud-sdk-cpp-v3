

#include "huaweicloud/cfw/v1/model/ObjectInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ObjectInfoDto::ObjectInfoDto()
{
    description_ = "";
    descriptionIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    itemId_ = "";
    itemIdIsSet_ = false;
    setId_ = "";
    setIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ObjectInfoDto::~ObjectInfoDto() = default;

void ObjectInfoDto::validate()
{
}

web::json::value ObjectInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
    }
    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ObjectInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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
    return ok;
}


std::string ObjectInfoDto::getDescription() const
{
    return description_;
}

void ObjectInfoDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ObjectInfoDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ObjectInfoDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ObjectInfoDto::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ObjectInfoDto::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ObjectInfoDto::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ObjectInfoDto::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ObjectInfoDto::getItemId() const
{
    return itemId_;
}

void ObjectInfoDto::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool ObjectInfoDto::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void ObjectInfoDto::unsetitemId()
{
    itemIdIsSet_ = false;
}

std::string ObjectInfoDto::getSetId() const
{
    return setId_;
}

void ObjectInfoDto::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ObjectInfoDto::setIdIsSet() const
{
    return setIdIsSet_;
}

void ObjectInfoDto::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ObjectInfoDto::getType() const
{
    return type_;
}

void ObjectInfoDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ObjectInfoDto::typeIsSet() const
{
    return typeIsSet_;
}

void ObjectInfoDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


