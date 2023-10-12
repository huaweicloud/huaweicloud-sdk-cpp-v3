

#include "huaweicloud/eps/v1/model/QuotasDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




QuotasDetail::QuotasDetail()
{
    resourcesIsSet_ = false;
}

QuotasDetail::~QuotasDetail() = default;

void QuotasDetail::validate()
{
}

web::json::value QuotasDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool QuotasDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<EpQuotas> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<EpQuotas>& QuotasDetail::getResources()
{
    return resources_;
}

void QuotasDetail::setResources(const std::vector<EpQuotas>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool QuotasDetail::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void QuotasDetail::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


