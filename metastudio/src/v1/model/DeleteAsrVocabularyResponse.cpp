

#include "huaweicloud/metastudio/v1/model/DeleteAsrVocabularyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAsrVocabularyResponse::DeleteAsrVocabularyResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteAsrVocabularyResponse::~DeleteAsrVocabularyResponse() = default;

void DeleteAsrVocabularyResponse::validate()
{
}

web::json::value DeleteAsrVocabularyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteAsrVocabularyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DeleteAsrVocabularyResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteAsrVocabularyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteAsrVocabularyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteAsrVocabularyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


