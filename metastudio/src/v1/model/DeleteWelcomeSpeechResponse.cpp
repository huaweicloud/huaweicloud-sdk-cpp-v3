

#include "huaweicloud/metastudio/v1/model/DeleteWelcomeSpeechResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteWelcomeSpeechResponse::DeleteWelcomeSpeechResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteWelcomeSpeechResponse::~DeleteWelcomeSpeechResponse() = default;

void DeleteWelcomeSpeechResponse::validate()
{
}

web::json::value DeleteWelcomeSpeechResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteWelcomeSpeechResponse::fromJson(const web::json::value& val)
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


std::string DeleteWelcomeSpeechResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteWelcomeSpeechResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteWelcomeSpeechResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteWelcomeSpeechResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


