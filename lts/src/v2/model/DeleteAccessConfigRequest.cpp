

#include "huaweicloud/lts/v2/model/DeleteAccessConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteAccessConfigRequest::DeleteAccessConfigRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteAccessConfigRequest::~DeleteAccessConfigRequest() = default;

void DeleteAccessConfigRequest::validate()
{
}

web::json::value DeleteAccessConfigRequest::toJson() const
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

bool DeleteAccessConfigRequest::fromJson(const web::json::value& val)
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
            DeleteAccessConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteAccessConfigRequest::getContentType() const
{
    return contentType_;
}

void DeleteAccessConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteAccessConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteAccessConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

DeleteAccessConfigRequestBody DeleteAccessConfigRequest::getBody() const
{
    return body_;
}

void DeleteAccessConfigRequest::setBody(const DeleteAccessConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAccessConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAccessConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


