

#include "huaweicloud/evs/v2/model/ListVolumesByTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumesByTagsRequest::ListVolumesByTagsRequest()
{
    bodyIsSet_ = false;
}

ListVolumesByTagsRequest::~ListVolumesByTagsRequest() = default;

void ListVolumesByTagsRequest::validate()
{
}

web::json::value ListVolumesByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListVolumesByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListVolumesByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListVolumesByTagsRequestBody ListVolumesByTagsRequest::getBody() const
{
    return body_;
}

void ListVolumesByTagsRequest::setBody(const ListVolumesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListVolumesByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListVolumesByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


