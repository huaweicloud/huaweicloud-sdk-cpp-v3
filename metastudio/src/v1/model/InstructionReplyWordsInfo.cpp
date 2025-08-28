

#include "huaweicloud/metastudio/v1/model/InstructionReplyWordsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InstructionReplyWordsInfo::InstructionReplyWordsInfo()
{
    languageIsSet_ = false;
    replyWords_ = "";
    replyWordsIsSet_ = false;
}

InstructionReplyWordsInfo::~InstructionReplyWordsInfo() = default;

void InstructionReplyWordsInfo::validate()
{
}

web::json::value InstructionReplyWordsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(replyWordsIsSet_) {
        val[utility::conversions::to_string_t("reply_words")] = ModelBase::toJson(replyWords_);
    }

    return val;
}
bool InstructionReplyWordsInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("reply_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reply_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplyWords(refVal);
        }
    }
    return ok;
}


LanguageEnum InstructionReplyWordsInfo::getLanguage() const
{
    return language_;
}

void InstructionReplyWordsInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool InstructionReplyWordsInfo::languageIsSet() const
{
    return languageIsSet_;
}

void InstructionReplyWordsInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string InstructionReplyWordsInfo::getReplyWords() const
{
    return replyWords_;
}

void InstructionReplyWordsInfo::setReplyWords(const std::string& value)
{
    replyWords_ = value;
    replyWordsIsSet_ = true;
}

bool InstructionReplyWordsInfo::replyWordsIsSet() const
{
    return replyWordsIsSet_;
}

void InstructionReplyWordsInfo::unsetreplyWords()
{
    replyWordsIsSet_ = false;
}

}
}
}
}
}


