

#include "huaweicloud/cloudtest/v1/model/ExtendInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExtendInfo::ExtendInfo()
{
    authorIsSet_ = false;
    updatorIsSet_ = false;
    domainIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    preparation_ = "";
    preparationIsSet_ = false;
    stepsIsSet_ = false;
    labelListIsSet_ = false;
    defectListIsSet_ = false;
    moduleIsSet_ = false;
    issueIsSet_ = false;
    testVersionId_ = "";
    testVersionIdIsSet_ = false;
    fixedVersionIsSet_ = false;
}

ExtendInfo::~ExtendInfo() = default;

void ExtendInfo::validate()
{
}

web::json::value ExtendInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(preparationIsSet_) {
        val[utility::conversions::to_string_t("preparation")] = ModelBase::toJson(preparation_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(labelListIsSet_) {
        val[utility::conversions::to_string_t("label_list")] = ModelBase::toJson(labelList_);
    }
    if(defectListIsSet_) {
        val[utility::conversions::to_string_t("defect_list")] = ModelBase::toJson(defectList_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(issueIsSet_) {
        val[utility::conversions::to_string_t("issue")] = ModelBase::toJson(issue_);
    }
    if(testVersionIdIsSet_) {
        val[utility::conversions::to_string_t("test_version_id")] = ModelBase::toJson(testVersionId_);
    }
    if(fixedVersionIsSet_) {
        val[utility::conversions::to_string_t("fixed_version")] = ModelBase::toJson(fixedVersion_);
    }

    return val;
}
bool ExtendInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            ExtendAuthorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            ExtendAuthorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            AssignedUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preparation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preparation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreparation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalServiceCaseStep> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AssignedUserInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AssignedUserInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            AssignedUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue"));
        if(!fieldValue.is_null())
        {
            AssignedUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_version"));
        if(!fieldValue.is_null())
        {
            AssignedUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedVersion(refVal);
        }
    }
    return ok;
}


ExtendAuthorInfo ExtendInfo::getAuthor() const
{
    return author_;
}

void ExtendInfo::setAuthor(const ExtendAuthorInfo& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ExtendInfo::authorIsSet() const
{
    return authorIsSet_;
}

void ExtendInfo::unsetauthor()
{
    authorIsSet_ = false;
}

ExtendAuthorInfo ExtendInfo::getUpdator() const
{
    return updator_;
}

void ExtendInfo::setUpdator(const ExtendAuthorInfo& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool ExtendInfo::updatorIsSet() const
{
    return updatorIsSet_;
}

void ExtendInfo::unsetupdator()
{
    updatorIsSet_ = false;
}

AssignedUserInfo ExtendInfo::getDomain() const
{
    return domain_;
}

void ExtendInfo::setDomain(const AssignedUserInfo& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ExtendInfo::domainIsSet() const
{
    return domainIsSet_;
}

void ExtendInfo::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ExtendInfo::getDescription() const
{
    return description_;
}

void ExtendInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExtendInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExtendInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExtendInfo::getPreparation() const
{
    return preparation_;
}

void ExtendInfo::setPreparation(const std::string& value)
{
    preparation_ = value;
    preparationIsSet_ = true;
}

bool ExtendInfo::preparationIsSet() const
{
    return preparationIsSet_;
}

void ExtendInfo::unsetpreparation()
{
    preparationIsSet_ = false;
}

std::vector<ExternalServiceCaseStep>& ExtendInfo::getSteps()
{
    return steps_;
}

void ExtendInfo::setSteps(const std::vector<ExternalServiceCaseStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ExtendInfo::stepsIsSet() const
{
    return stepsIsSet_;
}

void ExtendInfo::unsetsteps()
{
    stepsIsSet_ = false;
}

std::vector<AssignedUserInfo>& ExtendInfo::getLabelList()
{
    return labelList_;
}

void ExtendInfo::setLabelList(const std::vector<AssignedUserInfo>& value)
{
    labelList_ = value;
    labelListIsSet_ = true;
}

bool ExtendInfo::labelListIsSet() const
{
    return labelListIsSet_;
}

void ExtendInfo::unsetlabelList()
{
    labelListIsSet_ = false;
}

std::vector<AssignedUserInfo>& ExtendInfo::getDefectList()
{
    return defectList_;
}

void ExtendInfo::setDefectList(const std::vector<AssignedUserInfo>& value)
{
    defectList_ = value;
    defectListIsSet_ = true;
}

bool ExtendInfo::defectListIsSet() const
{
    return defectListIsSet_;
}

void ExtendInfo::unsetdefectList()
{
    defectListIsSet_ = false;
}

AssignedUserInfo ExtendInfo::getModule() const
{
    return module_;
}

void ExtendInfo::setModule(const AssignedUserInfo& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool ExtendInfo::moduleIsSet() const
{
    return moduleIsSet_;
}

void ExtendInfo::unsetmodule()
{
    moduleIsSet_ = false;
}

AssignedUserInfo ExtendInfo::getIssue() const
{
    return issue_;
}

void ExtendInfo::setIssue(const AssignedUserInfo& value)
{
    issue_ = value;
    issueIsSet_ = true;
}

bool ExtendInfo::issueIsSet() const
{
    return issueIsSet_;
}

void ExtendInfo::unsetissue()
{
    issueIsSet_ = false;
}

std::string ExtendInfo::getTestVersionId() const
{
    return testVersionId_;
}

void ExtendInfo::setTestVersionId(const std::string& value)
{
    testVersionId_ = value;
    testVersionIdIsSet_ = true;
}

bool ExtendInfo::testVersionIdIsSet() const
{
    return testVersionIdIsSet_;
}

void ExtendInfo::unsettestVersionId()
{
    testVersionIdIsSet_ = false;
}

AssignedUserInfo ExtendInfo::getFixedVersion() const
{
    return fixedVersion_;
}

void ExtendInfo::setFixedVersion(const AssignedUserInfo& value)
{
    fixedVersion_ = value;
    fixedVersionIsSet_ = true;
}

bool ExtendInfo::fixedVersionIsSet() const
{
    return fixedVersionIsSet_;
}

void ExtendInfo::unsetfixedVersion()
{
    fixedVersionIsSet_ = false;
}

}
}
}
}
}


