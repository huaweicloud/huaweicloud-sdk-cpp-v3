

#include "huaweicloud/lts/v2/model/DeleteHostGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteHostGroupRequest::DeleteHostGroupRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteHostGroupRequest::~DeleteHostGroupRequest() = default;

void DeleteHostGroupRequest::validate()
{
}

web::json::value DeleteHostGroupRequest::toJson() const
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

bool DeleteHostGroupRequest::fromJson(const web::json::value& val)
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
            DeleteHostGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteHostGroupRequest::getContentType() const
{
    return contentType_;
}

void DeleteHostGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteHostGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteHostGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

DeleteHostGroupRequestBody DeleteHostGroupRequest::getBody() const
{
    return body_;
}

void DeleteHostGroupRequest::setBody(const DeleteHostGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteHostGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteHostGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


