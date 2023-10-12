

#include "huaweicloud/cfw/v1/model/ServiceItemListResponseDto_data_records.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceItemListResponseDto_data_records::ServiceItemListResponseDto_data_records()
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

ServiceItemListResponseDto_data_records::~ServiceItemListResponseDto_data_records() = default;

void ServiceItemListResponseDto_data_records::validate()
{
}

web::json::value ServiceItemListResponseDto_data_records::toJson() const
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
bool ServiceItemListResponseDto_data_records::fromJson(const web::json::value& val)
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


std::string ServiceItemListResponseDto_data_records::getItemId() const
{
    return itemId_;
}

void ServiceItemListResponseDto_data_records::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool ServiceItemListResponseDto_data_records::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void ServiceItemListResponseDto_data_records::unsetitemId()
{
    itemIdIsSet_ = false;
}

int32_t ServiceItemListResponseDto_data_records::getProtocol() const
{
    return protocol_;
}

void ServiceItemListResponseDto_data_records::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ServiceItemListResponseDto_data_records::protocolIsSet() const
{
    return protocolIsSet_;
}

void ServiceItemListResponseDto_data_records::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ServiceItemListResponseDto_data_records::getSourcePort() const
{
    return sourcePort_;
}

void ServiceItemListResponseDto_data_records::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool ServiceItemListResponseDto_data_records::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void ServiceItemListResponseDto_data_records::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string ServiceItemListResponseDto_data_records::getDestPort() const
{
    return destPort_;
}

void ServiceItemListResponseDto_data_records::setDestPort(const std::string& value)
{
    destPort_ = value;
    destPortIsSet_ = true;
}

bool ServiceItemListResponseDto_data_records::destPortIsSet() const
{
    return destPortIsSet_;
}

void ServiceItemListResponseDto_data_records::unsetdestPort()
{
    destPortIsSet_ = false;
}

std::string ServiceItemListResponseDto_data_records::getName() const
{
    return name_;
}

void ServiceItemListResponseDto_data_records::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceItemListResponseDto_data_records::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceItemListResponseDto_data_records::unsetname()
{
    nameIsSet_ = false;
}

std::string ServiceItemListResponseDto_data_records::getDescription() const
{
    return description_;
}

void ServiceItemListResponseDto_data_records::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceItemListResponseDto_data_records::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceItemListResponseDto_data_records::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


