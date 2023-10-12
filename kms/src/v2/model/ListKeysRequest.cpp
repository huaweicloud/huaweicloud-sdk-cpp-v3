

#include "huaweicloud/kms/v2/model/ListKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeysRequest::ListKeysRequest()
{
    bodyIsSet_ = false;
}

ListKeysRequest::~ListKeysRequest() = default;

void ListKeysRequest::validate()
{
}

web::json::value ListKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListKeysRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListKeysRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListKeysRequestBody ListKeysRequest::getBody() const
{
    return body_;
}

void ListKeysRequest::setBody(const ListKeysRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListKeysRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListKeysRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


