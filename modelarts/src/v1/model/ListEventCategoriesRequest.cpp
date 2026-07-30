

#include "huaweicloud/modelarts/v1/model/ListEventCategoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListEventCategoriesRequest::ListEventCategoriesRequest()
{
    flavorType_ = "";
    flavorTypeIsSet_ = false;
}

ListEventCategoriesRequest::~ListEventCategoriesRequest() = default;

void ListEventCategoriesRequest::validate()
{
}

web::json::value ListEventCategoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }

    return val;
}
bool ListEventCategoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    return ok;
}


std::string ListEventCategoriesRequest::getFlavorType() const
{
    return flavorType_;
}

void ListEventCategoriesRequest::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool ListEventCategoriesRequest::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void ListEventCategoriesRequest::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

}
}
}
}
}


