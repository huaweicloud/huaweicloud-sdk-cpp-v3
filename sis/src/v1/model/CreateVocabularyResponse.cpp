

#include "huaweicloud/sis/v1/model/CreateVocabularyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




CreateVocabularyResponse::CreateVocabularyResponse()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
}

CreateVocabularyResponse::~CreateVocabularyResponse() = default;

void CreateVocabularyResponse::validate()
{
}

web::json::value CreateVocabularyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }

    return val;
}

bool CreateVocabularyResponse::fromJson(const web::json::value& val)
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

std::string CreateVocabularyResponse::getVocabularyId() const
{
    return vocabularyId_;
}

void CreateVocabularyResponse::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool CreateVocabularyResponse::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void CreateVocabularyResponse::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

}
}
}
}
}


