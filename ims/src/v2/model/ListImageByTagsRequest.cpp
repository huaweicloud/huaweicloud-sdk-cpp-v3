

#include "huaweicloud/ims/v2/model/ListImageByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImageByTagsRequest::ListImageByTagsRequest()
{
    bodyIsSet_ = false;
}

ListImageByTagsRequest::~ListImageByTagsRequest() = default;

void ListImageByTagsRequest::validate()
{
}

web::json::value ListImageByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListImageByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListImageByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListImageByTagsRequestBody ListImageByTagsRequest::getBody() const
{
    return body_;
}

void ListImageByTagsRequest::setBody(const ListImageByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListImageByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListImageByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


