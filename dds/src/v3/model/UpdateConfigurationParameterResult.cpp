

#include "huaweicloud/dds/v3/model/UpdateConfigurationParameterResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateConfigurationParameterResult::UpdateConfigurationParameterResult()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    parameterValuesIsSet_ = false;
}

UpdateConfigurationParameterResult::~UpdateConfigurationParameterResult() = default;

void UpdateConfigurationParameterResult::validate()
{
}

web::json::value UpdateConfigurationParameterResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(parameterValuesIsSet_) {
        val[utility::conversions::to_string_t("parameter_values")] = ModelBase::toJson(parameterValues_);
    }

    return val;
}

bool UpdateConfigurationParameterResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
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

std::string UpdateConfigurationParameterResult::getEntityId() const
{
    return entityId_;
}

void UpdateConfigurationParameterResult::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool UpdateConfigurationParameterResult::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void UpdateConfigurationParameterResult::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::map<std::string, std::string>& UpdateConfigurationParameterResult::getParameterValues()
{
    return parameterValues_;
}

void UpdateConfigurationParameterResult::setParameterValues(const std::map<std::string, std::string>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool UpdateConfigurationParameterResult::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void UpdateConfigurationParameterResult::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

}
}
}
}
}


