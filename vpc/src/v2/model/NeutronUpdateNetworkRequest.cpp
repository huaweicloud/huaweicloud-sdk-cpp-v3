

#include "huaweicloud/vpc/v2/model/NeutronUpdateNetworkRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateNetworkRequest::NeutronUpdateNetworkRequest()
{
    networkId_ = "";
    networkIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateNetworkRequest::~NeutronUpdateNetworkRequest() = default;

void NeutronUpdateNetworkRequest::validate()
{
}

web::json::value NeutronUpdateNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronUpdateNetworkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateNetworkRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NeutronUpdateNetworkRequest::getNetworkId() const
{
    return networkId_;
}

void NeutronUpdateNetworkRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronUpdateNetworkRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronUpdateNetworkRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

NeutronUpdateNetworkRequestBody NeutronUpdateNetworkRequest::getBody() const
{
    return body_;
}

void NeutronUpdateNetworkRequest::setBody(const NeutronUpdateNetworkRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateNetworkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateNetworkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


