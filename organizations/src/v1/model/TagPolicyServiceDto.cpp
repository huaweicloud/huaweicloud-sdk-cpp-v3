

#include "huaweicloud/organizations/v1/model/TagPolicyServiceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TagPolicyServiceDto::TagPolicyServiceDto()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
    resourceTypesIsSet_ = false;
    supportAll_ = false;
    supportAllIsSet_ = false;
}

TagPolicyServiceDto::~TagPolicyServiceDto() = default;

void TagPolicyServiceDto::validate()
{
}

web::json::value TagPolicyServiceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(resourceTypesIsSet_) {
        val[utility::conversions::to_string_t("resource_types")] = ModelBase::toJson(resourceTypes_);
    }
    if(supportAllIsSet_) {
        val[utility::conversions::to_string_t("support_all")] = ModelBase::toJson(supportAll_);
    }

    return val;
}
bool TagPolicyServiceDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_all"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_all"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAll(refVal);
        }
    }
    return ok;
}


std::string TagPolicyServiceDto::getServiceName() const
{
    return serviceName_;
}

void TagPolicyServiceDto::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool TagPolicyServiceDto::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void TagPolicyServiceDto::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::vector<std::string>& TagPolicyServiceDto::getResourceTypes()
{
    return resourceTypes_;
}

void TagPolicyServiceDto::setResourceTypes(const std::vector<std::string>& value)
{
    resourceTypes_ = value;
    resourceTypesIsSet_ = true;
}

bool TagPolicyServiceDto::resourceTypesIsSet() const
{
    return resourceTypesIsSet_;
}

void TagPolicyServiceDto::unsetresourceTypes()
{
    resourceTypesIsSet_ = false;
}

bool TagPolicyServiceDto::isSupportAll() const
{
    return supportAll_;
}

void TagPolicyServiceDto::setSupportAll(bool value)
{
    supportAll_ = value;
    supportAllIsSet_ = true;
}

bool TagPolicyServiceDto::supportAllIsSet() const
{
    return supportAllIsSet_;
}

void TagPolicyServiceDto::unsetsupportAll()
{
    supportAllIsSet_ = false;
}

}
}
}
}
}


