

#include "huaweicloud/cfw/v1/model/UpdateObjectConfigDesc.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateObjectConfigDesc::UpdateObjectConfigDesc()
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

UpdateObjectConfigDesc::~UpdateObjectConfigDesc() = default;

void UpdateObjectConfigDesc::validate()
{
}

web::json::value UpdateObjectConfigDesc::toJson() const
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
bool UpdateObjectConfigDesc::fromJson(const web::json::value& val)
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


std::string UpdateObjectConfigDesc::getDescription() const
{
    return description_;
}

void UpdateObjectConfigDesc::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateObjectConfigDesc::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateObjectConfigDesc::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateObjectConfigDesc::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateObjectConfigDesc::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateObjectConfigDesc::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateObjectConfigDesc::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string UpdateObjectConfigDesc::getItemId() const
{
    return itemId_;
}

void UpdateObjectConfigDesc::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool UpdateObjectConfigDesc::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void UpdateObjectConfigDesc::unsetitemId()
{
    itemIdIsSet_ = false;
}

std::string UpdateObjectConfigDesc::getSetId() const
{
    return setId_;
}

void UpdateObjectConfigDesc::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool UpdateObjectConfigDesc::setIdIsSet() const
{
    return setIdIsSet_;
}

void UpdateObjectConfigDesc::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string UpdateObjectConfigDesc::getType() const
{
    return type_;
}

void UpdateObjectConfigDesc::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateObjectConfigDesc::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateObjectConfigDesc::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


