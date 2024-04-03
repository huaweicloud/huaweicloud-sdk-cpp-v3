

#include "huaweicloud/ecs/v2/model/NovaShowVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowVersionRequest::NovaShowVersionRequest()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
}

NovaShowVersionRequest::~NovaShowVersionRequest() = default;

void NovaShowVersionRequest::validate()
{
}

web::json::value NovaShowVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }

    return val;
}
bool NovaShowVersionRequest::fromJson(const web::json::value& val)
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


std::string NovaShowVersionRequest::getApiVersion() const
{
    return apiVersion_;
}

void NovaShowVersionRequest::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool NovaShowVersionRequest::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void NovaShowVersionRequest::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

}
}
}
}
}


