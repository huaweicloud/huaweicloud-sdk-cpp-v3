

#include "huaweicloud/lts/v2/model/ListHostGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListHostGroupRequest::ListHostGroupRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListHostGroupRequest::~ListHostGroupRequest() = default;

void ListHostGroupRequest::validate()
{
}

web::json::value ListHostGroupRequest::toJson() const
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
bool ListHostGroupRequest::fromJson(const web::json::value& val)
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
            GetHostGroupListRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListHostGroupRequest::getContentType() const
{
    return contentType_;
}

void ListHostGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListHostGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListHostGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

GetHostGroupListRequestBody ListHostGroupRequest::getBody() const
{
    return body_;
}

void ListHostGroupRequest::setBody(const GetHostGroupListRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHostGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHostGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


