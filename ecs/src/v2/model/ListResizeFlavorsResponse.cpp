

#include "huaweicloud/ecs/v2/model/ListResizeFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListResizeFlavorsResponse::ListResizeFlavorsResponse()
{
    flavorsIsSet_ = false;
}

ListResizeFlavorsResponse::~ListResizeFlavorsResponse() = default;

void ListResizeFlavorsResponse::validate()
{
}

web::json::value ListResizeFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ListResizeFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<ListResizeFlavorsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


std::vector<ListResizeFlavorsResult>& ListResizeFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ListResizeFlavorsResponse::setFlavors(const std::vector<ListResizeFlavorsResult>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListResizeFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListResizeFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


