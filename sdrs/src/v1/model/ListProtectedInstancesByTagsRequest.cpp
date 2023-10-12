

#include "huaweicloud/sdrs/v1/model/ListProtectedInstancesByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstancesByTagsRequest::ListProtectedInstancesByTagsRequest()
{
    bodyIsSet_ = false;
}

ListProtectedInstancesByTagsRequest::~ListProtectedInstancesByTagsRequest() = default;

void ListProtectedInstancesByTagsRequest::validate()
{
}

web::json::value ListProtectedInstancesByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProtectedInstancesByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListProtectedInstancesByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListProtectedInstancesByTagsRequestBody ListProtectedInstancesByTagsRequest::getBody() const
{
    return body_;
}

void ListProtectedInstancesByTagsRequest::setBody(const ListProtectedInstancesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProtectedInstancesByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


