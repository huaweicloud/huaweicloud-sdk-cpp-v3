

#include "huaweicloud/dbss/v1/model/ListAuditReportTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditReportTemplatesResponse::ListAuditReportTemplatesResponse()
{
    osType_ = "";
    osTypeIsSet_ = false;
    templatesIsSet_ = false;
}

ListAuditReportTemplatesResponse::~ListAuditReportTemplatesResponse() = default;

void ListAuditReportTemplatesResponse::validate()
{
}

web::json::value ListAuditReportTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("os_type")] = ModelBase::toJson(osType_);
    }
    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}
bool ListAuditReportTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


std::string ListAuditReportTemplatesResponse::getOsType() const
{
    return osType_;
}

void ListAuditReportTemplatesResponse::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool ListAuditReportTemplatesResponse::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void ListAuditReportTemplatesResponse::unsetosType()
{
    osTypeIsSet_ = false;
}

std::vector<TemplateInfo>& ListAuditReportTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListAuditReportTemplatesResponse::setTemplates(const std::vector<TemplateInfo>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListAuditReportTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListAuditReportTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


