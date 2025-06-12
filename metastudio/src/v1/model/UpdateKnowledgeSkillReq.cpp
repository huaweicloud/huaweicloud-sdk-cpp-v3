

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeSkillReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeSkillReq::UpdateKnowledgeSkillReq()
{
    name_ = "";
    nameIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
}

UpdateKnowledgeSkillReq::~UpdateKnowledgeSkillReq() = default;

void UpdateKnowledgeSkillReq::validate()
{
}

web::json::value UpdateKnowledgeSkillReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(identifyIsSet_) {
        val[utility::conversions::to_string_t("identify")] = ModelBase::toJson(identify_);
    }

    return val;
}
bool UpdateKnowledgeSkillReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string UpdateKnowledgeSkillReq::getName() const
{
    return name_;
}

void UpdateKnowledgeSkillReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateKnowledgeSkillReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateKnowledgeSkillReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateKnowledgeSkillReq::getIdentify() const
{
    return identify_;
}

void UpdateKnowledgeSkillReq::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool UpdateKnowledgeSkillReq::identifyIsSet() const
{
    return identifyIsSet_;
}

void UpdateKnowledgeSkillReq::unsetidentify()
{
    identifyIsSet_ = false;
}

}
}
}
}
}


