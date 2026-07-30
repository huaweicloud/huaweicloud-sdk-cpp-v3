

#include "huaweicloud/modelarts/v1/model/ListTrainingJobEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobEventsRequest::ListTrainingJobEventsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    pattern_ = "";
    patternIsSet_ = false;
}

ListTrainingJobEventsRequest::~ListTrainingJobEventsRequest() = default;

void ListTrainingJobEventsRequest::validate()
{
}

web::json::value ListTrainingJobEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }

    return val;
}
bool ListTrainingJobEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("training_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
        }
    }
    return ok;
}


std::string ListTrainingJobEventsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ListTrainingJobEventsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ListTrainingJobEventsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ListTrainingJobEventsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

int32_t ListTrainingJobEventsRequest::getOffset() const
{
    return offset_;
}

void ListTrainingJobEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrainingJobEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrainingJobEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTrainingJobEventsRequest::getLimit() const
{
    return limit_;
}

void ListTrainingJobEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrainingJobEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrainingJobEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTrainingJobEventsRequest::getOrder() const
{
    return order_;
}

void ListTrainingJobEventsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListTrainingJobEventsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListTrainingJobEventsRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListTrainingJobEventsRequest::getStartTime() const
{
    return startTime_;
}

void ListTrainingJobEventsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTrainingJobEventsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTrainingJobEventsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTrainingJobEventsRequest::getEndTime() const
{
    return endTime_;
}

void ListTrainingJobEventsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTrainingJobEventsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTrainingJobEventsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListTrainingJobEventsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTrainingJobEventsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTrainingJobEventsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTrainingJobEventsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTrainingJobEventsRequest::getLevel() const
{
    return level_;
}

void ListTrainingJobEventsRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListTrainingJobEventsRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ListTrainingJobEventsRequest::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ListTrainingJobEventsRequest::getPattern() const
{
    return pattern_;
}

void ListTrainingJobEventsRequest::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool ListTrainingJobEventsRequest::patternIsSet() const
{
    return patternIsSet_;
}

void ListTrainingJobEventsRequest::unsetpattern()
{
    patternIsSet_ = false;
}

}
}
}
}
}


