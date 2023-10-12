

#include "huaweicloud/vpc/v2/model/ListVpcsByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcsByTagsRequest::ListVpcsByTagsRequest()
{
    bodyIsSet_ = false;
}

ListVpcsByTagsRequest::~ListVpcsByTagsRequest() = default;

void ListVpcsByTagsRequest::validate()
{
}

web::json::value ListVpcsByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListVpcsByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListVpcsByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListVpcsByTagsRequestBody ListVpcsByTagsRequest::getBody() const
{
    return body_;
}

void ListVpcsByTagsRequest::setBody(const ListVpcsByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListVpcsByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListVpcsByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


