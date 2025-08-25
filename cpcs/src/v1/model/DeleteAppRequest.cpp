

#include "huaweicloud/cpcs/v1/model/DeleteAppRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteAppRequest::DeleteAppRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
}

DeleteAppRequest::~DeleteAppRequest() = default;

void DeleteAppRequest::validate()
{
}

web::json::value DeleteAppRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool DeleteAppRequest::fromJson(const web::json::value& val)
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


std::string DeleteAppRequest::getAppId() const
{
    return appId_;
}

void DeleteAppRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeleteAppRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeleteAppRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


