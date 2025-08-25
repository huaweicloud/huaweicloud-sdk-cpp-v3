

#include "huaweicloud/cce/v3/model/ShowNodePoolConfigurationDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodePoolConfigurationDetailsResponse::ShowNodePoolConfigurationDetailsResponse()
{
    bodyIsSet_ = false;
}

ShowNodePoolConfigurationDetailsResponse::~ShowNodePoolConfigurationDetailsResponse() = default;

void ShowNodePoolConfigurationDetailsResponse::validate()
{
}

web::json::value ShowNodePoolConfigurationDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowNodePoolConfigurationDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<PackageOptions>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::vector<PackageOptions>>& ShowNodePoolConfigurationDetailsResponse::getBody()
{
    return body_;
}

void ShowNodePoolConfigurationDetailsResponse::setBody(const std::map<std::string, std::vector<PackageOptions>>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowNodePoolConfigurationDetailsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowNodePoolConfigurationDetailsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


