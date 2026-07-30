

#include "huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies_auto_search_search_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobAlgorithmResponse_policies_auto_search_search_params::JobAlgorithmResponse_policies_auto_search_search_params()
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

JobAlgorithmResponse_policies_auto_search_search_params::~JobAlgorithmResponse_policies_auto_search_search_params() = default;

void JobAlgorithmResponse_policies_auto_search_search_params::validate()
{
}

web::json::value JobAlgorithmResponse_policies_auto_search_search_params::toJson() const
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
bool JobAlgorithmResponse_policies_auto_search_search_params::fromJson(const web::json::value& val)
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


std::string JobAlgorithmResponse_policies_auto_search_search_params::getName() const
{
    return name_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_search_params::nameIsSet() const
{
    return nameIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::unsetname()
{
    nameIsSet_ = false;
}

std::string JobAlgorithmResponse_policies_auto_search_search_params::getParamType() const
{
    return paramType_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::setParamType(const std::string& value)
{
    paramType_ = value;
    paramTypeIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_search_params::paramTypeIsSet() const
{
    return paramTypeIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::unsetparamType()
{
    paramTypeIsSet_ = false;
}

std::string JobAlgorithmResponse_policies_auto_search_search_params::getLowerBound() const
{
    return lowerBound_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::setLowerBound(const std::string& value)
{
    lowerBound_ = value;
    lowerBoundIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_search_params::lowerBoundIsSet() const
{
    return lowerBoundIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::unsetlowerBound()
{
    lowerBoundIsSet_ = false;
}

std::string JobAlgorithmResponse_policies_auto_search_search_params::getUpperBound() const
{
    return upperBound_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::setUpperBound(const std::string& value)
{
    upperBound_ = value;
    upperBoundIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_search_params::upperBoundIsSet() const
{
    return upperBoundIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::unsetupperBound()
{
    upperBoundIsSet_ = false;
}

std::string JobAlgorithmResponse_policies_auto_search_search_params::getDiscretePointsNum() const
{
    return discretePointsNum_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::setDiscretePointsNum(const std::string& value)
{
    discretePointsNum_ = value;
    discretePointsNumIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_search_params::discretePointsNumIsSet() const
{
    return discretePointsNumIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::unsetdiscretePointsNum()
{
    discretePointsNumIsSet_ = false;
}

std::vector<std::string>& JobAlgorithmResponse_policies_auto_search_search_params::getDiscreteValues()
{
    return discreteValues_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::setDiscreteValues(const std::vector<std::string>& value)
{
    discreteValues_ = value;
    discreteValuesIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_search_params::discreteValuesIsSet() const
{
    return discreteValuesIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_search_params::unsetdiscreteValues()
{
    discreteValuesIsSet_ = false;
}

}
}
}
}
}


