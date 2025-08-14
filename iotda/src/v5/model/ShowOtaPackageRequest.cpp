

#include "huaweicloud/iotda/v5/model/ShowOtaPackageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowOtaPackageRequest::ShowOtaPackageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
}

ShowOtaPackageRequest::~ShowOtaPackageRequest() = default;

void ShowOtaPackageRequest::validate()
{
}

web::json::value ShowOtaPackageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }

    return val;
}
bool ShowOtaPackageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    return ok;
}


std::string ShowOtaPackageRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowOtaPackageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowOtaPackageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowOtaPackageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowOtaPackageRequest::getPackageId() const
{
    return packageId_;
}

void ShowOtaPackageRequest::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool ShowOtaPackageRequest::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void ShowOtaPackageRequest::unsetpackageId()
{
    packageIdIsSet_ = false;
}

}
}
}
}
}


