

#include "huaweicloud/lts/v2/model/QueryLogKeyWordCountRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




QueryLogKeyWordCountRequestBody::QueryLogKeyWordCountRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    stepInterval_ = 0L;
    stepIntervalIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    isIterative_ = false;
    isIterativeIsSet_ = false;
}

QueryLogKeyWordCountRequestBody::~QueryLogKeyWordCountRequestBody() = default;

void QueryLogKeyWordCountRequestBody::validate()
{
}

web::json::value QueryLogKeyWordCountRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(stepIntervalIsSet_) {
        val[utility::conversions::to_string_t("step_interval")] = ModelBase::toJson(stepInterval_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(isIterativeIsSet_) {
        val[utility::conversions::to_string_t("is_iterative")] = ModelBase::toJson(isIterative_);
    }

    return val;
}
bool QueryLogKeyWordCountRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_interval"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_iterative"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_iterative"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIterative(refVal);
        }
    }
    return ok;
}


std::string QueryLogKeyWordCountRequestBody::getStartTime() const
{
    return startTime_;
}

void QueryLogKeyWordCountRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool QueryLogKeyWordCountRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void QueryLogKeyWordCountRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string QueryLogKeyWordCountRequestBody::getEndTime() const
{
    return endTime_;
}

void QueryLogKeyWordCountRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryLogKeyWordCountRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryLogKeyWordCountRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t QueryLogKeyWordCountRequestBody::getStepInterval() const
{
    return stepInterval_;
}

void QueryLogKeyWordCountRequestBody::setStepInterval(int64_t value)
{
    stepInterval_ = value;
    stepIntervalIsSet_ = true;
}

bool QueryLogKeyWordCountRequestBody::stepIntervalIsSet() const
{
    return stepIntervalIsSet_;
}

void QueryLogKeyWordCountRequestBody::unsetstepInterval()
{
    stepIntervalIsSet_ = false;
}

std::string QueryLogKeyWordCountRequestBody::getGroupId() const
{
    return groupId_;
}

void QueryLogKeyWordCountRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool QueryLogKeyWordCountRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void QueryLogKeyWordCountRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string QueryLogKeyWordCountRequestBody::getStreamId() const
{
    return streamId_;
}

void QueryLogKeyWordCountRequestBody::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool QueryLogKeyWordCountRequestBody::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void QueryLogKeyWordCountRequestBody::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string QueryLogKeyWordCountRequestBody::getKeyWord() const
{
    return keyWord_;
}

void QueryLogKeyWordCountRequestBody::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool QueryLogKeyWordCountRequestBody::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void QueryLogKeyWordCountRequestBody::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

bool QueryLogKeyWordCountRequestBody::isIsIterative() const
{
    return isIterative_;
}

void QueryLogKeyWordCountRequestBody::setIsIterative(bool value)
{
    isIterative_ = value;
    isIterativeIsSet_ = true;
}

bool QueryLogKeyWordCountRequestBody::isIterativeIsSet() const
{
    return isIterativeIsSet_;
}

void QueryLogKeyWordCountRequestBody::unsetisIterative()
{
    isIterativeIsSet_ = false;
}

}
}
}
}
}


