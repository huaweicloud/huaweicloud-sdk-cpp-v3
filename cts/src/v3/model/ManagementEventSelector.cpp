

#include "huaweicloud/cts/v3/model/ManagementEventSelector.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ManagementEventSelector::ManagementEventSelector()
{
    excludeServiceIsSet_ = false;
}

ManagementEventSelector::~ManagementEventSelector() = default;

void ManagementEventSelector::validate()
{
}

web::json::value ManagementEventSelector::toJson() const
{
    web::json::value val = web::json::value::object();

    if(excludeServiceIsSet_) {
        val[utility::conversions::to_string_t("exclude_service")] = ModelBase::toJson(excludeService_);
    }

    return val;
}
bool ManagementEventSelector::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exclude_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_service"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeService(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ManagementEventSelector::getExcludeService()
{
    return excludeService_;
}

void ManagementEventSelector::setExcludeService(const std::vector<std::string>& value)
{
    excludeService_ = value;
    excludeServiceIsSet_ = true;
}

bool ManagementEventSelector::excludeServiceIsSet() const
{
    return excludeServiceIsSet_;
}

void ManagementEventSelector::unsetexcludeService()
{
    excludeServiceIsSet_ = false;
}

}
}
}
}
}


