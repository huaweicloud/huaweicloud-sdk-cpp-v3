

#include "huaweicloud/sis/v1/model/CreateVocabularyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




CreateVocabularyRequest::CreateVocabularyRequest()
{
    bodyIsSet_ = false;
}

CreateVocabularyRequest::~CreateVocabularyRequest() = default;

void CreateVocabularyRequest::validate()
{
}

web::json::value CreateVocabularyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateVocabularyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostCreateVocabReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PostCreateVocabReq CreateVocabularyRequest::getBody() const
{
    return body_;
}

void CreateVocabularyRequest::setBody(const PostCreateVocabReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVocabularyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVocabularyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


