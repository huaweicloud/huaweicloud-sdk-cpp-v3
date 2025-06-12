

#include "huaweicloud/metastudio/v1/model/UpdateBatchKnowledgeQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateBatchKnowledgeQuestionResponse::UpdateBatchKnowledgeQuestionResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateBatchKnowledgeQuestionResponse::~UpdateBatchKnowledgeQuestionResponse() = default;

void UpdateBatchKnowledgeQuestionResponse::validate()
{
}

web::json::value UpdateBatchKnowledgeQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateBatchKnowledgeQuestionResponse::fromJson(const web::json::value& val)
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


std::string UpdateBatchKnowledgeQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateBatchKnowledgeQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateBatchKnowledgeQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateBatchKnowledgeQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


