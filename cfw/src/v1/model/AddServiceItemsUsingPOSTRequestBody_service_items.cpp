

#include "huaweicloud/cfw/v1/model/AddServiceItemsUsingPOSTRequestBody_service_items.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceItemsUsingPOSTRequestBody_service_items::AddServiceItemsUsingPOSTRequestBody_service_items()
{
    itemId_ = "";
    itemIdIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
    destPort_ = "";
    destPortIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AddServiceItemsUsingPOSTRequestBody_service_items::~AddServiceItemsUsingPOSTRequestBody_service_items() = default;

void AddServiceItemsUsingPOSTRequestBody_service_items::validate()
{
}

web::json::value AddServiceItemsUsingPOSTRequestBody_service_items::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(destPortIsSet_) {
        val[utility::conversions::to_string_t("dest_port")] = ModelBase::toJson(destPort_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool AddServiceItemsUsingPOSTRequestBody_service_items::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string AddServiceItemsUsingPOSTRequestBody_service_items::getItemId() const
{
    return itemId_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody_service_items::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::unsetitemId()
{
    itemIdIsSet_ = false;
}

int32_t AddServiceItemsUsingPOSTRequestBody_service_items::getProtocol() const
{
    return protocol_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody_service_items::protocolIsSet() const
{
    return protocolIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string AddServiceItemsUsingPOSTRequestBody_service_items::getSourcePort() const
{
    return sourcePort_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody_service_items::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string AddServiceItemsUsingPOSTRequestBody_service_items::getDestPort() const
{
    return destPort_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::setDestPort(const std::string& value)
{
    destPort_ = value;
    destPortIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody_service_items::destPortIsSet() const
{
    return destPortIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::unsetdestPort()
{
    destPortIsSet_ = false;
}

std::string AddServiceItemsUsingPOSTRequestBody_service_items::getName() const
{
    return name_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody_service_items::nameIsSet() const
{
    return nameIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::unsetname()
{
    nameIsSet_ = false;
}

std::string AddServiceItemsUsingPOSTRequestBody_service_items::getDescription() const
{
    return description_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody_service_items::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody_service_items::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


