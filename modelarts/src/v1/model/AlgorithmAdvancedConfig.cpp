

#include "huaweicloud/modelarts/v1/model/AlgorithmAdvancedConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmAdvancedConfig::AlgorithmAdvancedConfig()
{
    autoSearchIsSet_ = false;
}

AlgorithmAdvancedConfig::~AlgorithmAdvancedConfig() = default;

void AlgorithmAdvancedConfig::validate()
{
}

web::json::value AlgorithmAdvancedConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoSearchIsSet_) {
        val[utility::conversions::to_string_t("auto_search")] = ModelBase::toJson(autoSearch_);
    }

    return val;
}
bool AlgorithmAdvancedConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_search"));
        if(!fieldValue.is_null())
        {
            AutoSearch refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoSearch(refVal);
        }
    }
    return ok;
}


AutoSearch AlgorithmAdvancedConfig::getAutoSearch() const
{
    return autoSearch_;
}

void AlgorithmAdvancedConfig::setAutoSearch(const AutoSearch& value)
{
    autoSearch_ = value;
    autoSearchIsSet_ = true;
}

bool AlgorithmAdvancedConfig::autoSearchIsSet() const
{
    return autoSearchIsSet_;
}

void AlgorithmAdvancedConfig::unsetautoSearch()
{
    autoSearchIsSet_ = false;
}

}
}
}
}
}


