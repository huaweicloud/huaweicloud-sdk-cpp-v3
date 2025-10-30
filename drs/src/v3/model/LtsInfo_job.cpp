

#include "huaweicloud/drs/v3/model/LtsInfo_job.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




LtsInfo_job::LtsInfo_job()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    ltsEnabled_ = false;
    ltsEnabledIsSet_ = false;
}

LtsInfo_job::~LtsInfo_job() = default;

void LtsInfo_job::validate()
{
}

web::json::value LtsInfo_job::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(ltsEnabledIsSet_) {
        val[utility::conversions::to_string_t("lts_enabled")] = ModelBase::toJson(ltsEnabled_);
    }

    return val;
}
bool LtsInfo_job::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsEnabled(refVal);
        }
    }
    return ok;
}


std::string LtsInfo_job::getLogGroupId() const
{
    return logGroupId_;
}

void LtsInfo_job::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LtsInfo_job::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LtsInfo_job::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LtsInfo_job::getLogStreamId() const
{
    return logStreamId_;
}

void LtsInfo_job::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LtsInfo_job::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LtsInfo_job::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

bool LtsInfo_job::isLtsEnabled() const
{
    return ltsEnabled_;
}

void LtsInfo_job::setLtsEnabled(bool value)
{
    ltsEnabled_ = value;
    ltsEnabledIsSet_ = true;
}

bool LtsInfo_job::ltsEnabledIsSet() const
{
    return ltsEnabledIsSet_;
}

void LtsInfo_job::unsetltsEnabled()
{
    ltsEnabledIsSet_ = false;
}

}
}
}
}
}


