

#include "huaweicloud/codeartsdeploy/v2/model/CopyApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CopyApplicationRequest::CopyApplicationRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
}

CopyApplicationRequest::~CopyApplicationRequest() = default;

void CopyApplicationRequest::validate()
{
}

web::json::value CopyApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool CopyApplicationRequest::fromJson(const web::json::value& val)
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


std::string CopyApplicationRequest::getAppId() const
{
    return appId_;
}

void CopyApplicationRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CopyApplicationRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void CopyApplicationRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


