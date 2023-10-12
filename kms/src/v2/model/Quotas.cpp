

#include "huaweicloud/kms/v2/model/Quotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




Quotas::Quotas()
{
    resourcesIsSet_ = false;
}

Quotas::~Quotas() = default;

void Quotas::validate()
{
}

web::json::value Quotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool Quotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<Resources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<Resources>& Quotas::getResources()
{
    return resources_;
}

void Quotas::setResources(const std::vector<Resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool Quotas::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void Quotas::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


