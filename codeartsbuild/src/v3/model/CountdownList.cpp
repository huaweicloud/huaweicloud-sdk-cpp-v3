

#include "huaweicloud/codeartsbuild/v3/model/CountdownList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CountdownList::CountdownList()
{
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    tipsIsSet_ = false;
}

CountdownList::~CountdownList() = default;

void CountdownList::validate()
{
}

web::json::value CountdownList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(tipsIsSet_) {
        val[utility::conversions::to_string_t("tips")] = ModelBase::toJson(tips_);
    }

    return val;
}
bool CountdownList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tips"));
        if(!fieldValue.is_null())
        {
            CountdownList_tips refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTips(refVal);
        }
    }
    return ok;
}


std::string CountdownList::getServiceType() const
{
    return serviceType_;
}

void CountdownList::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool CountdownList::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void CountdownList::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string CountdownList::getResourceId() const
{
    return resourceId_;
}

void CountdownList::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CountdownList::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CountdownList::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CountdownList::getResourceName() const
{
    return resourceName_;
}

void CountdownList::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool CountdownList::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void CountdownList::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string CountdownList::getResourceType() const
{
    return resourceType_;
}

void CountdownList::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CountdownList::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CountdownList::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CountdownList::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void CountdownList::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool CountdownList::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void CountdownList::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

CountdownList_tips CountdownList::getTips() const
{
    return tips_;
}

void CountdownList::setTips(const CountdownList_tips& value)
{
    tips_ = value;
    tipsIsSet_ = true;
}

bool CountdownList::tipsIsSet() const
{
    return tipsIsSet_;
}

void CountdownList::unsettips()
{
    tipsIsSet_ = false;
}

}
}
}
}
}


