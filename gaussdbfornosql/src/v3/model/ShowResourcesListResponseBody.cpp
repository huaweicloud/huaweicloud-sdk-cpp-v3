

#include "huaweicloud/gaussdbfornosql/v3/model/ShowResourcesListResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowResourcesListResponseBody::ShowResourcesListResponseBody()
{
    resourcesIsSet_ = false;
}

ShowResourcesListResponseBody::~ShowResourcesListResponseBody() = default;

void ShowResourcesListResponseBody::validate()
{
}

web::json::value ShowResourcesListResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool ShowResourcesListResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowResourcesDetailResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}

std::vector<ShowResourcesDetailResponseBody>& ShowResourcesListResponseBody::getResources()
{
    return resources_;
}

void ShowResourcesListResponseBody::setResources(const std::vector<ShowResourcesDetailResponseBody>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowResourcesListResponseBody::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowResourcesListResponseBody::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


