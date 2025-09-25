

#include "huaweicloud/codehub/v3/model/RepoStatisticsLaunch.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoStatisticsLaunch::RepoStatisticsLaunch()
{
    canStatistics_ = false;
    canStatisticsIsSet_ = false;
    joinId_ = "";
    joinIdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

RepoStatisticsLaunch::~RepoStatisticsLaunch() = default;

void RepoStatisticsLaunch::validate()
{
}

web::json::value RepoStatisticsLaunch::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canStatisticsIsSet_) {
        val[utility::conversions::to_string_t("can_statistics")] = ModelBase::toJson(canStatistics_);
    }
    if(joinIdIsSet_) {
        val[utility::conversions::to_string_t("join_id")] = ModelBase::toJson(joinId_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool RepoStatisticsLaunch::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_statistics"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("join_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("join_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinId(refVal);
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


bool RepoStatisticsLaunch::isCanStatistics() const
{
    return canStatistics_;
}

void RepoStatisticsLaunch::setCanStatistics(bool value)
{
    canStatistics_ = value;
    canStatisticsIsSet_ = true;
}

bool RepoStatisticsLaunch::canStatisticsIsSet() const
{
    return canStatisticsIsSet_;
}

void RepoStatisticsLaunch::unsetcanStatistics()
{
    canStatisticsIsSet_ = false;
}

std::string RepoStatisticsLaunch::getJoinId() const
{
    return joinId_;
}

void RepoStatisticsLaunch::setJoinId(const std::string& value)
{
    joinId_ = value;
    joinIdIsSet_ = true;
}

bool RepoStatisticsLaunch::joinIdIsSet() const
{
    return joinIdIsSet_;
}

void RepoStatisticsLaunch::unsetjoinId()
{
    joinIdIsSet_ = false;
}

std::string RepoStatisticsLaunch::getMessage() const
{
    return message_;
}

void RepoStatisticsLaunch::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool RepoStatisticsLaunch::messageIsSet() const
{
    return messageIsSet_;
}

void RepoStatisticsLaunch::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


