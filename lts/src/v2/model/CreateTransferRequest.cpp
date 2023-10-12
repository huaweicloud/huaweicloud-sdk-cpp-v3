

#include "huaweicloud/lts/v2/model/CreateTransferRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTransferRequest::CreateTransferRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTransferRequest::~CreateTransferRequest() = default;

void CreateTransferRequest::validate()
{
}

web::json::value CreateTransferRequest::toJson() const
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
bool CreateTransferRequest::fromJson(const web::json::value& val)
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
            CreateTransferRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTransferRequest::getContentType() const
{
    return contentType_;
}

void CreateTransferRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateTransferRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateTransferRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateTransferRequestBody CreateTransferRequest::getBody() const
{
    return body_;
}

void CreateTransferRequest::setBody(const CreateTransferRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTransferRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTransferRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


