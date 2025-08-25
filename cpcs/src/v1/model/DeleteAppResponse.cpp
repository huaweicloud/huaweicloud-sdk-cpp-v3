

#include "huaweicloud/cpcs/v1/model/DeleteAppResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteAppResponse::DeleteAppResponse()
{
    appId_ = "";
    appIdIsSet_ = false;
}

DeleteAppResponse::~DeleteAppResponse() = default;

void DeleteAppResponse::validate()
{
}

web::json::value DeleteAppResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool DeleteAppResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string DeleteAppResponse::getAppId() const
{
    return appId_;
}

void DeleteAppResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeleteAppResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeleteAppResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


