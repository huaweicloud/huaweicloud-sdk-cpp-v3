

#include "huaweicloud/eip/v2/model/ListPublicipsByTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListPublicipsByTagsRequest::ListPublicipsByTagsRequest()
{
    bodyIsSet_ = false;
}

ListPublicipsByTagsRequest::~ListPublicipsByTagsRequest() = default;

void ListPublicipsByTagsRequest::validate()
{
}

web::json::value ListPublicipsByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListPublicipsByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListPublicipsByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ListPublicipsByTagsRequestBody ListPublicipsByTagsRequest::getBody() const
{
    return body_;
}

void ListPublicipsByTagsRequest::setBody(const ListPublicipsByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPublicipsByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPublicipsByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


