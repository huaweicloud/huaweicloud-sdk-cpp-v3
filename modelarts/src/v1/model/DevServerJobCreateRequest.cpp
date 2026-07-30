

#include "huaweicloud/modelarts/v1/model/DevServerJobCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DevServerJobCreateRequest::DevServerJobCreateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    serverIdsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    isReboot_ = false;
    isRebootIsSet_ = false;
    itemsIsSet_ = false;
}

DevServerJobCreateRequest::~DevServerJobCreateRequest() = default;

void DevServerJobCreateRequest::validate()
{
}

web::json::value DevServerJobCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(serverIdsIsSet_) {
        val[utility::conversions::to_string_t("server_ids")] = ModelBase::toJson(serverIds_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(isRebootIsSet_) {
        val[utility::conversions::to_string_t("is_reboot")] = ModelBase::toJson(isReboot_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool DevServerJobCreateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_reboot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reboot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReboot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<DevServerJobItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string DevServerJobCreateRequest::getName() const
{
    return name_;
}

void DevServerJobCreateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DevServerJobCreateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DevServerJobCreateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string DevServerJobCreateRequest::getDescription() const
{
    return description_;
}

void DevServerJobCreateRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DevServerJobCreateRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DevServerJobCreateRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& DevServerJobCreateRequest::getServerIds()
{
    return serverIds_;
}

void DevServerJobCreateRequest::setServerIds(const std::vector<std::string>& value)
{
    serverIds_ = value;
    serverIdsIsSet_ = true;
}

bool DevServerJobCreateRequest::serverIdsIsSet() const
{
    return serverIdsIsSet_;
}

void DevServerJobCreateRequest::unsetserverIds()
{
    serverIdsIsSet_ = false;
}

std::string DevServerJobCreateRequest::getType() const
{
    return type_;
}

void DevServerJobCreateRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DevServerJobCreateRequest::typeIsSet() const
{
    return typeIsSet_;
}

void DevServerJobCreateRequest::unsettype()
{
    typeIsSet_ = false;
}

bool DevServerJobCreateRequest::isIsReboot() const
{
    return isReboot_;
}

void DevServerJobCreateRequest::setIsReboot(bool value)
{
    isReboot_ = value;
    isRebootIsSet_ = true;
}

bool DevServerJobCreateRequest::isRebootIsSet() const
{
    return isRebootIsSet_;
}

void DevServerJobCreateRequest::unsetisReboot()
{
    isRebootIsSet_ = false;
}

std::vector<DevServerJobItem>& DevServerJobCreateRequest::getItems()
{
    return items_;
}

void DevServerJobCreateRequest::setItems(const std::vector<DevServerJobItem>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool DevServerJobCreateRequest::itemsIsSet() const
{
    return itemsIsSet_;
}

void DevServerJobCreateRequest::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


