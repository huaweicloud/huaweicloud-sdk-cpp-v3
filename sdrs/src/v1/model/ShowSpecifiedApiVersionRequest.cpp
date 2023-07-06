

#include "huaweicloud/sdrs/v1/model/ShowSpecifiedApiVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowSpecifiedApiVersionRequest::ShowSpecifiedApiVersionRequest()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
}

ShowSpecifiedApiVersionRequest::~ShowSpecifiedApiVersionRequest() = default;

void ShowSpecifiedApiVersionRequest::validate()
{
}

web::json::value ShowSpecifiedApiVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }

    return val;
}

bool ShowSpecifiedApiVersionRequest::fromJson(const web::json::value& val)
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

std::string ShowSpecifiedApiVersionRequest::getApiVersion() const
{
    return apiVersion_;
}

void ShowSpecifiedApiVersionRequest::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowSpecifiedApiVersionRequest::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowSpecifiedApiVersionRequest::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

}
}
}
}
}


