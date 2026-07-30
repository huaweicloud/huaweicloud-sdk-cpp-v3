

#include "huaweicloud/modelarts/v1/model/StepCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StepCondition::StepCondition()
{
    type_ = "";
    typeIsSet_ = false;
    leftIsSet_ = false;
    rightIsSet_ = false;
}

StepCondition::~StepCondition() = default;

void StepCondition::validate()
{
}

web::json::value StepCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(leftIsSet_) {
        val[utility::conversions::to_string_t("left")] = ModelBase::toJson(left_);
    }
    if(rightIsSet_) {
        val[utility::conversions::to_string_t("right")] = ModelBase::toJson(right_);
    }

    return val;
}
bool StepCondition::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("left"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("left"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeft(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("right"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("right"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRight(refVal);
        }
    }
    return ok;
}


std::string StepCondition::getType() const
{
    return type_;
}

void StepCondition::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StepCondition::typeIsSet() const
{
    return typeIsSet_;
}

void StepCondition::unsettype()
{
    typeIsSet_ = false;
}

Object StepCondition::getLeft() const
{
    return left_;
}

void StepCondition::setLeft(const Object& value)
{
    left_ = value;
    leftIsSet_ = true;
}

bool StepCondition::leftIsSet() const
{
    return leftIsSet_;
}

void StepCondition::unsetleft()
{
    leftIsSet_ = false;
}

Object StepCondition::getRight() const
{
    return right_;
}

void StepCondition::setRight(const Object& value)
{
    right_ = value;
    rightIsSet_ = true;
}

bool StepCondition::rightIsSet() const
{
    return rightIsSet_;
}

void StepCondition::unsetright()
{
    rightIsSet_ = false;
}

}
}
}
}
}


