

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationsRequestBody::UpdateInstanceConfigurationsRequestBody()
{
    valuesIsSet_ = false;
}

UpdateInstanceConfigurationsRequestBody::~UpdateInstanceConfigurationsRequestBody() = default;

void UpdateInstanceConfigurationsRequestBody::validate()
{
}

web::json::value UpdateInstanceConfigurationsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool UpdateInstanceConfigurationsRequestBody::fromJson(const web::json::value& val)
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


std::map<std::string, std::string>& UpdateInstanceConfigurationsRequestBody::getValues()
{
    return values_;
}

void UpdateInstanceConfigurationsRequestBody::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool UpdateInstanceConfigurationsRequestBody::valuesIsSet() const
{
    return valuesIsSet_;
}

void UpdateInstanceConfigurationsRequestBody::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


