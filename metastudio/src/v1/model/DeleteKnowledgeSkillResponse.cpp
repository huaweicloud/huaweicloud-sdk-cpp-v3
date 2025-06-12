

#include "huaweicloud/metastudio/v1/model/DeleteKnowledgeSkillResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteKnowledgeSkillResponse::DeleteKnowledgeSkillResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteKnowledgeSkillResponse::~DeleteKnowledgeSkillResponse() = default;

void DeleteKnowledgeSkillResponse::validate()
{
}

web::json::value DeleteKnowledgeSkillResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteKnowledgeSkillResponse::fromJson(const web::json::value& val)
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


std::string DeleteKnowledgeSkillResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteKnowledgeSkillResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteKnowledgeSkillResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteKnowledgeSkillResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


