

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestSmsEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestSmsEndpointInfo::CreateSubscriptionUserRequestSmsEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
}

CreateSubscriptionUserRequestSmsEndpointInfo::~CreateSubscriptionUserRequestSmsEndpointInfo() = default;

void CreateSubscriptionUserRequestSmsEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestSmsEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool CreateSubscriptionUserRequestSmsEndpointInfo::fromJson(const web::json::value& val)
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


std::string CreateSubscriptionUserRequestSmsEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestSmsEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestSmsEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestSmsEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


