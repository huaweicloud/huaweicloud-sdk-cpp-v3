

#include "huaweicloud/csms/v1/model/CreateAgencyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateAgencyRequest::CreateAgencyRequest()
{
    bodyIsSet_ = false;
}

CreateAgencyRequest::~CreateAgencyRequest() = default;

void CreateAgencyRequest::validate()
{
}

web::json::value CreateAgencyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAgencyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAgencyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateAgencyRequestBody CreateAgencyRequest::getBody() const
{
    return body_;
}

void CreateAgencyRequest::setBody(const CreateAgencyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAgencyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAgencyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


