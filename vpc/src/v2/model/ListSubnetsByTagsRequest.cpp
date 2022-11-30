

#include "huaweicloud/vpc/v2/model/ListSubnetsByTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSubnetsByTagsRequest::ListSubnetsByTagsRequest()
{
    bodyIsSet_ = false;
}

ListSubnetsByTagsRequest::~ListSubnetsByTagsRequest() = default;

void ListSubnetsByTagsRequest::validate()
{
}

web::json::value ListSubnetsByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListSubnetsByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListSubnetsByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListSubnetsByTagsRequestBody ListSubnetsByTagsRequest::getBody() const
{
    return body_;
}

void ListSubnetsByTagsRequest::setBody(const ListSubnetsByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSubnetsByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSubnetsByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


