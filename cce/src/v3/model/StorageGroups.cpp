

#include "huaweicloud/cce/v3/model/StorageGroups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




StorageGroups::StorageGroups()
{
    name_ = "";
    nameIsSet_ = false;
    cceManaged_ = false;
    cceManagedIsSet_ = false;
    selectorNamesIsSet_ = false;
    virtualSpacesIsSet_ = false;
}

StorageGroups::~StorageGroups() = default;

void StorageGroups::validate()
{
}

web::json::value StorageGroups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cceManagedIsSet_) {
        val[utility::conversions::to_string_t("cceManaged")] = ModelBase::toJson(cceManaged_);
    }
    if(selectorNamesIsSet_) {
        val[utility::conversions::to_string_t("selectorNames")] = ModelBase::toJson(selectorNames_);
    }
    if(virtualSpacesIsSet_) {
        val[utility::conversions::to_string_t("virtualSpaces")] = ModelBase::toJson(virtualSpaces_);
    }

    return val;
}
bool StorageGroups::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cceManaged"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cceManaged"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCceManaged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selectorNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selectorNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectorNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtualSpaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtualSpaces"));
        if(!fieldValue.is_null())
        {
            std::vector<VirtualSpace> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualSpaces(refVal);
        }
    }
    return ok;
}


std::string StorageGroups::getName() const
{
    return name_;
}

void StorageGroups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StorageGroups::nameIsSet() const
{
    return nameIsSet_;
}

void StorageGroups::unsetname()
{
    nameIsSet_ = false;
}

bool StorageGroups::isCceManaged() const
{
    return cceManaged_;
}

void StorageGroups::setCceManaged(bool value)
{
    cceManaged_ = value;
    cceManagedIsSet_ = true;
}

bool StorageGroups::cceManagedIsSet() const
{
    return cceManagedIsSet_;
}

void StorageGroups::unsetcceManaged()
{
    cceManagedIsSet_ = false;
}

std::vector<std::string>& StorageGroups::getSelectorNames()
{
    return selectorNames_;
}

void StorageGroups::setSelectorNames(const std::vector<std::string>& value)
{
    selectorNames_ = value;
    selectorNamesIsSet_ = true;
}

bool StorageGroups::selectorNamesIsSet() const
{
    return selectorNamesIsSet_;
}

void StorageGroups::unsetselectorNames()
{
    selectorNamesIsSet_ = false;
}

std::vector<VirtualSpace>& StorageGroups::getVirtualSpaces()
{
    return virtualSpaces_;
}

void StorageGroups::setVirtualSpaces(const std::vector<VirtualSpace>& value)
{
    virtualSpaces_ = value;
    virtualSpacesIsSet_ = true;
}

bool StorageGroups::virtualSpacesIsSet() const
{
    return virtualSpacesIsSet_;
}

void StorageGroups::unsetvirtualSpaces()
{
    virtualSpacesIsSet_ = false;
}

}
}
}
}
}


