

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfoHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHbaInfoHistoryRequest::ListHbaInfoHistoryRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListHbaInfoHistoryRequest::~ListHbaInfoHistoryRequest() = default;

void ListHbaInfoHistoryRequest::validate()
{
}

web::json::value ListHbaInfoHistoryRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListHbaInfoHistoryRequest::fromJson(const web::json::value& val)
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
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    return ok;
}


std::string ListHbaInfoHistoryRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHbaInfoHistoryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHbaInfoHistoryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHbaInfoHistoryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListHbaInfoHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ListHbaInfoHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListHbaInfoHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListHbaInfoHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

utility::datetime ListHbaInfoHistoryRequest::getStartTime() const
{
    return startTime_;
}

void ListHbaInfoHistoryRequest::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListHbaInfoHistoryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListHbaInfoHistoryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime ListHbaInfoHistoryRequest::getEndTime() const
{
    return endTime_;
}

void ListHbaInfoHistoryRequest::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListHbaInfoHistoryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListHbaInfoHistoryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListHbaInfoHistoryRequest::getOffset() const
{
    return offset_;
}

void ListHbaInfoHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHbaInfoHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHbaInfoHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHbaInfoHistoryRequest::getLimit() const
{
    return limit_;
}

void ListHbaInfoHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHbaInfoHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHbaInfoHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


