

#include "huaweicloud/rds/v3/model/ListJobInfoDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListJobInfoDetailRequest::ListJobInfoDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListJobInfoDetailRequest::~ListJobInfoDetailRequest() = default;

void ListJobInfoDetailRequest::validate()
{
}

web::json::value ListJobInfoDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListJobInfoDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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
    return ok;
}

std::string ListJobInfoDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListJobInfoDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListJobInfoDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListJobInfoDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListJobInfoDetailRequest::getInstanceId() const
{
    return instanceId_;
}

void ListJobInfoDetailRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListJobInfoDetailRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListJobInfoDetailRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListJobInfoDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListJobInfoDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListJobInfoDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListJobInfoDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListJobInfoDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListJobInfoDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListJobInfoDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListJobInfoDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


