

#include "huaweicloud/identitycenter/v1/model/GetIdentityCenterServiceStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetIdentityCenterServiceStatusResponse::GetIdentityCenterServiceStatusResponse()
{
    serviceStatus_ = "";
    serviceStatusIsSet_ = false;
    serviceStatusReasonsIsSet_ = false;
}

GetIdentityCenterServiceStatusResponse::~GetIdentityCenterServiceStatusResponse() = default;

void GetIdentityCenterServiceStatusResponse::validate()
{
}

web::json::value GetIdentityCenterServiceStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceStatusIsSet_) {
        val[utility::conversions::to_string_t("serviceStatus")] = ModelBase::toJson(serviceStatus_);
    }
    if(serviceStatusReasonsIsSet_) {
        val[utility::conversions::to_string_t("serviceStatusReasons")] = ModelBase::toJson(serviceStatusReasons_);
    }

    return val;
}
bool GetIdentityCenterServiceStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serviceStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceStatusReasons"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceStatusReasons"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceStatusReasons(refVal);
        }
    }
    return ok;
}


std::string GetIdentityCenterServiceStatusResponse::getServiceStatus() const
{
    return serviceStatus_;
}

void GetIdentityCenterServiceStatusResponse::setServiceStatus(const std::string& value)
{
    serviceStatus_ = value;
    serviceStatusIsSet_ = true;
}

bool GetIdentityCenterServiceStatusResponse::serviceStatusIsSet() const
{
    return serviceStatusIsSet_;
}

void GetIdentityCenterServiceStatusResponse::unsetserviceStatus()
{
    serviceStatusIsSet_ = false;
}

std::vector<std::string>& GetIdentityCenterServiceStatusResponse::getServiceStatusReasons()
{
    return serviceStatusReasons_;
}

void GetIdentityCenterServiceStatusResponse::setServiceStatusReasons(const std::vector<std::string>& value)
{
    serviceStatusReasons_ = value;
    serviceStatusReasonsIsSet_ = true;
}

bool GetIdentityCenterServiceStatusResponse::serviceStatusReasonsIsSet() const
{
    return serviceStatusReasonsIsSet_;
}

void GetIdentityCenterServiceStatusResponse::unsetserviceStatusReasons()
{
    serviceStatusReasonsIsSet_ = false;
}

}
}
}
}
}


