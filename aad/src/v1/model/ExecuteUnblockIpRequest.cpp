

#include "huaweicloud/aad/v1/model/ExecuteUnblockIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ExecuteUnblockIpRequest::ExecuteUnblockIpRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteUnblockIpRequest::~ExecuteUnblockIpRequest() = default;

void ExecuteUnblockIpRequest::validate()
{
}

web::json::value ExecuteUnblockIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteUnblockIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExecuteUnblockIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteUnblockIpRequest::getDomainId() const
{
    return domainId_;
}

void ExecuteUnblockIpRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ExecuteUnblockIpRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ExecuteUnblockIpRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

ExecuteUnblockIpRequestBody ExecuteUnblockIpRequest::getBody() const
{
    return body_;
}

void ExecuteUnblockIpRequest::setBody(const ExecuteUnblockIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteUnblockIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteUnblockIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


