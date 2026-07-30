

#include "huaweicloud/modelarts/v1/model/StepConditionResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StepConditionResp::StepConditionResp()
{
    type_ = "";
    typeIsSet_ = false;
    leftIsSet_ = false;
    rightIsSet_ = false;
}

StepConditionResp::~StepConditionResp() = default;

void StepConditionResp::validate()
{
}

web::json::value StepConditionResp::toJson() const
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
bool StepConditionResp::fromJson(const web::json::value& val)
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


std::string StepConditionResp::getType() const
{
    return type_;
}

void StepConditionResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StepConditionResp::typeIsSet() const
{
    return typeIsSet_;
}

void StepConditionResp::unsettype()
{
    typeIsSet_ = false;
}

Object StepConditionResp::getLeft() const
{
    return left_;
}

void StepConditionResp::setLeft(const Object& value)
{
    left_ = value;
    leftIsSet_ = true;
}

bool StepConditionResp::leftIsSet() const
{
    return leftIsSet_;
}

void StepConditionResp::unsetleft()
{
    leftIsSet_ = false;
}

Object StepConditionResp::getRight() const
{
    return right_;
}

void StepConditionResp::setRight(const Object& value)
{
    right_ = value;
    rightIsSet_ = true;
}

bool StepConditionResp::rightIsSet() const
{
    return rightIsSet_;
}

void StepConditionResp::unsetright()
{
    rightIsSet_ = false;
}

}
}
}
}
}


