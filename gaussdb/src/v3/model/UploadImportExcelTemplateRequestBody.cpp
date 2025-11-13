

#include "huaweicloud/gaussdb/v3/model/UploadImportExcelTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UploadImportExcelTemplateRequestBody::UploadImportExcelTemplateRequestBody()
{
    templateType_ = "";
    templateTypeIsSet_ = false;
    fileIsSet_ = false;
    isInstanceLevel_ = "";
    isInstanceLevelIsSet_ = false;
    selectedDbs_ = "";
    selectedDbsIsSet_ = false;
    isSupportRegexp_ = "";
    isSupportRegexpIsSet_ = false;
}

UploadImportExcelTemplateRequestBody::~UploadImportExcelTemplateRequestBody() = default;

void UploadImportExcelTemplateRequestBody::validate()
{
}

web::json::value UploadImportExcelTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(isInstanceLevelIsSet_) {
        val[utility::conversions::to_string_t("is_instance_level")] = ModelBase::toJson(isInstanceLevel_);
    }
    if(selectedDbsIsSet_) {
        val[utility::conversions::to_string_t("selected_dbs")] = ModelBase::toJson(selectedDbs_);
    }
    if(isSupportRegexpIsSet_) {
        val[utility::conversions::to_string_t("is_support_regexp")] = ModelBase::toJson(isSupportRegexp_);
    }

    return val;
}
bool UploadImportExcelTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_instance_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_instance_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsInstanceLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selected_dbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selected_dbs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectedDbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_regexp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_regexp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportRegexp(refVal);
        }
    }
    return ok;
}


std::string UploadImportExcelTemplateRequestBody::getTemplateType() const
{
    return templateType_;
}

void UploadImportExcelTemplateRequestBody::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool UploadImportExcelTemplateRequestBody::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void UploadImportExcelTemplateRequestBody::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

HttpContent UploadImportExcelTemplateRequestBody::getFile() const
{
    return file_;
}

void UploadImportExcelTemplateRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadImportExcelTemplateRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadImportExcelTemplateRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

std::string UploadImportExcelTemplateRequestBody::getIsInstanceLevel() const
{
    return isInstanceLevel_;
}

void UploadImportExcelTemplateRequestBody::setIsInstanceLevel(const std::string& value)
{
    isInstanceLevel_ = value;
    isInstanceLevelIsSet_ = true;
}

bool UploadImportExcelTemplateRequestBody::isInstanceLevelIsSet() const
{
    return isInstanceLevelIsSet_;
}

void UploadImportExcelTemplateRequestBody::unsetisInstanceLevel()
{
    isInstanceLevelIsSet_ = false;
}

std::string UploadImportExcelTemplateRequestBody::getSelectedDbs() const
{
    return selectedDbs_;
}

void UploadImportExcelTemplateRequestBody::setSelectedDbs(const std::string& value)
{
    selectedDbs_ = value;
    selectedDbsIsSet_ = true;
}

bool UploadImportExcelTemplateRequestBody::selectedDbsIsSet() const
{
    return selectedDbsIsSet_;
}

void UploadImportExcelTemplateRequestBody::unsetselectedDbs()
{
    selectedDbsIsSet_ = false;
}

std::string UploadImportExcelTemplateRequestBody::getIsSupportRegexp() const
{
    return isSupportRegexp_;
}

void UploadImportExcelTemplateRequestBody::setIsSupportRegexp(const std::string& value)
{
    isSupportRegexp_ = value;
    isSupportRegexpIsSet_ = true;
}

bool UploadImportExcelTemplateRequestBody::isSupportRegexpIsSet() const
{
    return isSupportRegexpIsSet_;
}

void UploadImportExcelTemplateRequestBody::unsetisSupportRegexp()
{
    isSupportRegexpIsSet_ = false;
}

}
}
}
}
}


