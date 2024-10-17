

#include "huaweicloud/dbss/v1/model/AlarmLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AlarmLogRequest::AlarmLogRequest()
{
    timeIsSet_ = false;
    risk_ = "";
    riskIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

AlarmLogRequest::~AlarmLogRequest() = default;

void AlarmLogRequest::validate()
{
}

web::json::value AlarmLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(riskIsSet_) {
        val[utility::conversions::to_string_t("risk")] = ModelBase::toJson(risk_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool AlarmLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            AlarmLogRequest_time refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


AlarmLogRequest_time AlarmLogRequest::getTime() const
{
    return time_;
}

void AlarmLogRequest::setTime(const AlarmLogRequest_time& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool AlarmLogRequest::timeIsSet() const
{
    return timeIsSet_;
}

void AlarmLogRequest::unsettime()
{
    timeIsSet_ = false;
}

std::string AlarmLogRequest::getRisk() const
{
    return risk_;
}

void AlarmLogRequest::setRisk(const std::string& value)
{
    risk_ = value;
    riskIsSet_ = true;
}

bool AlarmLogRequest::riskIsSet() const
{
    return riskIsSet_;
}

void AlarmLogRequest::unsetrisk()
{
    riskIsSet_ = false;
}

std::string AlarmLogRequest::getType() const
{
    return type_;
}

void AlarmLogRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AlarmLogRequest::typeIsSet() const
{
    return typeIsSet_;
}

void AlarmLogRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string AlarmLogRequest::getStatus() const
{
    return status_;
}

void AlarmLogRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AlarmLogRequest::statusIsSet() const
{
    return statusIsSet_;
}

void AlarmLogRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t AlarmLogRequest::getPage() const
{
    return page_;
}

void AlarmLogRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool AlarmLogRequest::pageIsSet() const
{
    return pageIsSet_;
}

void AlarmLogRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t AlarmLogRequest::getSize() const
{
    return size_;
}

void AlarmLogRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool AlarmLogRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void AlarmLogRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


