

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlConfigurationResponse::ShowGaussMySqlConfigurationResponse()
{
    configurationsIsSet_ = false;
    parameterValuesIsSet_ = false;
}

ShowGaussMySqlConfigurationResponse::~ShowGaussMySqlConfigurationResponse() = default;

void ShowGaussMySqlConfigurationResponse::validate()
{
}

web::json::value ShowGaussMySqlConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }
    if(parameterValuesIsSet_) {
        val[utility::conversions::to_string_t("parameter_values")] = ModelBase::toJson(parameterValues_);
    }

    return val;
}
bool ShowGaussMySqlConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            ConfigurationSummary2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterValues(refVal);
        }
    }
    return ok;
}


ConfigurationSummary2 ShowGaussMySqlConfigurationResponse::getConfigurations() const
{
    return configurations_;
}

void ShowGaussMySqlConfigurationResponse::setConfigurations(const ConfigurationSummary2& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ShowGaussMySqlConfigurationResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ShowGaussMySqlConfigurationResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

std::map<std::string, std::string>& ShowGaussMySqlConfigurationResponse::getParameterValues()
{
    return parameterValues_;
}

void ShowGaussMySqlConfigurationResponse::setParameterValues(const std::map<std::string, std::string>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool ShowGaussMySqlConfigurationResponse::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void ShowGaussMySqlConfigurationResponse::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

}
}
}
}
}


