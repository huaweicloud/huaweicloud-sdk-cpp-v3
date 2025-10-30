

#include "huaweicloud/live/v1/model/DeleteWatermarkRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteWatermarkRuleResponse::DeleteWatermarkRuleResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteWatermarkRuleResponse::~DeleteWatermarkRuleResponse() = default;

void DeleteWatermarkRuleResponse::validate()
{
}

web::json::value DeleteWatermarkRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteWatermarkRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DeleteWatermarkRuleResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteWatermarkRuleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteWatermarkRuleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteWatermarkRuleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


