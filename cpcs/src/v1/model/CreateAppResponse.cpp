

#include "huaweicloud/cpcs/v1/model/CreateAppResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateAppResponse::CreateAppResponse()
{
    appId_ = "";
    appIdIsSet_ = false;
}

CreateAppResponse::~CreateAppResponse() = default;

void CreateAppResponse::validate()
{
}

web::json::value CreateAppResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool CreateAppResponse::fromJson(const web::json::value& val)
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


std::string CreateAppResponse::getAppId() const
{
    return appId_;
}

void CreateAppResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateAppResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateAppResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


