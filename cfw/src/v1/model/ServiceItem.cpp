

#include "huaweicloud/cfw/v1/model/ServiceItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceItem::ServiceItem()
{
    protocol_ = 0;
    protocolIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
    destPort_ = "";
    destPortIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ServiceItem::~ServiceItem() = default;

void ServiceItem::validate()
{
}

web::json::value ServiceItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(destPortIsSet_) {
        val[utility::conversions::to_string_t("dest_port")] = ModelBase::toJson(destPort_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ServiceItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    return ok;
}


int32_t ServiceItem::getProtocol() const
{
    return protocol_;
}

void ServiceItem::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ServiceItem::protocolIsSet() const
{
    return protocolIsSet_;
}

void ServiceItem::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ServiceItem::getSourcePort() const
{
    return sourcePort_;
}

void ServiceItem::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool ServiceItem::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void ServiceItem::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string ServiceItem::getDestPort() const
{
    return destPort_;
}

void ServiceItem::setDestPort(const std::string& value)
{
    destPort_ = value;
    destPortIsSet_ = true;
}

bool ServiceItem::destPortIsSet() const
{
    return destPortIsSet_;
}

void ServiceItem::unsetdestPort()
{
    destPortIsSet_ = false;
}

std::string ServiceItem::getDescription() const
{
    return description_;
}

void ServiceItem::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceItem::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceItem::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ServiceItem::getName() const
{
    return name_;
}

void ServiceItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceItem::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceItem::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


