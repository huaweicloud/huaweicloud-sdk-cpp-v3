

#include "huaweicloud/metastudio/v1/model/DeleteKnowledgeIntentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteKnowledgeIntentResponse::DeleteKnowledgeIntentResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteKnowledgeIntentResponse::~DeleteKnowledgeIntentResponse() = default;

void DeleteKnowledgeIntentResponse::validate()
{
}

web::json::value DeleteKnowledgeIntentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteKnowledgeIntentResponse::fromJson(const web::json::value& val)
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


std::string DeleteKnowledgeIntentResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteKnowledgeIntentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteKnowledgeIntentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteKnowledgeIntentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


