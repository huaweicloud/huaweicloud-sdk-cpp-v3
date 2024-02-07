

#include "huaweicloud/geip/v3/model/ListGeipSegmentCountFilterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipSegmentCountFilterTagsRequest::ListGeipSegmentCountFilterTagsRequest()
{
    bodyIsSet_ = false;
}

ListGeipSegmentCountFilterTagsRequest::~ListGeipSegmentCountFilterTagsRequest() = default;

void ListGeipSegmentCountFilterTagsRequest::validate()
{
}

web::json::value ListGeipSegmentCountFilterTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGeipSegmentCountFilterTagsRequest::fromJson(const web::json::value& val)
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


ListResourcesByTagsRequestBody ListGeipSegmentCountFilterTagsRequest::getBody() const
{
    return body_;
}

void ListGeipSegmentCountFilterTagsRequest::setBody(const ListResourcesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGeipSegmentCountFilterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGeipSegmentCountFilterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


