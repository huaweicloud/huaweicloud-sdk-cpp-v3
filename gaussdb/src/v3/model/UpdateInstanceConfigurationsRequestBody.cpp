

#include "huaweicloud/gaussdb/v3/model/UpdateInstanceConfigurationsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationsRequestBody::UpdateInstanceConfigurationsRequestBody()
{
    parameterValuesIsSet_ = false;
}

UpdateInstanceConfigurationsRequestBody::~UpdateInstanceConfigurationsRequestBody() = default;

void UpdateInstanceConfigurationsRequestBody::validate()
{
}

web::json::value UpdateInstanceConfigurationsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parameterValuesIsSet_) {
        val[utility::conversions::to_string_t("parameter_values")] = ModelBase::toJson(parameterValues_);
    }

    return val;
}
bool UpdateInstanceConfigurationsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::map<std::string, std::string>& UpdateInstanceConfigurationsRequestBody::getParameterValues()
{
    return parameterValues_;
}

void UpdateInstanceConfigurationsRequestBody::setParameterValues(const std::map<std::string, std::string>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool UpdateInstanceConfigurationsRequestBody::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void UpdateInstanceConfigurationsRequestBody::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

}
}
}
}
}


