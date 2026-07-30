

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_advanced_config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_advanced_config::AlgorithmResponse_advanced_config()
{
    autoSearchIsSet_ = false;
}

AlgorithmResponse_advanced_config::~AlgorithmResponse_advanced_config() = default;

void AlgorithmResponse_advanced_config::validate()
{
}

web::json::value AlgorithmResponse_advanced_config::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoSearchIsSet_) {
        val[utility::conversions::to_string_t("auto_search")] = ModelBase::toJson(autoSearch_);
    }

    return val;
}
bool AlgorithmResponse_advanced_config::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_search"));
        if(!fieldValue.is_null())
        {
            AlgorithmResponse_advanced_config_auto_search refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoSearch(refVal);
        }
    }
    return ok;
}


AlgorithmResponse_advanced_config_auto_search AlgorithmResponse_advanced_config::getAutoSearch() const
{
    return autoSearch_;
}

void AlgorithmResponse_advanced_config::setAutoSearch(const AlgorithmResponse_advanced_config_auto_search& value)
{
    autoSearch_ = value;
    autoSearchIsSet_ = true;
}

bool AlgorithmResponse_advanced_config::autoSearchIsSet() const
{
    return autoSearchIsSet_;
}

void AlgorithmResponse_advanced_config::unsetautoSearch()
{
    autoSearchIsSet_ = false;
}

}
}
}
}
}


