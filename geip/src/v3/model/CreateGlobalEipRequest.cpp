

#include "huaweicloud/geip/v3/model/CreateGlobalEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipRequest::CreateGlobalEipRequest()
{
    bodyIsSet_ = false;
}

CreateGlobalEipRequest::~CreateGlobalEipRequest() = default;

void CreateGlobalEipRequest::validate()
{
}

web::json::value CreateGlobalEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGlobalEipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateGlobalEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateGlobalEipRequestBody CreateGlobalEipRequest::getBody() const
{
    return body_;
}

void CreateGlobalEipRequest::setBody(const CreateGlobalEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGlobalEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGlobalEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


