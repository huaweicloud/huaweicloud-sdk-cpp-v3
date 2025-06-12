

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeSkillReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeSkillReq::CreateKnowledgeSkillReq()
{
    name_ = "";
    nameIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
}

CreateKnowledgeSkillReq::~CreateKnowledgeSkillReq() = default;

void CreateKnowledgeSkillReq::validate()
{
}

web::json::value CreateKnowledgeSkillReq::toJson() const
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
bool CreateKnowledgeSkillReq::fromJson(const web::json::value& val)
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


std::string CreateKnowledgeSkillReq::getName() const
{
    return name_;
}

void CreateKnowledgeSkillReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateKnowledgeSkillReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateKnowledgeSkillReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateKnowledgeSkillReq::getIdentify() const
{
    return identify_;
}

void CreateKnowledgeSkillReq::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool CreateKnowledgeSkillReq::identifyIsSet() const
{
    return identifyIsSet_;
}

void CreateKnowledgeSkillReq::unsetidentify()
{
    identifyIsSet_ = false;
}

}
}
}
}
}


