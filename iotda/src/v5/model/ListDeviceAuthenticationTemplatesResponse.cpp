

#include "huaweicloud/iotda/v5/model/ListDeviceAuthenticationTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceAuthenticationTemplatesResponse::ListDeviceAuthenticationTemplatesResponse()
{
    templatesIsSet_ = false;
    pageIsSet_ = false;
}

ListDeviceAuthenticationTemplatesResponse::~ListDeviceAuthenticationTemplatesResponse() = default;

void ListDeviceAuthenticationTemplatesResponse::validate()
{
}

web::json::value ListDeviceAuthenticationTemplatesResponse::toJson() const
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
bool ListDeviceAuthenticationTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<AuthenticationTemplateSimple> refVal;
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


std::vector<AuthenticationTemplateSimple>& ListDeviceAuthenticationTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListDeviceAuthenticationTemplatesResponse::setTemplates(const std::vector<AuthenticationTemplateSimple>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListDeviceAuthenticationTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListDeviceAuthenticationTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

Page ListDeviceAuthenticationTemplatesResponse::getPage() const
{
    return page_;
}

void ListDeviceAuthenticationTemplatesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeviceAuthenticationTemplatesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeviceAuthenticationTemplatesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


