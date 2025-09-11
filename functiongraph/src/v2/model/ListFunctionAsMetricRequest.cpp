

#include "huaweicloud/functiongraph/v2/model/ListFunctionAsMetricRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionAsMetricRequest::ListFunctionAsMetricRequest()
{
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionAsMetricRequest::~ListFunctionAsMetricRequest() = default;

void ListFunctionAsMetricRequest::validate()
{
}

web::json::value ListFunctionAsMetricRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListFunctionAsMetricRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListFunctionAsMetricRequest::getType() const
{
    return type_;
}

void ListFunctionAsMetricRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListFunctionAsMetricRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListFunctionAsMetricRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListFunctionAsMetricRequest::getStartTime() const
{
    return startTime_;
}

void ListFunctionAsMetricRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListFunctionAsMetricRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListFunctionAsMetricRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListFunctionAsMetricRequest::getEndTime() const
{
    return endTime_;
}

void ListFunctionAsMetricRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListFunctionAsMetricRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListFunctionAsMetricRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListFunctionAsMetricRequest::getLimit() const
{
    return limit_;
}

void ListFunctionAsMetricRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFunctionAsMetricRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFunctionAsMetricRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFunctionAsMetricRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionAsMetricRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionAsMetricRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionAsMetricRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


