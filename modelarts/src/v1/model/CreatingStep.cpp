

#include "huaweicloud/modelarts/v1/model/CreatingStep.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreatingStep::CreatingStep()
{
    step_ = 0;
    stepIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

CreatingStep::~CreatingStep() = default;

void CreatingStep::validate()
{
}

web::json::value CreatingStep::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool CreatingStep::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStep(refVal);
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
    return ok;
}


int32_t CreatingStep::getStep() const
{
    return step_;
}

void CreatingStep::setStep(int32_t value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool CreatingStep::stepIsSet() const
{
    return stepIsSet_;
}

void CreatingStep::unsetstep()
{
    stepIsSet_ = false;
}

std::string CreatingStep::getType() const
{
    return type_;
}

void CreatingStep::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreatingStep::typeIsSet() const
{
    return typeIsSet_;
}

void CreatingStep::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


