

#include "huaweicloud/lts/v2/model/CreateAccessConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateAccessConfigRequest::CreateAccessConfigRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAccessConfigRequest::~CreateAccessConfigRequest() = default;

void CreateAccessConfigRequest::validate()
{
}

web::json::value CreateAccessConfigRequest::toJson() const
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

bool CreateAccessConfigRequest::fromJson(const web::json::value& val)
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
            CreateAccessConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAccessConfigRequest::getContentType() const
{
    return contentType_;
}

void CreateAccessConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateAccessConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateAccessConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateAccessConfigRequestBody CreateAccessConfigRequest::getBody() const
{
    return body_;
}

void CreateAccessConfigRequest::setBody(const CreateAccessConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccessConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccessConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


