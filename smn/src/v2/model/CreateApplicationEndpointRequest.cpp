

#include "huaweicloud/smn/v2/model/CreateApplicationEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateApplicationEndpointRequest::CreateApplicationEndpointRequest()
{
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
    bodyIsSet_ = false;
}

CreateApplicationEndpointRequest::~CreateApplicationEndpointRequest() = default;

void CreateApplicationEndpointRequest::validate()
{
}

web::json::value CreateApplicationEndpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateApplicationEndpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateApplicationEndpointRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateApplicationEndpointRequest::getApplicationUrn() const
{
    return applicationUrn_;
}

void CreateApplicationEndpointRequest::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool CreateApplicationEndpointRequest::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void CreateApplicationEndpointRequest::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

CreateApplicationEndpointRequestBody CreateApplicationEndpointRequest::getBody() const
{
    return body_;
}

void CreateApplicationEndpointRequest::setBody(const CreateApplicationEndpointRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateApplicationEndpointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateApplicationEndpointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


