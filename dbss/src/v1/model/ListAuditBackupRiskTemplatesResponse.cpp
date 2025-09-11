

#include "huaweicloud/dbss/v1/model/ListAuditBackupRiskTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditBackupRiskTemplatesResponse::ListAuditBackupRiskTemplatesResponse()
{
    templatesIsSet_ = false;
}

ListAuditBackupRiskTemplatesResponse::~ListAuditBackupRiskTemplatesResponse() = default;

void ListAuditBackupRiskTemplatesResponse::validate()
{
}

web::json::value ListAuditBackupRiskTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}
bool ListAuditBackupRiskTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<RiskBackupTemplateBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


std::vector<RiskBackupTemplateBean>& ListAuditBackupRiskTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListAuditBackupRiskTemplatesResponse::setTemplates(const std::vector<RiskBackupTemplateBean>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListAuditBackupRiskTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListAuditBackupRiskTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


