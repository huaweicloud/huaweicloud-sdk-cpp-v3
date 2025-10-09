

#include "huaweicloud/cce/v3/model/GetClusterSupportConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterSupportConfigurationResponse::GetClusterSupportConfigurationResponse()
{
    bodyIsSet_ = false;
}

GetClusterSupportConfigurationResponse::~GetClusterSupportConfigurationResponse() = default;

void GetClusterSupportConfigurationResponse::validate()
{
}

web::json::value GetClusterSupportConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool GetClusterSupportConfigurationResponse::fromJson(const web::json::value& val)
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


std::map<std::string, std::vector<PackageOptions>>& GetClusterSupportConfigurationResponse::getBody()
{
    return body_;
}

void GetClusterSupportConfigurationResponse::setBody(const std::map<std::string, std::vector<PackageOptions>>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GetClusterSupportConfigurationResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void GetClusterSupportConfigurationResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


