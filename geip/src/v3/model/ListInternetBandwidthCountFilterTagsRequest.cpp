

#include "huaweicloud/geip/v3/model/ListInternetBandwidthCountFilterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthCountFilterTagsRequest::ListInternetBandwidthCountFilterTagsRequest()
{
    bodyIsSet_ = false;
}

ListInternetBandwidthCountFilterTagsRequest::~ListInternetBandwidthCountFilterTagsRequest() = default;

void ListInternetBandwidthCountFilterTagsRequest::validate()
{
}

web::json::value ListInternetBandwidthCountFilterTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListInternetBandwidthCountFilterTagsRequest::fromJson(const web::json::value& val)
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


ListResourcesByTagsRequestBody ListInternetBandwidthCountFilterTagsRequest::getBody() const
{
    return body_;
}

void ListInternetBandwidthCountFilterTagsRequest::setBody(const ListResourcesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListInternetBandwidthCountFilterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListInternetBandwidthCountFilterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


