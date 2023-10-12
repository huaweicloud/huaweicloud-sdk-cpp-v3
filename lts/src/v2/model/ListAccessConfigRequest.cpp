

#include "huaweicloud/lts/v2/model/ListAccessConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListAccessConfigRequest::ListAccessConfigRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListAccessConfigRequest::~ListAccessConfigRequest() = default;

void ListAccessConfigRequest::validate()
{
}

web::json::value ListAccessConfigRequest::toJson() const
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
bool ListAccessConfigRequest::fromJson(const web::json::value& val)
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
            GetAccessConfigListRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAccessConfigRequest::getContentType() const
{
    return contentType_;
}

void ListAccessConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListAccessConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListAccessConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

GetAccessConfigListRequestBody ListAccessConfigRequest::getBody() const
{
    return body_;
}

void ListAccessConfigRequest::setBody(const GetAccessConfigListRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAccessConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAccessConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


