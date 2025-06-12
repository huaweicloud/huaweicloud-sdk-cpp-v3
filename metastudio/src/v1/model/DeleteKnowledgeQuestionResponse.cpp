

#include "huaweicloud/metastudio/v1/model/DeleteKnowledgeQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteKnowledgeQuestionResponse::DeleteKnowledgeQuestionResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteKnowledgeQuestionResponse::~DeleteKnowledgeQuestionResponse() = default;

void DeleteKnowledgeQuestionResponse::validate()
{
}

web::json::value DeleteKnowledgeQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteKnowledgeQuestionResponse::fromJson(const web::json::value& val)
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


std::string DeleteKnowledgeQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteKnowledgeQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteKnowledgeQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteKnowledgeQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


