

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchYamlTemplateContentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchYamlTemplateContentResponse::ShowAutoSearchYamlTemplateContentResponse()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

ShowAutoSearchYamlTemplateContentResponse::~ShowAutoSearchYamlTemplateContentResponse() = default;

void ShowAutoSearchYamlTemplateContentResponse::validate()
{
}

web::json::value ShowAutoSearchYamlTemplateContentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool ShowAutoSearchYamlTemplateContentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string ShowAutoSearchYamlTemplateContentResponse::getFileName() const
{
    return fileName_;
}

void ShowAutoSearchYamlTemplateContentResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowAutoSearchYamlTemplateContentResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowAutoSearchYamlTemplateContentResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ShowAutoSearchYamlTemplateContentResponse::getContent() const
{
    return content_;
}

void ShowAutoSearchYamlTemplateContentResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowAutoSearchYamlTemplateContentResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowAutoSearchYamlTemplateContentResponse::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


