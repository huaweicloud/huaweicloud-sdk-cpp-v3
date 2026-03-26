

#include "huaweicloud/cloudtest/v1/model/BatchAddCaseResultInTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchAddCaseResultInTaskResponse::BatchAddCaseResultInTaskResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

BatchAddCaseResultInTaskResponse::~BatchAddCaseResultInTaskResponse() = default;

void BatchAddCaseResultInTaskResponse::validate()
{
}

web::json::value BatchAddCaseResultInTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAddCaseResultInTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddCaseResultInTaskResponse::getBody() const
{
    return body_;
}

void BatchAddCaseResultInTaskResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddCaseResultInTaskResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddCaseResultInTaskResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


