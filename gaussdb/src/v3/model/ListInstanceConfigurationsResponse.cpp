

#include "huaweicloud/gaussdb/v3/model/ListInstanceConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListInstanceConfigurationsResponse::ListInstanceConfigurationsResponse()
{
    configurationsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    parameterValuesIsSet_ = false;
}

ListInstanceConfigurationsResponse::~ListInstanceConfigurationsResponse() = default;

void ListInstanceConfigurationsResponse::validate()
{
}

web::json::value ListInstanceConfigurationsResponse::toJson() const
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
bool ListInstanceConfigurationsResponse::fromJson(const web::json::value& val)
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


ParameterConfigurationInfo ListInstanceConfigurationsResponse::getConfigurations() const
{
    return configurations_;
}

void ListInstanceConfigurationsResponse::setConfigurations(const ParameterConfigurationInfo& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ListInstanceConfigurationsResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ListInstanceConfigurationsResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

int64_t ListInstanceConfigurationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceConfigurationsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceConfigurationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceConfigurationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ParameterValuesInfo>& ListInstanceConfigurationsResponse::getParameterValues()
{
    return parameterValues_;
}

void ListInstanceConfigurationsResponse::setParameterValues(const std::vector<ParameterValuesInfo>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool ListInstanceConfigurationsResponse::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void ListInstanceConfigurationsResponse::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

}
}
}
}
}


