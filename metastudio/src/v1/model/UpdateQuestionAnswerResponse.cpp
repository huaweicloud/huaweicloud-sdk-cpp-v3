

#include "huaweicloud/metastudio/v1/model/UpdateQuestionAnswerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateQuestionAnswerResponse::UpdateQuestionAnswerResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateQuestionAnswerResponse::~UpdateQuestionAnswerResponse() = default;

void UpdateQuestionAnswerResponse::validate()
{
}

web::json::value UpdateQuestionAnswerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateQuestionAnswerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateQuestionAnswerResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateQuestionAnswerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateQuestionAnswerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateQuestionAnswerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


