

#include "huaweicloud/lts/v2/model/Results.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Results::Results()
{
    epsId_ = "";
    epsIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logGroupNameAlias_ = "";
    logGroupNameAliasIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    logStreamNameAlias_ = "";
    logStreamNameAliasIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

Results::~Results() = default;

void Results::validate()
{
}

web::json::value Results::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logGroupNameAliasIsSet_) {
        val[utility::conversions::to_string_t("log_group_name_alias")] = ModelBase::toJson(logGroupNameAlias_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(logStreamNameAliasIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name_alias")] = ModelBase::toJson(logStreamNameAlias_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool Results::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupNameAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamNameAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


std::string Results::getEpsId() const
{
    return epsId_;
}

void Results::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool Results::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void Results::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string Results::getLogGroupName() const
{
    return logGroupName_;
}

void Results::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool Results::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void Results::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string Results::getLogGroupNameAlias() const
{
    return logGroupNameAlias_;
}

void Results::setLogGroupNameAlias(const std::string& value)
{
    logGroupNameAlias_ = value;
    logGroupNameAliasIsSet_ = true;
}

bool Results::logGroupNameAliasIsSet() const
{
    return logGroupNameAliasIsSet_;
}

void Results::unsetlogGroupNameAlias()
{
    logGroupNameAliasIsSet_ = false;
}

std::string Results::getLogStreamName() const
{
    return logStreamName_;
}

void Results::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool Results::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void Results::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string Results::getLogStreamNameAlias() const
{
    return logStreamNameAlias_;
}

void Results::setLogStreamNameAlias(const std::string& value)
{
    logStreamNameAlias_ = value;
    logStreamNameAliasIsSet_ = true;
}

bool Results::logStreamNameAliasIsSet() const
{
    return logStreamNameAliasIsSet_;
}

void Results::unsetlogStreamNameAlias()
{
    logStreamNameAliasIsSet_ = false;
}

std::string Results::getTime() const
{
    return time_;
}

void Results::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool Results::timeIsSet() const
{
    return timeIsSet_;
}

void Results::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


