

#include "huaweicloud/gaussdbforopengauss/v3/model/SessionWaitEventStatisticInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SessionWaitEventStatisticInfo::SessionWaitEventStatisticInfo()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    eventName_ = "";
    eventNameIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
}

SessionWaitEventStatisticInfo::~SessionWaitEventStatisticInfo() = default;

void SessionWaitEventStatisticInfo::validate()
{
}

web::json::value SessionWaitEventStatisticInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool SessionWaitEventStatisticInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string SessionWaitEventStatisticInfo::getNodeName() const
{
    return nodeName_;
}

void SessionWaitEventStatisticInfo::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool SessionWaitEventStatisticInfo::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void SessionWaitEventStatisticInfo::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string SessionWaitEventStatisticInfo::getEventName() const
{
    return eventName_;
}

void SessionWaitEventStatisticInfo::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool SessionWaitEventStatisticInfo::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void SessionWaitEventStatisticInfo::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string SessionWaitEventStatisticInfo::getCount() const
{
    return count_;
}

void SessionWaitEventStatisticInfo::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SessionWaitEventStatisticInfo::countIsSet() const
{
    return countIsSet_;
}

void SessionWaitEventStatisticInfo::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


