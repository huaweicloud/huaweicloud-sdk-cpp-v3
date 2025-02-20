

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseEmailEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseEmailEndpointInfo::ListSubscriptionUserResponseEmailEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
}

ListSubscriptionUserResponseEmailEndpointInfo::~ListSubscriptionUserResponseEmailEndpointInfo() = default;

void ListSubscriptionUserResponseEmailEndpointInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseEmailEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool ListSubscriptionUserResponseEmailEndpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionUserResponseEmailEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionUserResponseEmailEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionUserResponseEmailEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionUserResponseEmailEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


