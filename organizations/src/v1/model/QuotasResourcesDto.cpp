

#include "huaweicloud/organizations/v1/model/QuotasResourcesDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




QuotasResourcesDto::QuotasResourcesDto()
{
    resourcesIsSet_ = false;
}

QuotasResourcesDto::~QuotasResourcesDto() = default;

void QuotasResourcesDto::validate()
{
}

web::json::value QuotasResourcesDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool QuotasResourcesDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<QuotaDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<QuotaDto>& QuotasResourcesDto::getResources()
{
    return resources_;
}

void QuotasResourcesDto::setResources(const std::vector<QuotaDto>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool QuotasResourcesDto::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void QuotasResourcesDto::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


