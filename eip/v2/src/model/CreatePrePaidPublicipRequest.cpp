

#include "huaweicloud/eip/model/CreatePrePaidPublicipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePrePaidPublicipRequest::CreatePrePaidPublicipRequest()
{
    bodyIsSet_ = false;
}

CreatePrePaidPublicipRequest::~CreatePrePaidPublicipRequest() = default;

void CreatePrePaidPublicipRequest::validate()
{
}

web::json::value CreatePrePaidPublicipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatePrePaidPublicipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePrePaidPublicipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreatePrePaidPublicipRequestBody CreatePrePaidPublicipRequest::getBody() const
{
    return body_;
}

void CreatePrePaidPublicipRequest::setBody(const CreatePrePaidPublicipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePrePaidPublicipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePrePaidPublicipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


