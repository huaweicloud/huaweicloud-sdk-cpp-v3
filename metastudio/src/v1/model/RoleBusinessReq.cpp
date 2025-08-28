

#include "huaweicloud/metastudio/v1/model/RoleBusinessReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RoleBusinessReq::RoleBusinessReq()
{
    languageIsSet_ = false;
    prompt_ = "";
    promptIsSet_ = false;
    knowledgeLibraryListIsSet_ = false;
}

RoleBusinessReq::~RoleBusinessReq() = default;

void RoleBusinessReq::validate()
{
}

web::json::value RoleBusinessReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(promptIsSet_) {
        val[utility::conversions::to_string_t("prompt")] = ModelBase::toJson(prompt_);
    }
    if(knowledgeLibraryListIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_list")] = ModelBase::toJson(knowledgeLibraryList_);
    }

    return val;
}
bool RoleBusinessReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prompt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prompt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrompt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RoleKnowledgeLibraryReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryList(refVal);
        }
    }
    return ok;
}


LanguageEnum RoleBusinessReq::getLanguage() const
{
    return language_;
}

void RoleBusinessReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RoleBusinessReq::languageIsSet() const
{
    return languageIsSet_;
}

void RoleBusinessReq::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string RoleBusinessReq::getPrompt() const
{
    return prompt_;
}

void RoleBusinessReq::setPrompt(const std::string& value)
{
    prompt_ = value;
    promptIsSet_ = true;
}

bool RoleBusinessReq::promptIsSet() const
{
    return promptIsSet_;
}

void RoleBusinessReq::unsetprompt()
{
    promptIsSet_ = false;
}

std::vector<RoleKnowledgeLibraryReq>& RoleBusinessReq::getKnowledgeLibraryList()
{
    return knowledgeLibraryList_;
}

void RoleBusinessReq::setKnowledgeLibraryList(const std::vector<RoleKnowledgeLibraryReq>& value)
{
    knowledgeLibraryList_ = value;
    knowledgeLibraryListIsSet_ = true;
}

bool RoleBusinessReq::knowledgeLibraryListIsSet() const
{
    return knowledgeLibraryListIsSet_;
}

void RoleBusinessReq::unsetknowledgeLibraryList()
{
    knowledgeLibraryListIsSet_ = false;
}

}
}
}
}
}


