

#include "huaweicloud/metastudio/v1/model/DeleteInteractionRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteInteractionRuleResponse::DeleteInteractionRuleResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteInteractionRuleResponse::~DeleteInteractionRuleResponse() = default;

void DeleteInteractionRuleResponse::validate()
{
}

web::json::value DeleteInteractionRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteInteractionRuleResponse::fromJson(const web::json::value& val)
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


std::string DeleteInteractionRuleResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteInteractionRuleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteInteractionRuleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteInteractionRuleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


