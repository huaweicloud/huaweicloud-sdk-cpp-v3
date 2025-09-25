

#include "huaweicloud/codeartspipeline/v2/model/ShowTemplateDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowTemplateDetailRequest::ShowTemplateDetailRequest()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
}

ShowTemplateDetailRequest::~ShowTemplateDetailRequest() = default;

void ShowTemplateDetailRequest::validate()
{
}

web::json::value ShowTemplateDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool ShowTemplateDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::string ShowTemplateDetailRequest::getTemplateId() const
{
    return templateId_;
}

void ShowTemplateDetailRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowTemplateDetailRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowTemplateDetailRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ShowTemplateDetailRequest::getTemplateType() const
{
    return templateType_;
}

void ShowTemplateDetailRequest::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool ShowTemplateDetailRequest::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void ShowTemplateDetailRequest::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string ShowTemplateDetailRequest::getSource() const
{
    return source_;
}

void ShowTemplateDetailRequest::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ShowTemplateDetailRequest::sourceIsSet() const
{
    return sourceIsSet_;
}

void ShowTemplateDetailRequest::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


