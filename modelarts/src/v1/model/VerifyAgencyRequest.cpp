

#include "huaweicloud/modelarts/v1/model/VerifyAgencyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VerifyAgencyRequest::VerifyAgencyRequest()
{
    bodyIsSet_ = false;
}

VerifyAgencyRequest::~VerifyAgencyRequest() = default;

void VerifyAgencyRequest::validate()
{
}

web::json::value VerifyAgencyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool VerifyAgencyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AgencyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AgencyRequest VerifyAgencyRequest::getBody() const
{
    return body_;
}

void VerifyAgencyRequest::setBody(const AgencyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool VerifyAgencyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void VerifyAgencyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


