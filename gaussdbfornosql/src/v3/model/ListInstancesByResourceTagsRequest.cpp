

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesByResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesByResourceTagsRequest::ListInstancesByResourceTagsRequest()
{
    bodyIsSet_ = false;
}

ListInstancesByResourceTagsRequest::~ListInstancesByResourceTagsRequest() = default;

void ListInstancesByResourceTagsRequest::validate()
{
}

web::json::value ListInstancesByResourceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListInstancesByResourceTagsRequest::fromJson(const web::json::value& val)
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


ListInstancesByTagsRequestBody ListInstancesByResourceTagsRequest::getBody() const
{
    return body_;
}

void ListInstancesByResourceTagsRequest::setBody(const ListInstancesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListInstancesByResourceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListInstancesByResourceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


