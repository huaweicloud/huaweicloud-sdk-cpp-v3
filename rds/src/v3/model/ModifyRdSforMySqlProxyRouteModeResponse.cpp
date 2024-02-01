

#include "huaweicloud/rds/v3/model/ModifyRdSforMySqlProxyRouteModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyRdSforMySqlProxyRouteModeResponse::ModifyRdSforMySqlProxyRouteModeResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ModifyRdSforMySqlProxyRouteModeResponse::~ModifyRdSforMySqlProxyRouteModeResponse() = default;

void ModifyRdSforMySqlProxyRouteModeResponse::validate()
{
}

web::json::value ModifyRdSforMySqlProxyRouteModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ModifyRdSforMySqlProxyRouteModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ModifyRdSforMySqlProxyRouteModeResponse::getResult() const
{
    return result_;
}

void ModifyRdSforMySqlProxyRouteModeResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ModifyRdSforMySqlProxyRouteModeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ModifyRdSforMySqlProxyRouteModeResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


