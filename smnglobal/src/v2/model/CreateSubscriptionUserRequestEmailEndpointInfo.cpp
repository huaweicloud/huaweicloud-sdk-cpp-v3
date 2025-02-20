

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestEmailEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestEmailEndpointInfo::CreateSubscriptionUserRequestEmailEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
}

CreateSubscriptionUserRequestEmailEndpointInfo::~CreateSubscriptionUserRequestEmailEndpointInfo() = default;

void CreateSubscriptionUserRequestEmailEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestEmailEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool CreateSubscriptionUserRequestEmailEndpointInfo::fromJson(const web::json::value& val)
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


std::string CreateSubscriptionUserRequestEmailEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestEmailEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestEmailEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestEmailEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


