

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseSmsEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseSmsEndpointInfo::ListSubscriptionUserResponseSmsEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
}

ListSubscriptionUserResponseSmsEndpointInfo::~ListSubscriptionUserResponseSmsEndpointInfo() = default;

void ListSubscriptionUserResponseSmsEndpointInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseSmsEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool ListSubscriptionUserResponseSmsEndpointInfo::fromJson(const web::json::value& val)
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


std::string ListSubscriptionUserResponseSmsEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionUserResponseSmsEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionUserResponseSmsEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionUserResponseSmsEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


