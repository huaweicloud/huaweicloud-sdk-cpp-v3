

#include "huaweicloud/dds/v3/model/ListInstancesByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListInstancesByTagsRequest::ListInstancesByTagsRequest()
{
    bodyIsSet_ = false;
}

ListInstancesByTagsRequest::~ListInstancesByTagsRequest() = default;

void ListInstancesByTagsRequest::validate()
{
}

web::json::value ListInstancesByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListInstancesByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListInstancesByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListInstancesByTagsRequestBody ListInstancesByTagsRequest::getBody() const
{
    return body_;
}

void ListInstancesByTagsRequest::setBody(const ListInstancesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListInstancesByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListInstancesByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


