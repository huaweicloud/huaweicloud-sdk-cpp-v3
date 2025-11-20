

#include "huaweicloud/aad/v2/model/ShowAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowAlarmConfigResponse::ShowAlarmConfigResponse()
{
    blackhole_ = "";
    blackholeIsSet_ = false;
    ddos_ = "";
    ddosIsSet_ = false;
    topicName_ = "";
    topicNameIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

ShowAlarmConfigResponse::~ShowAlarmConfigResponse() = default;

void ShowAlarmConfigResponse::validate()
{
}

web::json::value ShowAlarmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blackholeIsSet_) {
        val[utility::conversions::to_string_t("blackhole")] = ModelBase::toJson(blackhole_);
    }
    if(ddosIsSet_) {
        val[utility::conversions::to_string_t("ddos")] = ModelBase::toJson(ddos_);
    }
    if(topicNameIsSet_) {
        val[utility::conversions::to_string_t("topic_name")] = ModelBase::toJson(topicName_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool ShowAlarmConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blackhole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blackhole"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlackhole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddos"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    return ok;
}


std::string ShowAlarmConfigResponse::getBlackhole() const
{
    return blackhole_;
}

void ShowAlarmConfigResponse::setBlackhole(const std::string& value)
{
    blackhole_ = value;
    blackholeIsSet_ = true;
}

bool ShowAlarmConfigResponse::blackholeIsSet() const
{
    return blackholeIsSet_;
}

void ShowAlarmConfigResponse::unsetblackhole()
{
    blackholeIsSet_ = false;
}

std::string ShowAlarmConfigResponse::getDdos() const
{
    return ddos_;
}

void ShowAlarmConfigResponse::setDdos(const std::string& value)
{
    ddos_ = value;
    ddosIsSet_ = true;
}

bool ShowAlarmConfigResponse::ddosIsSet() const
{
    return ddosIsSet_;
}

void ShowAlarmConfigResponse::unsetddos()
{
    ddosIsSet_ = false;
}

std::string ShowAlarmConfigResponse::getTopicName() const
{
    return topicName_;
}

void ShowAlarmConfigResponse::setTopicName(const std::string& value)
{
    topicName_ = value;
    topicNameIsSet_ = true;
}

bool ShowAlarmConfigResponse::topicNameIsSet() const
{
    return topicNameIsSet_;
}

void ShowAlarmConfigResponse::unsettopicName()
{
    topicNameIsSet_ = false;
}

std::string ShowAlarmConfigResponse::getTopicUrn() const
{
    return topicUrn_;
}

void ShowAlarmConfigResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ShowAlarmConfigResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ShowAlarmConfigResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


