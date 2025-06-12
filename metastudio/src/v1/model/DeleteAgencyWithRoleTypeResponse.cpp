

#include "huaweicloud/metastudio/v1/model/DeleteAgencyWithRoleTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAgencyWithRoleTypeResponse::DeleteAgencyWithRoleTypeResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteAgencyWithRoleTypeResponse::~DeleteAgencyWithRoleTypeResponse() = default;

void DeleteAgencyWithRoleTypeResponse::validate()
{
}

web::json::value DeleteAgencyWithRoleTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteAgencyWithRoleTypeResponse::fromJson(const web::json::value& val)
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


std::string DeleteAgencyWithRoleTypeResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteAgencyWithRoleTypeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteAgencyWithRoleTypeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteAgencyWithRoleTypeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


