

#include "huaweicloud/modelarts/v1/model/JobProgress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobProgress::JobProgress()
{
    status_ = "";
    statusIsSet_ = false;
    step_ = 0;
    stepIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

JobProgress::~JobProgress() = default;

void JobProgress::validate()
{
}

web::json::value JobProgress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool JobProgress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string JobProgress::getStatus() const
{
    return status_;
}

void JobProgress::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobProgress::statusIsSet() const
{
    return statusIsSet_;
}

void JobProgress::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t JobProgress::getStep() const
{
    return step_;
}

void JobProgress::setStep(int32_t value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool JobProgress::stepIsSet() const
{
    return stepIsSet_;
}

void JobProgress::unsetstep()
{
    stepIsSet_ = false;
}

std::string JobProgress::getDescription() const
{
    return description_;
}

void JobProgress::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobProgress::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobProgress::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


