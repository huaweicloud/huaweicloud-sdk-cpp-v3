

#include "huaweicloud/projectman/v4/model/AssociatedTestCase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociatedTestCase::AssociatedTestCase()
{
    caseId_ = "";
    caseIdIsSet_ = false;
    caseNum_ = "";
    caseNumIsSet_ = false;
    caseName_ = "";
    caseNameIsSet_ = false;
    caseLevel_ = "";
    caseLevelIsSet_ = false;
    statusIsSet_ = false;
    creatorIsSet_ = false;
    ownerIsSet_ = false;
    projectIsSet_ = false;
    isBaseLine_ = 0;
    isBaseLineIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
}

AssociatedTestCase::~AssociatedTestCase() = default;

void AssociatedTestCase::validate()
{
}

web::json::value AssociatedTestCase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseIdIsSet_) {
        val[utility::conversions::to_string_t("case_id")] = ModelBase::toJson(caseId_);
    }
    if(caseNumIsSet_) {
        val[utility::conversions::to_string_t("case_num")] = ModelBase::toJson(caseNum_);
    }
    if(caseNameIsSet_) {
        val[utility::conversions::to_string_t("case_name")] = ModelBase::toJson(caseName_);
    }
    if(caseLevelIsSet_) {
        val[utility::conversions::to_string_t("case_level")] = ModelBase::toJson(caseLevel_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(isBaseLineIsSet_) {
        val[utility::conversions::to_string_t("is_base_line")] = ModelBase::toJson(isBaseLine_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }

    return val;
}
bool AssociatedTestCase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            StatusVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            SimpleUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            SimpleUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            SimpleProject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_base_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_base_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBaseLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    return ok;
}


std::string AssociatedTestCase::getCaseId() const
{
    return caseId_;
}

void AssociatedTestCase::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool AssociatedTestCase::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void AssociatedTestCase::unsetcaseId()
{
    caseIdIsSet_ = false;
}

std::string AssociatedTestCase::getCaseNum() const
{
    return caseNum_;
}

void AssociatedTestCase::setCaseNum(const std::string& value)
{
    caseNum_ = value;
    caseNumIsSet_ = true;
}

bool AssociatedTestCase::caseNumIsSet() const
{
    return caseNumIsSet_;
}

void AssociatedTestCase::unsetcaseNum()
{
    caseNumIsSet_ = false;
}

std::string AssociatedTestCase::getCaseName() const
{
    return caseName_;
}

void AssociatedTestCase::setCaseName(const std::string& value)
{
    caseName_ = value;
    caseNameIsSet_ = true;
}

bool AssociatedTestCase::caseNameIsSet() const
{
    return caseNameIsSet_;
}

void AssociatedTestCase::unsetcaseName()
{
    caseNameIsSet_ = false;
}

std::string AssociatedTestCase::getCaseLevel() const
{
    return caseLevel_;
}

void AssociatedTestCase::setCaseLevel(const std::string& value)
{
    caseLevel_ = value;
    caseLevelIsSet_ = true;
}

bool AssociatedTestCase::caseLevelIsSet() const
{
    return caseLevelIsSet_;
}

void AssociatedTestCase::unsetcaseLevel()
{
    caseLevelIsSet_ = false;
}

StatusVo AssociatedTestCase::getStatus() const
{
    return status_;
}

void AssociatedTestCase::setStatus(const StatusVo& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociatedTestCase::statusIsSet() const
{
    return statusIsSet_;
}

void AssociatedTestCase::unsetstatus()
{
    statusIsSet_ = false;
}

SimpleUser AssociatedTestCase::getCreator() const
{
    return creator_;
}

void AssociatedTestCase::setCreator(const SimpleUser& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool AssociatedTestCase::creatorIsSet() const
{
    return creatorIsSet_;
}

void AssociatedTestCase::unsetcreator()
{
    creatorIsSet_ = false;
}

SimpleUser AssociatedTestCase::getOwner() const
{
    return owner_;
}

void AssociatedTestCase::setOwner(const SimpleUser& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool AssociatedTestCase::ownerIsSet() const
{
    return ownerIsSet_;
}

void AssociatedTestCase::unsetowner()
{
    ownerIsSet_ = false;
}

SimpleProject AssociatedTestCase::getProject() const
{
    return project_;
}

void AssociatedTestCase::setProject(const SimpleProject& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool AssociatedTestCase::projectIsSet() const
{
    return projectIsSet_;
}

void AssociatedTestCase::unsetproject()
{
    projectIsSet_ = false;
}

int32_t AssociatedTestCase::getIsBaseLine() const
{
    return isBaseLine_;
}

void AssociatedTestCase::setIsBaseLine(int32_t value)
{
    isBaseLine_ = value;
    isBaseLineIsSet_ = true;
}

bool AssociatedTestCase::isBaseLineIsSet() const
{
    return isBaseLineIsSet_;
}

void AssociatedTestCase::unsetisBaseLine()
{
    isBaseLineIsSet_ = false;
}

std::string AssociatedTestCase::getType() const
{
    return type_;
}

void AssociatedTestCase::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AssociatedTestCase::typeIsSet() const
{
    return typeIsSet_;
}

void AssociatedTestCase::unsettype()
{
    typeIsSet_ = false;
}

int64_t AssociatedTestCase::getCreatedTime() const
{
    return createdTime_;
}

void AssociatedTestCase::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool AssociatedTestCase::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void AssociatedTestCase::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

}
}
}
}
}


