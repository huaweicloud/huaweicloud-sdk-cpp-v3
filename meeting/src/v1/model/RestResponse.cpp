

#include "huaweicloud/meeting/v1/model/RestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestResponse::RestResponse()
{
    returnCode_ = 0;
    returnCodeIsSet_ = false;
    returnDesc_ = "";
    returnDescIsSet_ = false;
}

RestResponse::~RestResponse() = default;

void RestResponse::validate()
{
}

web::json::value RestResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(returnCodeIsSet_) {
        val[utility::conversions::to_string_t("returnCode")] = ModelBase::toJson(returnCode_);
    }
    if(returnDescIsSet_) {
        val[utility::conversions::to_string_t("returnDesc")] = ModelBase::toJson(returnDesc_);
    }

    return val;
}
bool RestResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("returnCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("returnDesc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnDesc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnDesc(refVal);
        }
    }
    return ok;
}


int32_t RestResponse::getReturnCode() const
{
    return returnCode_;
}

void RestResponse::setReturnCode(int32_t value)
{
    returnCode_ = value;
    returnCodeIsSet_ = true;
}

bool RestResponse::returnCodeIsSet() const
{
    return returnCodeIsSet_;
}

void RestResponse::unsetreturnCode()
{
    returnCodeIsSet_ = false;
}

std::string RestResponse::getReturnDesc() const
{
    return returnDesc_;
}

void RestResponse::setReturnDesc(const std::string& value)
{
    returnDesc_ = value;
    returnDescIsSet_ = true;
}

bool RestResponse::returnDescIsSet() const
{
    return returnDescIsSet_;
}

void RestResponse::unsetreturnDesc()
{
    returnDescIsSet_ = false;
}

}
}
}
}
}


