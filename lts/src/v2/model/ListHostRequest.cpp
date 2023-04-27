

#include "huaweicloud/lts/v2/model/ListHostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListHostRequest::ListHostRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListHostRequest::~ListHostRequest() = default;

void ListHostRequest::validate()
{
}

web::json::value ListHostRequest::toJson() const
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

bool ListHostRequest::fromJson(const web::json::value& val)
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
            GetHostListRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListHostRequest::getContentType() const
{
    return contentType_;
}

void ListHostRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListHostRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListHostRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

GetHostListRequestBody ListHostRequest::getBody() const
{
    return body_;
}

void ListHostRequest::setBody(const GetHostListRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


