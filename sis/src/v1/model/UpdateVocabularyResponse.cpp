

#include "huaweicloud/sis/v1/model/UpdateVocabularyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




UpdateVocabularyResponse::UpdateVocabularyResponse()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
}

UpdateVocabularyResponse::~UpdateVocabularyResponse() = default;

void UpdateVocabularyResponse::validate()
{
}

web::json::value UpdateVocabularyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }

    return val;
}
bool UpdateVocabularyResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdateVocabularyResponse::getVocabularyId() const
{
    return vocabularyId_;
}

void UpdateVocabularyResponse::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool UpdateVocabularyResponse::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void UpdateVocabularyResponse::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

}
}
}
}
}


