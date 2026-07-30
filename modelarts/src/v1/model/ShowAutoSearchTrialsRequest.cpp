

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchTrialsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchTrialsRequest::ShowAutoSearchTrialsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowAutoSearchTrialsRequest::~ShowAutoSearchTrialsRequest() = default;

void ShowAutoSearchTrialsRequest::validate()
{
}

web::json::value ShowAutoSearchTrialsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowAutoSearchTrialsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string ShowAutoSearchTrialsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowAutoSearchTrialsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowAutoSearchTrialsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowAutoSearchTrialsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

int32_t ShowAutoSearchTrialsRequest::getLimit() const
{
    return limit_;
}

void ShowAutoSearchTrialsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAutoSearchTrialsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAutoSearchTrialsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAutoSearchTrialsRequest::getOffset() const
{
    return offset_;
}

void ShowAutoSearchTrialsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAutoSearchTrialsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAutoSearchTrialsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


