

#include "huaweicloud/lts/v2/model/CreateStructConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateStructConfigRequest::CreateStructConfigRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateStructConfigRequest::~CreateStructConfigRequest() = default;

void CreateStructConfigRequest::validate()
{
}

web::json::value CreateStructConfigRequest::toJson() const
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

bool CreateStructConfigRequest::fromJson(const web::json::value& val)
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
            StructConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateStructConfigRequest::getContentType() const
{
    return contentType_;
}

void CreateStructConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateStructConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateStructConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

StructConfig CreateStructConfigRequest::getBody() const
{
    return body_;
}

void CreateStructConfigRequest::setBody(const StructConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStructConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStructConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


