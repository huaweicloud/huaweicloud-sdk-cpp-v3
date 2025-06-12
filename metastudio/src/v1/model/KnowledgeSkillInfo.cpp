

#include "huaweicloud/metastudio/v1/model/KnowledgeSkillInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




KnowledgeSkillInfo::KnowledgeSkillInfo()
{
    skillId_ = "";
    skillIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

KnowledgeSkillInfo::~KnowledgeSkillInfo() = default;

void KnowledgeSkillInfo::validate()
{
}

web::json::value KnowledgeSkillInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(skillIdIsSet_) {
        val[utility::conversions::to_string_t("skill_id")] = ModelBase::toJson(skillId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(identifyIsSet_) {
        val[utility::conversions::to_string_t("identify")] = ModelBase::toJson(identify_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool KnowledgeSkillInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("skill_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skill_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkillId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string KnowledgeSkillInfo::getSkillId() const
{
    return skillId_;
}

void KnowledgeSkillInfo::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool KnowledgeSkillInfo::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void KnowledgeSkillInfo::unsetskillId()
{
    skillIdIsSet_ = false;
}

std::string KnowledgeSkillInfo::getName() const
{
    return name_;
}

void KnowledgeSkillInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool KnowledgeSkillInfo::nameIsSet() const
{
    return nameIsSet_;
}

void KnowledgeSkillInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string KnowledgeSkillInfo::getIdentify() const
{
    return identify_;
}

void KnowledgeSkillInfo::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool KnowledgeSkillInfo::identifyIsSet() const
{
    return identifyIsSet_;
}

void KnowledgeSkillInfo::unsetidentify()
{
    identifyIsSet_ = false;
}

std::string KnowledgeSkillInfo::getCreateTime() const
{
    return createTime_;
}

void KnowledgeSkillInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool KnowledgeSkillInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void KnowledgeSkillInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string KnowledgeSkillInfo::getUpdateTime() const
{
    return updateTime_;
}

void KnowledgeSkillInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool KnowledgeSkillInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void KnowledgeSkillInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


