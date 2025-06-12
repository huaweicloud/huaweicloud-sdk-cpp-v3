

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeSkillResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeSkillResponse::CreateKnowledgeSkillResponse()
{
    skillId_ = "";
    skillIdIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateKnowledgeSkillResponse::~CreateKnowledgeSkillResponse() = default;

void CreateKnowledgeSkillResponse::validate()
{
}

web::json::value CreateKnowledgeSkillResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(skillIdIsSet_) {
        val[utility::conversions::to_string_t("skill_id")] = ModelBase::toJson(skillId_);
    }
    if(identifyIsSet_) {
        val[utility::conversions::to_string_t("identify")] = ModelBase::toJson(identify_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateKnowledgeSkillResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("identify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentify(refVal);
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


std::string CreateKnowledgeSkillResponse::getSkillId() const
{
    return skillId_;
}

void CreateKnowledgeSkillResponse::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool CreateKnowledgeSkillResponse::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void CreateKnowledgeSkillResponse::unsetskillId()
{
    skillIdIsSet_ = false;
}

std::string CreateKnowledgeSkillResponse::getIdentify() const
{
    return identify_;
}

void CreateKnowledgeSkillResponse::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool CreateKnowledgeSkillResponse::identifyIsSet() const
{
    return identifyIsSet_;
}

void CreateKnowledgeSkillResponse::unsetidentify()
{
    identifyIsSet_ = false;
}

std::string CreateKnowledgeSkillResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateKnowledgeSkillResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateKnowledgeSkillResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateKnowledgeSkillResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


