

#include "huaweicloud/smn/v2/model/ShowHttpDetectResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ShowHttpDetectResultRequest::ShowHttpDetectResultRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowHttpDetectResultRequest::~ShowHttpDetectResultRequest() = default;

void ShowHttpDetectResultRequest::validate()
{
}

web::json::value ShowHttpDetectResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowHttpDetectResultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string ShowHttpDetectResultRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ShowHttpDetectResultRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ShowHttpDetectResultRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ShowHttpDetectResultRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ShowHttpDetectResultRequest::getTaskId() const
{
    return taskId_;
}

void ShowHttpDetectResultRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowHttpDetectResultRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowHttpDetectResultRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


