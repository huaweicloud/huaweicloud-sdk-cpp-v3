

#include "huaweicloud/sis/v1/model/DeleteVocabularyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




DeleteVocabularyResponse::DeleteVocabularyResponse()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

DeleteVocabularyResponse::~DeleteVocabularyResponse() = default;

void DeleteVocabularyResponse::validate()
{
}

web::json::value DeleteVocabularyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool DeleteVocabularyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string DeleteVocabularyResponse::getVocabularyId() const
{
    return vocabularyId_;
}

void DeleteVocabularyResponse::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool DeleteVocabularyResponse::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void DeleteVocabularyResponse::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string DeleteVocabularyResponse::getMessage() const
{
    return message_;
}

void DeleteVocabularyResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteVocabularyResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteVocabularyResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


