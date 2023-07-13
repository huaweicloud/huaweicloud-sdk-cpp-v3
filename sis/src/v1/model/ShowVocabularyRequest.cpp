

#include "huaweicloud/sis/v1/model/ShowVocabularyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ShowVocabularyRequest::ShowVocabularyRequest()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
}

ShowVocabularyRequest::~ShowVocabularyRequest() = default;

void ShowVocabularyRequest::validate()
{
}

web::json::value ShowVocabularyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }

    return val;
}

bool ShowVocabularyRequest::fromJson(const web::json::value& val)
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

std::string ShowVocabularyRequest::getVocabularyId() const
{
    return vocabularyId_;
}

void ShowVocabularyRequest::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool ShowVocabularyRequest::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void ShowVocabularyRequest::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

}
}
}
}
}


