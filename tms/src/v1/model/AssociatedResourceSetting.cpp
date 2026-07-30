

#include "huaweicloud/tms/v1/model/AssociatedResourceSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




AssociatedResourceSetting::AssociatedResourceSetting()
{
    settingName_ = "";
    settingNameIsSet_ = false;
    masterService_ = "";
    masterServiceIsSet_ = false;
    masterResourceType_ = "";
    masterResourceTypeIsSet_ = false;
    associatedService_ = "";
    associatedServiceIsSet_ = false;
    associatedResourceType_ = "";
    associatedResourceTypeIsSet_ = false;
    supportExistingResource_ = false;
    supportExistingResourceIsSet_ = false;
    supportAutoDelete_ = false;
    supportAutoDeleteIsSet_ = false;
    regionIdsIsSet_ = false;
}

AssociatedResourceSetting::~AssociatedResourceSetting() = default;

void AssociatedResourceSetting::validate()
{
}

web::json::value AssociatedResourceSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(settingNameIsSet_) {
        val[utility::conversions::to_string_t("setting_name")] = ModelBase::toJson(settingName_);
    }
    if(masterServiceIsSet_) {
        val[utility::conversions::to_string_t("master_service")] = ModelBase::toJson(masterService_);
    }
    if(masterResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("master_resource_type")] = ModelBase::toJson(masterResourceType_);
    }
    if(associatedServiceIsSet_) {
        val[utility::conversions::to_string_t("associated_service")] = ModelBase::toJson(associatedService_);
    }
    if(associatedResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("associated_resource_type")] = ModelBase::toJson(associatedResourceType_);
    }
    if(supportExistingResourceIsSet_) {
        val[utility::conversions::to_string_t("support_existing_resource")] = ModelBase::toJson(supportExistingResource_);
    }
    if(supportAutoDeleteIsSet_) {
        val[utility::conversions::to_string_t("support_auto_delete")] = ModelBase::toJson(supportAutoDelete_);
    }
    if(regionIdsIsSet_) {
        val[utility::conversions::to_string_t("region_ids")] = ModelBase::toJson(regionIds_);
    }

    return val;
}
bool AssociatedResourceSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("setting_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_existing_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_existing_resource"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportExistingResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_auto_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_auto_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAutoDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionIds(refVal);
        }
    }
    return ok;
}


std::string AssociatedResourceSetting::getSettingName() const
{
    return settingName_;
}

void AssociatedResourceSetting::setSettingName(const std::string& value)
{
    settingName_ = value;
    settingNameIsSet_ = true;
}

bool AssociatedResourceSetting::settingNameIsSet() const
{
    return settingNameIsSet_;
}

void AssociatedResourceSetting::unsetsettingName()
{
    settingNameIsSet_ = false;
}

std::string AssociatedResourceSetting::getMasterService() const
{
    return masterService_;
}

void AssociatedResourceSetting::setMasterService(const std::string& value)
{
    masterService_ = value;
    masterServiceIsSet_ = true;
}

bool AssociatedResourceSetting::masterServiceIsSet() const
{
    return masterServiceIsSet_;
}

void AssociatedResourceSetting::unsetmasterService()
{
    masterServiceIsSet_ = false;
}

std::string AssociatedResourceSetting::getMasterResourceType() const
{
    return masterResourceType_;
}

void AssociatedResourceSetting::setMasterResourceType(const std::string& value)
{
    masterResourceType_ = value;
    masterResourceTypeIsSet_ = true;
}

bool AssociatedResourceSetting::masterResourceTypeIsSet() const
{
    return masterResourceTypeIsSet_;
}

void AssociatedResourceSetting::unsetmasterResourceType()
{
    masterResourceTypeIsSet_ = false;
}

std::string AssociatedResourceSetting::getAssociatedService() const
{
    return associatedService_;
}

void AssociatedResourceSetting::setAssociatedService(const std::string& value)
{
    associatedService_ = value;
    associatedServiceIsSet_ = true;
}

bool AssociatedResourceSetting::associatedServiceIsSet() const
{
    return associatedServiceIsSet_;
}

void AssociatedResourceSetting::unsetassociatedService()
{
    associatedServiceIsSet_ = false;
}

std::string AssociatedResourceSetting::getAssociatedResourceType() const
{
    return associatedResourceType_;
}

void AssociatedResourceSetting::setAssociatedResourceType(const std::string& value)
{
    associatedResourceType_ = value;
    associatedResourceTypeIsSet_ = true;
}

bool AssociatedResourceSetting::associatedResourceTypeIsSet() const
{
    return associatedResourceTypeIsSet_;
}

void AssociatedResourceSetting::unsetassociatedResourceType()
{
    associatedResourceTypeIsSet_ = false;
}

bool AssociatedResourceSetting::isSupportExistingResource() const
{
    return supportExistingResource_;
}

void AssociatedResourceSetting::setSupportExistingResource(bool value)
{
    supportExistingResource_ = value;
    supportExistingResourceIsSet_ = true;
}

bool AssociatedResourceSetting::supportExistingResourceIsSet() const
{
    return supportExistingResourceIsSet_;
}

void AssociatedResourceSetting::unsetsupportExistingResource()
{
    supportExistingResourceIsSet_ = false;
}

bool AssociatedResourceSetting::isSupportAutoDelete() const
{
    return supportAutoDelete_;
}

void AssociatedResourceSetting::setSupportAutoDelete(bool value)
{
    supportAutoDelete_ = value;
    supportAutoDeleteIsSet_ = true;
}

bool AssociatedResourceSetting::supportAutoDeleteIsSet() const
{
    return supportAutoDeleteIsSet_;
}

void AssociatedResourceSetting::unsetsupportAutoDelete()
{
    supportAutoDeleteIsSet_ = false;
}

std::vector<std::string>& AssociatedResourceSetting::getRegionIds()
{
    return regionIds_;
}

void AssociatedResourceSetting::setRegionIds(const std::vector<std::string>& value)
{
    regionIds_ = value;
    regionIdsIsSet_ = true;
}

bool AssociatedResourceSetting::regionIdsIsSet() const
{
    return regionIdsIsSet_;
}

void AssociatedResourceSetting::unsetregionIds()
{
    regionIdsIsSet_ = false;
}

}
}
}
}
}


