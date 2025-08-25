

#include "huaweicloud/cce/v3/model/StorageSelectors.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




StorageSelectors::StorageSelectors()
{
    name_ = "";
    nameIsSet_ = false;
    storageType_ = "";
    storageTypeIsSet_ = false;
    matchLabelsIsSet_ = false;
}

StorageSelectors::~StorageSelectors() = default;

void StorageSelectors::validate()
{
}

web::json::value StorageSelectors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storageType")] = ModelBase::toJson(storageType_);
    }
    if(matchLabelsIsSet_) {
        val[utility::conversions::to_string_t("matchLabels")] = ModelBase::toJson(matchLabels_);
    }

    return val;
}
bool StorageSelectors::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("storageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matchLabels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matchLabels"));
        if(!fieldValue.is_null())
        {
            StorageSelectors_matchLabels refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchLabels(refVal);
        }
    }
    return ok;
}


std::string StorageSelectors::getName() const
{
    return name_;
}

void StorageSelectors::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StorageSelectors::nameIsSet() const
{
    return nameIsSet_;
}

void StorageSelectors::unsetname()
{
    nameIsSet_ = false;
}

std::string StorageSelectors::getStorageType() const
{
    return storageType_;
}

void StorageSelectors::setStorageType(const std::string& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool StorageSelectors::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void StorageSelectors::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

StorageSelectors_matchLabels StorageSelectors::getMatchLabels() const
{
    return matchLabels_;
}

void StorageSelectors::setMatchLabels(const StorageSelectors_matchLabels& value)
{
    matchLabels_ = value;
    matchLabelsIsSet_ = true;
}

bool StorageSelectors::matchLabelsIsSet() const
{
    return matchLabelsIsSet_;
}

void StorageSelectors::unsetmatchLabels()
{
    matchLabelsIsSet_ = false;
}

}
}
}
}
}


