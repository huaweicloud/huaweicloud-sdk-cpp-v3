

#include "huaweicloud/lts/v2/model/CreateAgencyAccessRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateAgencyAccessRequest::CreateAgencyAccessRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAgencyAccessRequest::~CreateAgencyAccessRequest() = default;

void CreateAgencyAccessRequest::validate()
{
}

web::json::value CreateAgencyAccessRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAgencyAccessRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PreviewAgencyLogAccessReqListBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAgencyAccessRequest::getContentType() const
{
    return contentType_;
}

void CreateAgencyAccessRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateAgencyAccessRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateAgencyAccessRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

PreviewAgencyLogAccessReqListBody CreateAgencyAccessRequest::getBody() const
{
    return body_;
}

void CreateAgencyAccessRequest::setBody(const PreviewAgencyLogAccessReqListBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAgencyAccessRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAgencyAccessRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


