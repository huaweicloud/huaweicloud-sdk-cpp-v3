

#include "huaweicloud/live/v1/model/ListFlowRespItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListFlowRespItem::ListFlowRespItem()
{
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    flowId_ = "";
    flowIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
}

ListFlowRespItem::~ListFlowRespItem() = default;

void ListFlowRespItem::validate()
{
}

web::json::value ListFlowRespItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}
bool ListFlowRespItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    return ok;
}


std::string ListFlowRespItem::getName() const
{
    return name_;
}

void ListFlowRespItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListFlowRespItem::nameIsSet() const
{
    return nameIsSet_;
}

void ListFlowRespItem::unsetname()
{
    nameIsSet_ = false;
}

std::string ListFlowRespItem::getRegion() const
{
    return region_;
}

void ListFlowRespItem::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListFlowRespItem::regionIsSet() const
{
    return regionIsSet_;
}

void ListFlowRespItem::unsetregion()
{
    regionIsSet_ = false;
}

std::string ListFlowRespItem::getFlowId() const
{
    return flowId_;
}

void ListFlowRespItem::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ListFlowRespItem::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ListFlowRespItem::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::string ListFlowRespItem::getStatus() const
{
    return status_;
}

void ListFlowRespItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFlowRespItem::statusIsSet() const
{
    return statusIsSet_;
}

void ListFlowRespItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListFlowRespItem::getDescription() const
{
    return description_;
}

void ListFlowRespItem::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListFlowRespItem::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListFlowRespItem::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListFlowRespItem::getProtocol() const
{
    return protocol_;
}

void ListFlowRespItem::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListFlowRespItem::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListFlowRespItem::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


