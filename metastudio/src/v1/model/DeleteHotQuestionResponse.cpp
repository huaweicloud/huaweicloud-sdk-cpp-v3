

#include "huaweicloud/metastudio/v1/model/DeleteHotQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteHotQuestionResponse::DeleteHotQuestionResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteHotQuestionResponse::~DeleteHotQuestionResponse() = default;

void DeleteHotQuestionResponse::validate()
{
}

web::json::value DeleteHotQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteHotQuestionResponse::fromJson(const web::json::value& val)
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


std::string DeleteHotQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteHotQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteHotQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteHotQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


