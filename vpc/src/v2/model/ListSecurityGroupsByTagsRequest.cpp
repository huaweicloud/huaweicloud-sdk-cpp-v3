

#include "huaweicloud/vpc/v2/model/ListSecurityGroupsByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSecurityGroupsByTagsRequest::ListSecurityGroupsByTagsRequest()
{
    bodyIsSet_ = false;
}

ListSecurityGroupsByTagsRequest::~ListSecurityGroupsByTagsRequest() = default;

void ListSecurityGroupsByTagsRequest::validate()
{
}

web::json::value ListSecurityGroupsByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSecurityGroupsByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListSecurityGroupsByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListSecurityGroupsByTagsRequestBody ListSecurityGroupsByTagsRequest::getBody() const
{
    return body_;
}

void ListSecurityGroupsByTagsRequest::setBody(const ListSecurityGroupsByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSecurityGroupsByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSecurityGroupsByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


