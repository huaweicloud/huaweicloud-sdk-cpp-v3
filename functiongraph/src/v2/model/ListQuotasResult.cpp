

#include "huaweicloud/functiongraph/v2/model/ListQuotasResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListQuotasResult::ListQuotasResult()
{
    resourcesIsSet_ = false;
}

ListQuotasResult::~ListQuotasResult() = default;

void ListQuotasResult::validate()
{
}

web::json::value ListQuotasResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ListQuotasResult::fromJson(const web::json::value& val)
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


std::vector<Resources>& ListQuotasResult::getResources()
{
    return resources_;
}

void ListQuotasResult::setResources(const std::vector<Resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListQuotasResult::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListQuotasResult::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


