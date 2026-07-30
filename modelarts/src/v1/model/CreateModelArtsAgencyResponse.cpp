

#include "huaweicloud/modelarts/v1/model/CreateModelArtsAgencyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateModelArtsAgencyResponse::CreateModelArtsAgencyResponse()
{
    bodyIsSet_ = false;
}

CreateModelArtsAgencyResponse::~CreateModelArtsAgencyResponse() = default;

void CreateModelArtsAgencyResponse::validate()
{
}

web::json::value CreateModelArtsAgencyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateModelArtsAgencyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object CreateModelArtsAgencyResponse::getBody() const
{
    return body_;
}

void CreateModelArtsAgencyResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateModelArtsAgencyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateModelArtsAgencyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


