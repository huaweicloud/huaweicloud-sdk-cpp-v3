

#include "huaweicloud/eip/v2/model/BatchCreatePublicipsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreatePublicipsRequest::BatchCreatePublicipsRequest()
{
    bodyIsSet_ = false;
}

BatchCreatePublicipsRequest::~BatchCreatePublicipsRequest() = default;

void BatchCreatePublicipsRequest::validate()
{
}

web::json::value BatchCreatePublicipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchCreatePublicipsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreatePublicipsV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

BatchCreatePublicipsV2RequestBody BatchCreatePublicipsRequest::getBody() const
{
    return body_;
}

void BatchCreatePublicipsRequest::setBody(const BatchCreatePublicipsV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreatePublicipsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreatePublicipsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


