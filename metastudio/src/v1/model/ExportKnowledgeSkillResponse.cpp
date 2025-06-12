

#include "huaweicloud/metastudio/v1/model/ExportKnowledgeSkillResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExportKnowledgeSkillResponse::ExportKnowledgeSkillResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ExportKnowledgeSkillResponse::~ExportKnowledgeSkillResponse() = default;

void ExportKnowledgeSkillResponse::validate()
{
}

web::json::value ExportKnowledgeSkillResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ExportKnowledgeSkillResponse::fromJson(const web::json::value& val)
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


std::string ExportKnowledgeSkillResponse::getXRequestId() const
{
    return xRequestId_;
}

void ExportKnowledgeSkillResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ExportKnowledgeSkillResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ExportKnowledgeSkillResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


