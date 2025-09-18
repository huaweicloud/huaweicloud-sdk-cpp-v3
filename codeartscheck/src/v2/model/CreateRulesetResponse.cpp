

#include "huaweicloud/codeartscheck/v2/model/CreateRulesetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CreateRulesetResponse::CreateRulesetResponse()
{
    templateId_ = "";
    templateIdIsSet_ = false;
}

CreateRulesetResponse::~CreateRulesetResponse() = default;

void CreateRulesetResponse::validate()
{
}

web::json::value CreateRulesetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool CreateRulesetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


std::string CreateRulesetResponse::getTemplateId() const
{
    return templateId_;
}

void CreateRulesetResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateRulesetResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateRulesetResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


