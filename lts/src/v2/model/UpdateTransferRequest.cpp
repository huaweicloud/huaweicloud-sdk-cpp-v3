

#include "huaweicloud/lts/v2/model/UpdateTransferRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateTransferRequest::UpdateTransferRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTransferRequest::~UpdateTransferRequest() = default;

void UpdateTransferRequest::validate()
{
}

web::json::value UpdateTransferRequest::toJson() const
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
bool UpdateTransferRequest::fromJson(const web::json::value& val)
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
            UpdateTransferRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTransferRequest::getContentType() const
{
    return contentType_;
}

void UpdateTransferRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateTransferRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateTransferRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateTransferRequestBody UpdateTransferRequest::getBody() const
{
    return body_;
}

void UpdateTransferRequest::setBody(const UpdateTransferRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTransferRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTransferRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


