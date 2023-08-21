

#include "huaweicloud/kms/v2/model/ListKeyDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyDetailRequest::ListKeyDetailRequest()
{
    bodyIsSet_ = false;
}

ListKeyDetailRequest::~ListKeyDetailRequest() = default;

void ListKeyDetailRequest::validate()
{
}

web::json::value ListKeyDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListKeyDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

OperateKeyRequestBody ListKeyDetailRequest::getBody() const
{
    return body_;
}

void ListKeyDetailRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListKeyDetailRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListKeyDetailRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


