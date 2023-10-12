

#include "huaweicloud/sis/v1/model/DeleteVocabularyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




DeleteVocabularyRequest::DeleteVocabularyRequest()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
}

DeleteVocabularyRequest::~DeleteVocabularyRequest() = default;

void DeleteVocabularyRequest::validate()
{
}

web::json::value DeleteVocabularyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }

    return val;
}
bool DeleteVocabularyRequest::fromJson(const web::json::value& val)
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


std::string DeleteVocabularyRequest::getVocabularyId() const
{
    return vocabularyId_;
}

void DeleteVocabularyRequest::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool DeleteVocabularyRequest::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void DeleteVocabularyRequest::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

}
}
}
}
}


