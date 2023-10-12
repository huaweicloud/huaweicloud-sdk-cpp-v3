

#include "huaweicloud/cts/v3/model/ListQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListQuotasResponse::ListQuotasResponse()
{
    resourcesIsSet_ = false;
}

ListQuotasResponse::~ListQuotasResponse() = default;

void ListQuotasResponse::validate()
{
}

web::json::value ListQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ListQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<CtsQuota> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<CtsQuota>& ListQuotasResponse::getResources()
{
    return resources_;
}

void ListQuotasResponse::setResources(const std::vector<CtsQuota>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListQuotasResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListQuotasResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


