

#include "huaweicloud/eip/model/CreatePublicipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePublicipRequest::CreatePublicipRequest()
{
    bodyIsSet_ = false;
}

CreatePublicipRequest::~CreatePublicipRequest() = default;

void CreatePublicipRequest::validate()
{
}

web::json::value CreatePublicipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatePublicipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePublicipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreatePublicipRequestBody CreatePublicipRequest::getBody() const
{
    return body_;
}

void CreatePublicipRequest::setBody(const CreatePublicipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePublicipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePublicipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


