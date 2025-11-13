

#include "huaweicloud/gaussdb/v3/model/DownloadImportExcelTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadImportExcelTemplateRequest::DownloadImportExcelTemplateRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
}

DownloadImportExcelTemplateRequest::~DownloadImportExcelTemplateRequest() = default;

void DownloadImportExcelTemplateRequest::validate()
{
}

web::json::value DownloadImportExcelTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }

    return val;
}
bool DownloadImportExcelTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string DownloadImportExcelTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadImportExcelTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadImportExcelTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadImportExcelTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadImportExcelTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadImportExcelTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadImportExcelTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadImportExcelTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DownloadImportExcelTemplateRequest::getTemplateType() const
{
    return templateType_;
}

void DownloadImportExcelTemplateRequest::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool DownloadImportExcelTemplateRequest::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void DownloadImportExcelTemplateRequest::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

}
}
}
}
}


