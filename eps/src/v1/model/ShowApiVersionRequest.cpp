

#include "huaweicloud/eps/v1/model/ShowApiVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowApiVersionRequest::ShowApiVersionRequest()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
}

ShowApiVersionRequest::~ShowApiVersionRequest() = default;

void ShowApiVersionRequest::validate()
{
}

web::json::value ShowApiVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }

    return val;
}

bool ShowApiVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("api_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    return ok;
}


std::string ShowApiVersionRequest::getApiVersion() const
{
    return apiVersion_;
}

void ShowApiVersionRequest::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowApiVersionRequest::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowApiVersionRequest::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

}
}
}
}
}


