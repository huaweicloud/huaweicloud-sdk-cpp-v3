

#include "huaweicloud/ram/v1/model/QuotaResourcesDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




QuotaResourcesDto::QuotaResourcesDto()
{
    resourcesIsSet_ = false;
}

QuotaResourcesDto::~QuotaResourcesDto() = default;

void QuotaResourcesDto::validate()
{
}

web::json::value QuotaResourcesDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool QuotaResourcesDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<Quotas> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<Quotas>& QuotaResourcesDto::getResources()
{
    return resources_;
}

void QuotaResourcesDto::setResources(const std::vector<Quotas>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool QuotaResourcesDto::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void QuotaResourcesDto::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


