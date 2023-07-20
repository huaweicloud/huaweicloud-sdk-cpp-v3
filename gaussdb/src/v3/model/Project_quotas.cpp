

#include "huaweicloud/gaussdb/v3/model/Project_quotas.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




Project_quotas::Project_quotas()
{
    resourcesIsSet_ = false;
}

Project_quotas::~Project_quotas() = default;

void Project_quotas::validate()
{
}

web::json::value Project_quotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool Project_quotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<Resource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}

std::vector<Resource>& Project_quotas::getResources()
{
    return resources_;
}

void Project_quotas::setResources(const std::vector<Resource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool Project_quotas::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void Project_quotas::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


