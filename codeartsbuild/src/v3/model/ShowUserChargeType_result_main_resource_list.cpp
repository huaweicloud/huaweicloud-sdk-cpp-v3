

#include "huaweicloud/codeartsbuild/v3/model/ShowUserChargeType_result_main_resource_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowUserChargeType_result_main_resource_list::ShowUserChargeType_result_main_resource_list()
{
    status_ = "";
    statusIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
}

ShowUserChargeType_result_main_resource_list::~ShowUserChargeType_result_main_resource_list() = default;

void ShowUserChargeType_result_main_resource_list::validate()
{
}

web::json::value ShowUserChargeType_result_main_resource_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }

    return val;
}
bool ShowUserChargeType_result_main_resource_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    return ok;
}


std::string ShowUserChargeType_result_main_resource_list::getStatus() const
{
    return status_;
}

void ShowUserChargeType_result_main_resource_list::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUserChargeType_result_main_resource_list::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUserChargeType_result_main_resource_list::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowUserChargeType_result_main_resource_list::getServiceType() const
{
    return serviceType_;
}

void ShowUserChargeType_result_main_resource_list::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ShowUserChargeType_result_main_resource_list::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ShowUserChargeType_result_main_resource_list::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ShowUserChargeType_result_main_resource_list::getResourceType() const
{
    return resourceType_;
}

void ShowUserChargeType_result_main_resource_list::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowUserChargeType_result_main_resource_list::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowUserChargeType_result_main_resource_list::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowUserChargeType_result_main_resource_list::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void ShowUserChargeType_result_main_resource_list::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool ShowUserChargeType_result_main_resource_list::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void ShowUserChargeType_result_main_resource_list::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

}
}
}
}
}


