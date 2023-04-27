

#include "huaweicloud/lts/v2/model/CreateHostGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateHostGroupRequest::CreateHostGroupRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateHostGroupRequest::~CreateHostGroupRequest() = default;

void CreateHostGroupRequest::validate()
{
}

web::json::value CreateHostGroupRequest::toJson() const
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

bool CreateHostGroupRequest::fromJson(const web::json::value& val)
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
            CreateHostGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateHostGroupRequest::getContentType() const
{
    return contentType_;
}

void CreateHostGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateHostGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateHostGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateHostGroupRequestBody CreateHostGroupRequest::getBody() const
{
    return body_;
}

void CreateHostGroupRequest::setBody(const CreateHostGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHostGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHostGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


