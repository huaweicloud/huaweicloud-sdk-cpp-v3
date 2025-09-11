

#include "huaweicloud/functiongraph/v2/model/ShowFunctionTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionTemplateRequest::ShowFunctionTemplateRequest()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFunctionTemplateRequest::~ShowFunctionTemplateRequest() = default;

void ShowFunctionTemplateRequest::validate()
{
}

web::json::value ShowFunctionTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowFunctionTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowFunctionTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void ShowFunctionTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowFunctionTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowFunctionTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ShowFunctionTemplateRequest::getContentType() const
{
    return contentType_;
}

void ShowFunctionTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFunctionTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFunctionTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


