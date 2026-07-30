

#include "huaweicloud/modelarts/v1/model/OrderDetailItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




OrderDetailItem::OrderDetailItem()
{
    resourceName_ = "";
    resourceNameIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    beginTimestamp_ = "";
    beginTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

OrderDetailItem::~OrderDetailItem() = default;

void OrderDetailItem::validate()
{
}

web::json::value OrderDetailItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resourceName")] = ModelBase::toJson(resourceName_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(beginTimestampIsSet_) {
        val[utility::conversions::to_string_t("beginTimestamp")] = ModelBase::toJson(beginTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool OrderDetailItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resourceName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("beginTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beginTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string OrderDetailItem::getResourceName() const
{
    return resourceName_;
}

void OrderDetailItem::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool OrderDetailItem::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void OrderDetailItem::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string OrderDetailItem::getAction() const
{
    return action_;
}

void OrderDetailItem::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool OrderDetailItem::actionIsSet() const
{
    return actionIsSet_;
}

void OrderDetailItem::unsetaction()
{
    actionIsSet_ = false;
}

std::string OrderDetailItem::getStatus() const
{
    return status_;
}

void OrderDetailItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OrderDetailItem::statusIsSet() const
{
    return statusIsSet_;
}

void OrderDetailItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string OrderDetailItem::getBeginTimestamp() const
{
    return beginTimestamp_;
}

void OrderDetailItem::setBeginTimestamp(const std::string& value)
{
    beginTimestamp_ = value;
    beginTimestampIsSet_ = true;
}

bool OrderDetailItem::beginTimestampIsSet() const
{
    return beginTimestampIsSet_;
}

void OrderDetailItem::unsetbeginTimestamp()
{
    beginTimestampIsSet_ = false;
}

std::string OrderDetailItem::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void OrderDetailItem::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool OrderDetailItem::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void OrderDetailItem::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

std::string OrderDetailItem::getMessage() const
{
    return message_;
}

void OrderDetailItem::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool OrderDetailItem::messageIsSet() const
{
    return messageIsSet_;
}

void OrderDetailItem::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


