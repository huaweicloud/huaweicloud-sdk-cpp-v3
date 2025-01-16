

#include "huaweicloud/smn/v2/model/NotifyPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




NotifyPolicyRequestBody::NotifyPolicyRequestBody()
{
    protocol_ = "";
    protocolIsSet_ = false;
    pollingIsSet_ = false;
}

NotifyPolicyRequestBody::~NotifyPolicyRequestBody() = default;

void NotifyPolicyRequestBody::validate()
{
}

web::json::value NotifyPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(pollingIsSet_) {
        val[utility::conversions::to_string_t("polling")] = ModelBase::toJson(polling_);
    }

    return val;
}
bool NotifyPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polling"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polling"));
        if(!fieldValue.is_null())
        {
            std::vector<PollingPolicyRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolling(refVal);
        }
    }
    return ok;
}


std::string NotifyPolicyRequestBody::getProtocol() const
{
    return protocol_;
}

void NotifyPolicyRequestBody::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool NotifyPolicyRequestBody::protocolIsSet() const
{
    return protocolIsSet_;
}

void NotifyPolicyRequestBody::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::vector<PollingPolicyRequest>& NotifyPolicyRequestBody::getPolling()
{
    return polling_;
}

void NotifyPolicyRequestBody::setPolling(const std::vector<PollingPolicyRequest>& value)
{
    polling_ = value;
    pollingIsSet_ = true;
}

bool NotifyPolicyRequestBody::pollingIsSet() const
{
    return pollingIsSet_;
}

void NotifyPolicyRequestBody::unsetpolling()
{
    pollingIsSet_ = false;
}

}
}
}
}
}


