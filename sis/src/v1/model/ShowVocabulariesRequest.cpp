

#include "huaweicloud/sis/v1/model/ShowVocabulariesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ShowVocabulariesRequest::ShowVocabulariesRequest()
{
    bodyIsSet_ = false;
}

ShowVocabulariesRequest::~ShowVocabulariesRequest() = default;

void ShowVocabulariesRequest::validate()
{
}

web::json::value ShowVocabulariesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowVocabulariesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ShowVocabulariesParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ShowVocabulariesParams ShowVocabulariesRequest::getBody() const
{
    return body_;
}

void ShowVocabulariesRequest::setBody(const ShowVocabulariesParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowVocabulariesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowVocabulariesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


