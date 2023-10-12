

#include "huaweicloud/cts/v3/model/ListTraceResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListTraceResourcesResponse::ListTraceResourcesResponse()
{
    resourcesIsSet_ = false;
}

ListTraceResourcesResponse::~ListTraceResourcesResponse() = default;

void ListTraceResourcesResponse::validate()
{
}

web::json::value ListTraceResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ListTraceResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<TraceResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<TraceResource>& ListTraceResourcesResponse::getResources()
{
    return resources_;
}

void ListTraceResourcesResponse::setResources(const std::vector<TraceResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListTraceResourcesResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListTraceResourcesResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


