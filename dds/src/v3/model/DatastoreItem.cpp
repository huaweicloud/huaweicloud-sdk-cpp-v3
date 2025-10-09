

#include "huaweicloud/dds/v3/model/DatastoreItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DatastoreItem::DatastoreItem()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    patchAvailable_ = false;
    patchAvailableIsSet_ = false;
    wholeVersion_ = "";
    wholeVersionIsSet_ = false;
}

DatastoreItem::~DatastoreItem() = default;

void DatastoreItem::validate()
{
}

web::json::value DatastoreItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(patchAvailableIsSet_) {
        val[utility::conversions::to_string_t("patch_available")] = ModelBase::toJson(patchAvailable_);
    }
    if(wholeVersionIsSet_) {
        val[utility::conversions::to_string_t("whole_version")] = ModelBase::toJson(wholeVersion_);
    }

    return val;
}
bool DatastoreItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("patch_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("patch_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatchAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whole_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whole_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWholeVersion(refVal);
        }
    }
    return ok;
}


std::string DatastoreItem::getType() const
{
    return type_;
}

void DatastoreItem::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DatastoreItem::typeIsSet() const
{
    return typeIsSet_;
}

void DatastoreItem::unsettype()
{
    typeIsSet_ = false;
}

std::string DatastoreItem::getVersion() const
{
    return version_;
}

void DatastoreItem::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DatastoreItem::versionIsSet() const
{
    return versionIsSet_;
}

void DatastoreItem::unsetversion()
{
    versionIsSet_ = false;
}

bool DatastoreItem::isPatchAvailable() const
{
    return patchAvailable_;
}

void DatastoreItem::setPatchAvailable(bool value)
{
    patchAvailable_ = value;
    patchAvailableIsSet_ = true;
}

bool DatastoreItem::patchAvailableIsSet() const
{
    return patchAvailableIsSet_;
}

void DatastoreItem::unsetpatchAvailable()
{
    patchAvailableIsSet_ = false;
}

std::string DatastoreItem::getWholeVersion() const
{
    return wholeVersion_;
}

void DatastoreItem::setWholeVersion(const std::string& value)
{
    wholeVersion_ = value;
    wholeVersionIsSet_ = true;
}

bool DatastoreItem::wholeVersionIsSet() const
{
    return wholeVersionIsSet_;
}

void DatastoreItem::unsetwholeVersion()
{
    wholeVersionIsSet_ = false;
}

}
}
}
}
}


