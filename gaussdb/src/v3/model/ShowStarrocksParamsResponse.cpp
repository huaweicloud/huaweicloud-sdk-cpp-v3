

#include "huaweicloud/gaussdb/v3/model/ShowStarrocksParamsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarrocksParamsResponse::ShowStarrocksParamsResponse()
{
    configurationsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    parameterValuesIsSet_ = false;
}

ShowStarrocksParamsResponse::~ShowStarrocksParamsResponse() = default;

void ShowStarrocksParamsResponse::validate()
{
}

web::json::value ShowStarrocksParamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(parameterValuesIsSet_) {
        val[utility::conversions::to_string_t("parameter_values")] = ModelBase::toJson(parameterValues_);
    }

    return val;
}
bool ShowStarrocksParamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            ParameterConfigurationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_values"));
        if(!fieldValue.is_null())
        {
            std::vector<ParameterValuesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterValues(refVal);
        }
    }
    return ok;
}


ParameterConfigurationInfo ShowStarrocksParamsResponse::getConfigurations() const
{
    return configurations_;
}

void ShowStarrocksParamsResponse::setConfigurations(const ParameterConfigurationInfo& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ShowStarrocksParamsResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ShowStarrocksParamsResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

int64_t ShowStarrocksParamsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowStarrocksParamsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowStarrocksParamsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowStarrocksParamsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ParameterValuesInfo>& ShowStarrocksParamsResponse::getParameterValues()
{
    return parameterValues_;
}

void ShowStarrocksParamsResponse::setParameterValues(const std::vector<ParameterValuesInfo>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool ShowStarrocksParamsResponse::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void ShowStarrocksParamsResponse::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

}
}
}
}
}


