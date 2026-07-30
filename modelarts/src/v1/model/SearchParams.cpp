

#include "huaweicloud/modelarts/v1/model/SearchParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SearchParams::SearchParams()
{
    name_ = "";
    nameIsSet_ = false;
    paramType_ = "";
    paramTypeIsSet_ = false;
    lowerBound_ = "";
    lowerBoundIsSet_ = false;
    upperBound_ = "";
    upperBoundIsSet_ = false;
    discretePointsNum_ = "";
    discretePointsNumIsSet_ = false;
    discreteValuesIsSet_ = false;
}

SearchParams::~SearchParams() = default;

void SearchParams::validate()
{
}

web::json::value SearchParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramTypeIsSet_) {
        val[utility::conversions::to_string_t("param_type")] = ModelBase::toJson(paramType_);
    }
    if(lowerBoundIsSet_) {
        val[utility::conversions::to_string_t("lower_bound")] = ModelBase::toJson(lowerBound_);
    }
    if(upperBoundIsSet_) {
        val[utility::conversions::to_string_t("upper_bound")] = ModelBase::toJson(upperBound_);
    }
    if(discretePointsNumIsSet_) {
        val[utility::conversions::to_string_t("discrete_points_num")] = ModelBase::toJson(discretePointsNum_);
    }
    if(discreteValuesIsSet_) {
        val[utility::conversions::to_string_t("discrete_values")] = ModelBase::toJson(discreteValues_);
    }

    return val;
}
bool SearchParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lower_bound"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lower_bound"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLowerBound(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upper_bound"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upper_bound"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpperBound(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discrete_points_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discrete_points_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscretePointsNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discrete_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discrete_values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscreteValues(refVal);
        }
    }
    return ok;
}


std::string SearchParams::getName() const
{
    return name_;
}

void SearchParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SearchParams::nameIsSet() const
{
    return nameIsSet_;
}

void SearchParams::unsetname()
{
    nameIsSet_ = false;
}

std::string SearchParams::getParamType() const
{
    return paramType_;
}

void SearchParams::setParamType(const std::string& value)
{
    paramType_ = value;
    paramTypeIsSet_ = true;
}

bool SearchParams::paramTypeIsSet() const
{
    return paramTypeIsSet_;
}

void SearchParams::unsetparamType()
{
    paramTypeIsSet_ = false;
}

std::string SearchParams::getLowerBound() const
{
    return lowerBound_;
}

void SearchParams::setLowerBound(const std::string& value)
{
    lowerBound_ = value;
    lowerBoundIsSet_ = true;
}

bool SearchParams::lowerBoundIsSet() const
{
    return lowerBoundIsSet_;
}

void SearchParams::unsetlowerBound()
{
    lowerBoundIsSet_ = false;
}

std::string SearchParams::getUpperBound() const
{
    return upperBound_;
}

void SearchParams::setUpperBound(const std::string& value)
{
    upperBound_ = value;
    upperBoundIsSet_ = true;
}

bool SearchParams::upperBoundIsSet() const
{
    return upperBoundIsSet_;
}

void SearchParams::unsetupperBound()
{
    upperBoundIsSet_ = false;
}

std::string SearchParams::getDiscretePointsNum() const
{
    return discretePointsNum_;
}

void SearchParams::setDiscretePointsNum(const std::string& value)
{
    discretePointsNum_ = value;
    discretePointsNumIsSet_ = true;
}

bool SearchParams::discretePointsNumIsSet() const
{
    return discretePointsNumIsSet_;
}

void SearchParams::unsetdiscretePointsNum()
{
    discretePointsNumIsSet_ = false;
}

std::vector<std::string>& SearchParams::getDiscreteValues()
{
    return discreteValues_;
}

void SearchParams::setDiscreteValues(const std::vector<std::string>& value)
{
    discreteValues_ = value;
    discreteValuesIsSet_ = true;
}

bool SearchParams::discreteValuesIsSet() const
{
    return discreteValuesIsSet_;
}

void SearchParams::unsetdiscreteValues()
{
    discreteValuesIsSet_ = false;
}

}
}
}
}
}


