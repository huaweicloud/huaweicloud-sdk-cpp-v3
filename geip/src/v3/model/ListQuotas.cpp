

#include "huaweicloud/geip/v3/model/ListQuotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListQuotas::ListQuotas()
{
    resourcesIsSet_ = false;
}

ListQuotas::~ListQuotas() = default;

void ListQuotas::validate()
{
}

web::json::value ListQuotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ListQuotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourcesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<ResourcesInfo>& ListQuotas::getResources()
{
    return resources_;
}

void ListQuotas::setResources(const std::vector<ResourcesInfo>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListQuotas::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListQuotas::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


