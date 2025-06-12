

#include "huaweicloud/metastudio/v1/model/Delete2dModelTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Delete2dModelTrainingJobResponse::Delete2dModelTrainingJobResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

Delete2dModelTrainingJobResponse::~Delete2dModelTrainingJobResponse() = default;

void Delete2dModelTrainingJobResponse::validate()
{
}

web::json::value Delete2dModelTrainingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool Delete2dModelTrainingJobResponse::fromJson(const web::json::value& val)
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


std::string Delete2dModelTrainingJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void Delete2dModelTrainingJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool Delete2dModelTrainingJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void Delete2dModelTrainingJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


