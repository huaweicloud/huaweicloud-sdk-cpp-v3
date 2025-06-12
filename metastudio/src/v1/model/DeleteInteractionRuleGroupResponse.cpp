

#include "huaweicloud/metastudio/v1/model/DeleteInteractionRuleGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteInteractionRuleGroupResponse::DeleteInteractionRuleGroupResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteInteractionRuleGroupResponse::~DeleteInteractionRuleGroupResponse() = default;

void DeleteInteractionRuleGroupResponse::validate()
{
}

web::json::value DeleteInteractionRuleGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteInteractionRuleGroupResponse::fromJson(const web::json::value& val)
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


std::string DeleteInteractionRuleGroupResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteInteractionRuleGroupResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteInteractionRuleGroupResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteInteractionRuleGroupResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


