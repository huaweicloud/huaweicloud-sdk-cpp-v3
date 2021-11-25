

#include "huaweicloud/sis/v1/model/UpdateVocabularyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




UpdateVocabularyRequest::UpdateVocabularyRequest()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVocabularyRequest::~UpdateVocabularyRequest() = default;

void UpdateVocabularyRequest::validate()
{
}

web::json::value UpdateVocabularyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateVocabularyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PutUpdateVocabReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVocabularyRequest::getVocabularyId() const
{
    return vocabularyId_;
}

void UpdateVocabularyRequest::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool UpdateVocabularyRequest::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void UpdateVocabularyRequest::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

PutUpdateVocabReq UpdateVocabularyRequest::getBody() const
{
    return body_;
}

void UpdateVocabularyRequest::setBody(const PutUpdateVocabReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVocabularyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVocabularyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


