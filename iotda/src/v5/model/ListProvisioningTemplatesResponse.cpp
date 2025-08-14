

#include "huaweicloud/iotda/v5/model/ListProvisioningTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListProvisioningTemplatesResponse::ListProvisioningTemplatesResponse()
{
    templatesIsSet_ = false;
    pageIsSet_ = false;
}

ListProvisioningTemplatesResponse::~ListProvisioningTemplatesResponse() = default;

void ListProvisioningTemplatesResponse::validate()
{
}

web::json::value ListProvisioningTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListProvisioningTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<ProvisioningTemplateSimple> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<ProvisioningTemplateSimple>& ListProvisioningTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListProvisioningTemplatesResponse::setTemplates(const std::vector<ProvisioningTemplateSimple>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListProvisioningTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListProvisioningTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

Page ListProvisioningTemplatesResponse::getPage() const
{
    return page_;
}

void ListProvisioningTemplatesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListProvisioningTemplatesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListProvisioningTemplatesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


