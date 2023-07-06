

#include "huaweicloud/sdrs/v1/model/QuotaParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




QuotaParams::QuotaParams()
{
    resourcesIsSet_ = false;
}

QuotaParams::~QuotaParams() = default;

void QuotaParams::validate()
{
}

web::json::value QuotaParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool QuotaParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<QuotaResourceParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}

std::vector<QuotaResourceParams>& QuotaParams::getResources()
{
    return resources_;
}

void QuotaParams::setResources(const std::vector<QuotaResourceParams>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool QuotaParams::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void QuotaParams::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


