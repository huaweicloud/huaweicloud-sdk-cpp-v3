

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstanceErrorLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstanceErrorLogsRequest::ListInstanceErrorLogsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListInstanceErrorLogsRequest::~ListInstanceErrorLogsRequest() = default;

void ListInstanceErrorLogsRequest::validate()
{
}

web::json::value ListInstanceErrorLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListInstanceErrorLogsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


std::string ListInstanceErrorLogsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstanceErrorLogsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstanceErrorLogsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstanceErrorLogsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListInstanceErrorLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceErrorLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceErrorLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceErrorLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListInstanceErrorLogsRequest::getOffset() const
{
    return offset_;
}

void ListInstanceErrorLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceErrorLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceErrorLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstanceErrorLogsRequest::getLimit() const
{
    return limit_;
}

void ListInstanceErrorLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceErrorLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceErrorLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstanceErrorLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListInstanceErrorLogsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListInstanceErrorLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListInstanceErrorLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListInstanceErrorLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListInstanceErrorLogsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListInstanceErrorLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListInstanceErrorLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


