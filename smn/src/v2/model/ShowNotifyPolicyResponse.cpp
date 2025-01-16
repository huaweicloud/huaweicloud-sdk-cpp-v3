

#include "huaweicloud/smn/v2/model/ShowNotifyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ShowNotifyPolicyResponse::ShowNotifyPolicyResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    pollingIsSet_ = false;
}

ShowNotifyPolicyResponse::~ShowNotifyPolicyResponse() = default;

void ShowNotifyPolicyResponse::validate()
{
}

web::json::value ShowNotifyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(pollingIsSet_) {
        val[utility::conversions::to_string_t("polling")] = ModelBase::toJson(polling_);
    }

    return val;
}
bool ShowNotifyPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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
            std::vector<PollingPolicyResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolling(refVal);
        }
    }
    return ok;
}


std::string ShowNotifyPolicyResponse::getRequestId() const
{
    return requestId_;
}

void ShowNotifyPolicyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowNotifyPolicyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowNotifyPolicyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowNotifyPolicyResponse::getId() const
{
    return id_;
}

void ShowNotifyPolicyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowNotifyPolicyResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowNotifyPolicyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowNotifyPolicyResponse::getProtocol() const
{
    return protocol_;
}

void ShowNotifyPolicyResponse::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ShowNotifyPolicyResponse::protocolIsSet() const
{
    return protocolIsSet_;
}

void ShowNotifyPolicyResponse::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::vector<PollingPolicyResponse>& ShowNotifyPolicyResponse::getPolling()
{
    return polling_;
}

void ShowNotifyPolicyResponse::setPolling(const std::vector<PollingPolicyResponse>& value)
{
    polling_ = value;
    pollingIsSet_ = true;
}

bool ShowNotifyPolicyResponse::pollingIsSet() const
{
    return pollingIsSet_;
}

void ShowNotifyPolicyResponse::unsetpolling()
{
    pollingIsSet_ = false;
}

}
}
}
}
}


