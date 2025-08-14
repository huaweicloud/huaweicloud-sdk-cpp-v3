

#include "huaweicloud/iotda/v5/model/DeleteOtaPackageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteOtaPackageRequest::DeleteOtaPackageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
}

DeleteOtaPackageRequest::~DeleteOtaPackageRequest() = default;

void DeleteOtaPackageRequest::validate()
{
}

web::json::value DeleteOtaPackageRequest::toJson() const
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
bool DeleteOtaPackageRequest::fromJson(const web::json::value& val)
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


std::string DeleteOtaPackageRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteOtaPackageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteOtaPackageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteOtaPackageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteOtaPackageRequest::getPackageId() const
{
    return packageId_;
}

void DeleteOtaPackageRequest::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool DeleteOtaPackageRequest::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void DeleteOtaPackageRequest::unsetpackageId()
{
    packageIdIsSet_ = false;
}

}
}
}
}
}


