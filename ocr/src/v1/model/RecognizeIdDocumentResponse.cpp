

#include "huaweicloud/ocr/v1/model/RecognizeIdDocumentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeIdDocumentResponse::RecognizeIdDocumentResponse()
{
    resultIsSet_ = false;
}

RecognizeIdDocumentResponse::~RecognizeIdDocumentResponse() = default;

void RecognizeIdDocumentResponse::validate()
{
}

web::json::value RecognizeIdDocumentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeIdDocumentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            IdDocumentItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


IdDocumentItem RecognizeIdDocumentResponse::getResult() const
{
    return result_;
}

void RecognizeIdDocumentResponse::setResult(const IdDocumentItem& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeIdDocumentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeIdDocumentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


