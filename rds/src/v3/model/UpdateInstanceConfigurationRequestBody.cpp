

#include "huaweicloud/rds/v3/model/UpdateInstanceConfigurationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationRequestBody::UpdateInstanceConfigurationRequestBody()
{
    valuesIsSet_ = false;
}

UpdateInstanceConfigurationRequestBody::~UpdateInstanceConfigurationRequestBody() = default;

void UpdateInstanceConfigurationRequestBody::validate()
{
}

web::json::value UpdateInstanceConfigurationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}

bool UpdateInstanceConfigurationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}

std::map<std::string, std::string>& UpdateInstanceConfigurationRequestBody::getValues()
{
    return values_;
}

void UpdateInstanceConfigurationRequestBody::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool UpdateInstanceConfigurationRequestBody::valuesIsSet() const
{
    return valuesIsSet_;
}

void UpdateInstanceConfigurationRequestBody::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


