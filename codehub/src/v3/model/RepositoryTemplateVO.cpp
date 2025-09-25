

#include "huaweicloud/codehub/v3/model/RepositoryTemplateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepositoryTemplateVO::RepositoryTemplateVO()
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

RepositoryTemplateVO::~RepositoryTemplateVO() = default;

void RepositoryTemplateVO::validate()
{
}

web::json::value RepositoryTemplateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("templateType")] = ModelBase::toJson(templateType_);
    }
    if(codeTitleIsSet_) {
        val[utility::conversions::to_string_t("codeTitle")] = ModelBase::toJson(codeTitle_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creatorName")] = ModelBase::toJson(creatorName_);
    }
    if(codeDescriptionIsSet_) {
        val[utility::conversions::to_string_t("codeDescription")] = ModelBase::toJson(codeDescription_);
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
bool RepositoryTemplateVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templateType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codeTitle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codeTitle"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creatorName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatorName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codeDescription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codeDescription"));
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


std::string RepositoryTemplateVO::getTemplateType() const
{
    return templateType_;
}

void RepositoryTemplateVO::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool RepositoryTemplateVO::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void RepositoryTemplateVO::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string RepositoryTemplateVO::getCodeTitle() const
{
    return codeTitle_;
}

void RepositoryTemplateVO::setCodeTitle(const std::string& value)
{
    codeTitle_ = value;
    codeTitleIsSet_ = true;
}

bool RepositoryTemplateVO::codeTitleIsSet() const
{
    return codeTitleIsSet_;
}

void RepositoryTemplateVO::unsetcodeTitle()
{
    codeTitleIsSet_ = false;
}

std::string RepositoryTemplateVO::getCreatorName() const
{
    return creatorName_;
}

void RepositoryTemplateVO::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool RepositoryTemplateVO::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void RepositoryTemplateVO::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string RepositoryTemplateVO::getCodeDescription() const
{
    return codeDescription_;
}

void RepositoryTemplateVO::setCodeDescription(const std::string& value)
{
    codeDescription_ = value;
    codeDescriptionIsSet_ = true;
}

bool RepositoryTemplateVO::codeDescriptionIsSet() const
{
    return codeDescriptionIsSet_;
}

void RepositoryTemplateVO::unsetcodeDescription()
{
    codeDescriptionIsSet_ = false;
}

std::vector<std::string>& RepositoryTemplateVO::getLanguages()
{
    return languages_;
}

void RepositoryTemplateVO::setLanguages(const std::vector<std::string>& value)
{
    languages_ = value;
    languagesIsSet_ = true;
}

bool RepositoryTemplateVO::languagesIsSet() const
{
    return languagesIsSet_;
}

void RepositoryTemplateVO::unsetlanguages()
{
    languagesIsSet_ = false;
}

std::vector<std::string>& RepositoryTemplateVO::getPlateform()
{
    return plateform_;
}

void RepositoryTemplateVO::setPlateform(const std::vector<std::string>& value)
{
    plateform_ = value;
    plateformIsSet_ = true;
}

bool RepositoryTemplateVO::plateformIsSet() const
{
    return plateformIsSet_;
}

void RepositoryTemplateVO::unsetplateform()
{
    plateformIsSet_ = false;
}

std::vector<std::string>& RepositoryTemplateVO::getEntertype()
{
    return entertype_;
}

void RepositoryTemplateVO::setEntertype(const std::vector<std::string>& value)
{
    entertype_ = value;
    entertypeIsSet_ = true;
}

bool RepositoryTemplateVO::entertypeIsSet() const
{
    return entertypeIsSet_;
}

void RepositoryTemplateVO::unsetentertype()
{
    entertypeIsSet_ = false;
}

}
}
}
}
}


