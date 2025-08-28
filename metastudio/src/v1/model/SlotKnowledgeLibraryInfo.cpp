

#include "huaweicloud/metastudio/v1/model/SlotKnowledgeLibraryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SlotKnowledgeLibraryInfo::SlotKnowledgeLibraryInfo()
{
    languageIsSet_ = false;
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
}

SlotKnowledgeLibraryInfo::~SlotKnowledgeLibraryInfo() = default;

void SlotKnowledgeLibraryInfo::validate()
{
}

web::json::value SlotKnowledgeLibraryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }

    return val;
}
bool SlotKnowledgeLibraryInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
        }
    }
    return ok;
}


LanguageEnum SlotKnowledgeLibraryInfo::getLanguage() const
{
    return language_;
}

void SlotKnowledgeLibraryInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool SlotKnowledgeLibraryInfo::languageIsSet() const
{
    return languageIsSet_;
}

void SlotKnowledgeLibraryInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string SlotKnowledgeLibraryInfo::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void SlotKnowledgeLibraryInfo::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool SlotKnowledgeLibraryInfo::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void SlotKnowledgeLibraryInfo::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

}
}
}
}
}


