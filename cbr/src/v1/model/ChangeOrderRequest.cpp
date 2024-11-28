

#include "huaweicloud/cbr/v1/model/ChangeOrderRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ChangeOrderRequest::ChangeOrderRequest()
{
    bodyIsSet_ = false;
}

ChangeOrderRequest::~ChangeOrderRequest() = default;

void ChangeOrderRequest::validate()
{
}

web::json::value ChangeOrderRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeOrderRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CbcOrderChange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CbcOrderChange ChangeOrderRequest::getBody() const
{
    return body_;
}

void ChangeOrderRequest::setBody(const CbcOrderChange& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeOrderRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeOrderRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


