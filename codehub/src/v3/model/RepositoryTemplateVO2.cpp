

#include "huaweicloud/codehub/v3/model/RepositoryTemplateVO2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepositoryTemplateVO2::RepositoryTemplateVO2()
{
    templateType_ = "";
    templateTypeIsSet_ = false;
    codeTitle_ = "";
    codeTitleIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    codeDescription_ = "";
    codeDescriptionIsSet_ = false;
    languagesIsSet_ = false;
    plateformIsSet_ = false;
    entertypeIsSet_ = false;
}

RepositoryTemplateVO2::~RepositoryTemplateVO2() = default;

void RepositoryTemplateVO2::validate()
{
}

web::json::value RepositoryTemplateVO2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(codeTitleIsSet_) {
        val[utility::conversions::to_string_t("code_title")] = ModelBase::toJson(codeTitle_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(codeDescriptionIsSet_) {
        val[utility::conversions::to_string_t("code_description")] = ModelBase::toJson(codeDescription_);
    }
    if(languagesIsSet_) {
        val[utility::conversions::to_string_t("languages")] = ModelBase::toJson(languages_);
    }
    if(plateformIsSet_) {
        val[utility::conversions::to_string_t("plateform")] = ModelBase::toJson(plateform_);
    }
    if(entertypeIsSet_) {
        val[utility::conversions::to_string_t("entertype")] = ModelBase::toJson(entertype_);
    }

    return val;
}
bool RepositoryTemplateVO2::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("languages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("languages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plateform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plateform"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlateform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entertype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entertype"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntertype(refVal);
        }
    }
    return ok;
}


std::string RepositoryTemplateVO2::getTemplateType() const
{
    return templateType_;
}

void RepositoryTemplateVO2::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool RepositoryTemplateVO2::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void RepositoryTemplateVO2::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string RepositoryTemplateVO2::getCodeTitle() const
{
    return codeTitle_;
}

void RepositoryTemplateVO2::setCodeTitle(const std::string& value)
{
    codeTitle_ = value;
    codeTitleIsSet_ = true;
}

bool RepositoryTemplateVO2::codeTitleIsSet() const
{
    return codeTitleIsSet_;
}

void RepositoryTemplateVO2::unsetcodeTitle()
{
    codeTitleIsSet_ = false;
}

std::string RepositoryTemplateVO2::getCreatorName() const
{
    return creatorName_;
}

void RepositoryTemplateVO2::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool RepositoryTemplateVO2::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void RepositoryTemplateVO2::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string RepositoryTemplateVO2::getCodeDescription() const
{
    return codeDescription_;
}

void RepositoryTemplateVO2::setCodeDescription(const std::string& value)
{
    codeDescription_ = value;
    codeDescriptionIsSet_ = true;
}

bool RepositoryTemplateVO2::codeDescriptionIsSet() const
{
    return codeDescriptionIsSet_;
}

void RepositoryTemplateVO2::unsetcodeDescription()
{
    codeDescriptionIsSet_ = false;
}

std::vector<std::string>& RepositoryTemplateVO2::getLanguages()
{
    return languages_;
}

void RepositoryTemplateVO2::setLanguages(const std::vector<std::string>& value)
{
    languages_ = value;
    languagesIsSet_ = true;
}

bool RepositoryTemplateVO2::languagesIsSet() const
{
    return languagesIsSet_;
}

void RepositoryTemplateVO2::unsetlanguages()
{
    languagesIsSet_ = false;
}

std::vector<std::string>& RepositoryTemplateVO2::getPlateform()
{
    return plateform_;
}

void RepositoryTemplateVO2::setPlateform(const std::vector<std::string>& value)
{
    plateform_ = value;
    plateformIsSet_ = true;
}

bool RepositoryTemplateVO2::plateformIsSet() const
{
    return plateformIsSet_;
}

void RepositoryTemplateVO2::unsetplateform()
{
    plateformIsSet_ = false;
}

std::vector<std::string>& RepositoryTemplateVO2::getEntertype()
{
    return entertype_;
}

void RepositoryTemplateVO2::setEntertype(const std::vector<std::string>& value)
{
    entertype_ = value;
    entertypeIsSet_ = true;
}

bool RepositoryTemplateVO2::entertypeIsSet() const
{
    return entertypeIsSet_;
}

void RepositoryTemplateVO2::unsetentertype()
{
    entertypeIsSet_ = false;
}

}
}
}
}
}


