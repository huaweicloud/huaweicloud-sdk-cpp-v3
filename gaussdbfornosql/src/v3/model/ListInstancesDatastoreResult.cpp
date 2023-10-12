

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesDatastoreResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesDatastoreResult::ListInstancesDatastoreResult()
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

ListInstancesDatastoreResult::~ListInstancesDatastoreResult() = default;

void ListInstancesDatastoreResult::validate()
{
}

web::json::value ListInstancesDatastoreResult::toJson() const
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
bool ListInstancesDatastoreResult::fromJson(const web::json::value& val)
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


std::string ListInstancesDatastoreResult::getType() const
{
    return type_;
}

void ListInstancesDatastoreResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInstancesDatastoreResult::typeIsSet() const
{
    return typeIsSet_;
}

void ListInstancesDatastoreResult::unsettype()
{
    typeIsSet_ = false;
}

std::string ListInstancesDatastoreResult::getVersion() const
{
    return version_;
}

void ListInstancesDatastoreResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListInstancesDatastoreResult::versionIsSet() const
{
    return versionIsSet_;
}

void ListInstancesDatastoreResult::unsetversion()
{
    versionIsSet_ = false;
}

bool ListInstancesDatastoreResult::isPatchAvailable() const
{
    return patchAvailable_;
}

void ListInstancesDatastoreResult::setPatchAvailable(bool value)
{
    patchAvailable_ = value;
    patchAvailableIsSet_ = true;
}

bool ListInstancesDatastoreResult::patchAvailableIsSet() const
{
    return patchAvailableIsSet_;
}

void ListInstancesDatastoreResult::unsetpatchAvailable()
{
    patchAvailableIsSet_ = false;
}

std::string ListInstancesDatastoreResult::getWholeVersion() const
{
    return wholeVersion_;
}

void ListInstancesDatastoreResult::setWholeVersion(const std::string& value)
{
    wholeVersion_ = value;
    wholeVersionIsSet_ = true;
}

bool ListInstancesDatastoreResult::wholeVersionIsSet() const
{
    return wholeVersionIsSet_;
}

void ListInstancesDatastoreResult::unsetwholeVersion()
{
    wholeVersionIsSet_ = false;
}

}
}
}
}
}


