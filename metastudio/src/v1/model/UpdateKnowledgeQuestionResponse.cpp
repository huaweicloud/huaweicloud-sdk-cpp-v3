

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeQuestionResponse::UpdateKnowledgeQuestionResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateKnowledgeQuestionResponse::~UpdateKnowledgeQuestionResponse() = default;

void UpdateKnowledgeQuestionResponse::validate()
{
}

web::json::value UpdateKnowledgeQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateKnowledgeQuestionResponse::fromJson(const web::json::value& val)
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


std::string UpdateKnowledgeQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateKnowledgeQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateKnowledgeQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateKnowledgeQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


