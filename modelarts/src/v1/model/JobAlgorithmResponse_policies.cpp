

#include "huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobAlgorithmResponse_policies::JobAlgorithmResponse_policies()
{
    autoSearchIsSet_ = false;
}

JobAlgorithmResponse_policies::~JobAlgorithmResponse_policies() = default;

void JobAlgorithmResponse_policies::validate()
{
}

web::json::value JobAlgorithmResponse_policies::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoSearchIsSet_) {
        val[utility::conversions::to_string_t("auto_search")] = ModelBase::toJson(autoSearch_);
    }

    return val;
}
bool JobAlgorithmResponse_policies::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_search"));
        if(!fieldValue.is_null())
        {
            JobAlgorithmResponse_policies_auto_search refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoSearch(refVal);
        }
    }
    return ok;
}


JobAlgorithmResponse_policies_auto_search JobAlgorithmResponse_policies::getAutoSearch() const
{
    return autoSearch_;
}

void JobAlgorithmResponse_policies::setAutoSearch(const JobAlgorithmResponse_policies_auto_search& value)
{
    autoSearch_ = value;
    autoSearchIsSet_ = true;
}

bool JobAlgorithmResponse_policies::autoSearchIsSet() const
{
    return autoSearchIsSet_;
}

void JobAlgorithmResponse_policies::unsetautoSearch()
{
    autoSearchIsSet_ = false;
}

}
}
}
}
}


