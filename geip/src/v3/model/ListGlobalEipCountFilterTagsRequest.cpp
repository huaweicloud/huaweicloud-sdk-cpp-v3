

#include "huaweicloud/geip/v3/model/ListGlobalEipCountFilterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipCountFilterTagsRequest::ListGlobalEipCountFilterTagsRequest()
{
    bodyIsSet_ = false;
}

ListGlobalEipCountFilterTagsRequest::~ListGlobalEipCountFilterTagsRequest() = default;

void ListGlobalEipCountFilterTagsRequest::validate()
{
}

web::json::value ListGlobalEipCountFilterTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGlobalEipCountFilterTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListResourcesByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListResourcesByTagsRequestBody ListGlobalEipCountFilterTagsRequest::getBody() const
{
    return body_;
}

void ListGlobalEipCountFilterTagsRequest::setBody(const ListResourcesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGlobalEipCountFilterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGlobalEipCountFilterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


