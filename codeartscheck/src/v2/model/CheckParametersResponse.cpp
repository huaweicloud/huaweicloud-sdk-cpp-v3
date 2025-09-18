

#include "huaweicloud/codeartscheck/v2/model/CheckParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckParametersResponse::CheckParametersResponse()
{
    bodyIsSet_ = false;
}

CheckParametersResponse::~CheckParametersResponse() = default;

void CheckParametersResponse::validate()
{
}

web::json::value CheckParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskCheckParamters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TaskCheckParamters>& CheckParametersResponse::getBody()
{
    return body_;
}

void CheckParametersResponse::setBody(const std::vector<TaskCheckParamters>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckParametersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckParametersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


