

#include "huaweicloud/modelarts/v1/model/JobPolicies.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobPolicies::JobPolicies()
{
    autoSearchIsSet_ = false;
}

JobPolicies::~JobPolicies() = default;

void JobPolicies::validate()
{
}

web::json::value JobPolicies::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoSearchIsSet_) {
        val[utility::conversions::to_string_t("auto_search")] = ModelBase::toJson(autoSearch_);
    }

    return val;
}
bool JobPolicies::fromJson(const web::json::value& val)
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


AutoSearch JobPolicies::getAutoSearch() const
{
    return autoSearch_;
}

void JobPolicies::setAutoSearch(const AutoSearch& value)
{
    autoSearch_ = value;
    autoSearchIsSet_ = true;
}

bool JobPolicies::autoSearchIsSet() const
{
    return autoSearchIsSet_;
}

void JobPolicies::unsetautoSearch()
{
    autoSearchIsSet_ = false;
}

}
}
}
}
}


