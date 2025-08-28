

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeLibraryReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeLibraryReq::CreateKnowledgeLibraryReq()
{
    name_ = "";
    nameIsSet_ = false;
    languageIsSet_ = false;
    knowledgeTypeIsSet_ = false;
    topk_ = 0;
    topkIsSet_ = false;
    score_ = 0.0;
    scoreIsSet_ = false;
}

CreateKnowledgeLibraryReq::~CreateKnowledgeLibraryReq() = default;

void CreateKnowledgeLibraryReq::validate()
{
}

web::json::value CreateKnowledgeLibraryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(knowledgeTypeIsSet_) {
        val[utility::conversions::to_string_t("knowledge_type")] = ModelBase::toJson(knowledgeType_);
    }
    if(topkIsSet_) {
        val[utility::conversions::to_string_t("topk")] = ModelBase::toJson(topk_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }

    return val;
}
bool CreateKnowledgeLibraryReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_type"));
        if(!fieldValue.is_null())
        {
            KnowledgeTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeLibraryReq::getName() const
{
    return name_;
}

void CreateKnowledgeLibraryReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateKnowledgeLibraryReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateKnowledgeLibraryReq::unsetname()
{
    nameIsSet_ = false;
}

LanguageEnum CreateKnowledgeLibraryReq::getLanguage() const
{
    return language_;
}

void CreateKnowledgeLibraryReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateKnowledgeLibraryReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateKnowledgeLibraryReq::unsetlanguage()
{
    languageIsSet_ = false;
}

KnowledgeTypeEnum CreateKnowledgeLibraryReq::getKnowledgeType() const
{
    return knowledgeType_;
}

void CreateKnowledgeLibraryReq::setKnowledgeType(const KnowledgeTypeEnum& value)
{
    knowledgeType_ = value;
    knowledgeTypeIsSet_ = true;
}

bool CreateKnowledgeLibraryReq::knowledgeTypeIsSet() const
{
    return knowledgeTypeIsSet_;
}

void CreateKnowledgeLibraryReq::unsetknowledgeType()
{
    knowledgeTypeIsSet_ = false;
}

int32_t CreateKnowledgeLibraryReq::getTopk() const
{
    return topk_;
}

void CreateKnowledgeLibraryReq::setTopk(int32_t value)
{
    topk_ = value;
    topkIsSet_ = true;
}

bool CreateKnowledgeLibraryReq::topkIsSet() const
{
    return topkIsSet_;
}

void CreateKnowledgeLibraryReq::unsettopk()
{
    topkIsSet_ = false;
}

double CreateKnowledgeLibraryReq::getScore() const
{
    return score_;
}

void CreateKnowledgeLibraryReq::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool CreateKnowledgeLibraryReq::scoreIsSet() const
{
    return scoreIsSet_;
}

void CreateKnowledgeLibraryReq::unsetscore()
{
    scoreIsSet_ = false;
}

}
}
}
}
}


