

#include "huaweicloud/codeartsdeploy/v2/model/ShowAppDetailByIdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowAppDetailByIdRequest::ShowAppDetailByIdRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
}

ShowAppDetailByIdRequest::~ShowAppDetailByIdRequest() = default;

void ShowAppDetailByIdRequest::validate()
{
}

web::json::value ShowAppDetailByIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}

bool ShowAppDetailByIdRequest::fromJson(const web::json::value& val)
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

std::string ShowAppDetailByIdRequest::getAppId() const
{
    return appId_;
}

void ShowAppDetailByIdRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowAppDetailByIdRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowAppDetailByIdRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


