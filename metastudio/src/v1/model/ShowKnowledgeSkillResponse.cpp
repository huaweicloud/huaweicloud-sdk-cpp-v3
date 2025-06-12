

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeSkillResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeSkillResponse::ShowKnowledgeSkillResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowKnowledgeSkillResponse::~ShowKnowledgeSkillResponse() = default;

void ShowKnowledgeSkillResponse::validate()
{
}

web::json::value ShowKnowledgeSkillResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowKnowledgeSkillResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowKnowledgeSkillResponse::getSkillId() const
{
    return skillId_;
}

void ShowKnowledgeSkillResponse::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool ShowKnowledgeSkillResponse::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void ShowKnowledgeSkillResponse::unsetskillId()
{
    skillIdIsSet_ = false;
}

std::string ShowKnowledgeSkillResponse::getName() const
{
    return name_;
}

void ShowKnowledgeSkillResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowKnowledgeSkillResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowKnowledgeSkillResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowKnowledgeSkillResponse::getIdentify() const
{
    return identify_;
}

void ShowKnowledgeSkillResponse::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool ShowKnowledgeSkillResponse::identifyIsSet() const
{
    return identifyIsSet_;
}

void ShowKnowledgeSkillResponse::unsetidentify()
{
    identifyIsSet_ = false;
}

std::string ShowKnowledgeSkillResponse::getCreateTime() const
{
    return createTime_;
}

void ShowKnowledgeSkillResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowKnowledgeSkillResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowKnowledgeSkillResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowKnowledgeSkillResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowKnowledgeSkillResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowKnowledgeSkillResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowKnowledgeSkillResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowKnowledgeSkillResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowKnowledgeSkillResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowKnowledgeSkillResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowKnowledgeSkillResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


