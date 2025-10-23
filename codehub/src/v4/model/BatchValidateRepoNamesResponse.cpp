

#include "huaweicloud/codehub/v4/model/BatchValidateRepoNamesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchValidateRepoNamesResponse::BatchValidateRepoNamesResponse()
{
    bodyIsSet_ = false;
}

BatchValidateRepoNamesResponse::~BatchValidateRepoNamesResponse() = default;

void BatchValidateRepoNamesResponse::validate()
{
}

web::json::value BatchValidateRepoNamesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchValidateRepoNamesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ValidateRepoNameResultDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ValidateRepoNameResultDto>& BatchValidateRepoNamesResponse::getBody()
{
    return body_;
}

void BatchValidateRepoNamesResponse::setBody(const std::vector<ValidateRepoNameResultDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchValidateRepoNamesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchValidateRepoNamesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


