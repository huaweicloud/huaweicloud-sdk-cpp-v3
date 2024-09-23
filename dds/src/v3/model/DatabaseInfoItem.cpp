

#include "huaweicloud/dds/v3/model/DatabaseInfoItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DatabaseInfoItem::DatabaseInfoItem()
{
    name_ = "";
    nameIsSet_ = false;
    dataSize_ = "";
    dataSizeIsSet_ = false;
    storageSize_ = "";
    storageSizeIsSet_ = false;
    collectionNum_ = 0;
    collectionNumIsSet_ = false;
}

DatabaseInfoItem::~DatabaseInfoItem() = default;

void DatabaseInfoItem::validate()
{
}

web::json::value DatabaseInfoItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(dataSizeIsSet_) {
        val[utility::conversions::to_string_t("data_size")] = ModelBase::toJson(dataSize_);
    }
    if(storageSizeIsSet_) {
        val[utility::conversions::to_string_t("storage_size")] = ModelBase::toJson(storageSize_);
    }
    if(collectionNumIsSet_) {
        val[utility::conversions::to_string_t("collection_num")] = ModelBase::toJson(collectionNum_);
    }

    return val;
}
bool DatabaseInfoItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collection_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collection_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollectionNum(refVal);
        }
    }
    return ok;
}


std::string DatabaseInfoItem::getName() const
{
    return name_;
}

void DatabaseInfoItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabaseInfoItem::nameIsSet() const
{
    return nameIsSet_;
}

void DatabaseInfoItem::unsetname()
{
    nameIsSet_ = false;
}

std::string DatabaseInfoItem::getDataSize() const
{
    return dataSize_;
}

void DatabaseInfoItem::setDataSize(const std::string& value)
{
    dataSize_ = value;
    dataSizeIsSet_ = true;
}

bool DatabaseInfoItem::dataSizeIsSet() const
{
    return dataSizeIsSet_;
}

void DatabaseInfoItem::unsetdataSize()
{
    dataSizeIsSet_ = false;
}

std::string DatabaseInfoItem::getStorageSize() const
{
    return storageSize_;
}

void DatabaseInfoItem::setStorageSize(const std::string& value)
{
    storageSize_ = value;
    storageSizeIsSet_ = true;
}

bool DatabaseInfoItem::storageSizeIsSet() const
{
    return storageSizeIsSet_;
}

void DatabaseInfoItem::unsetstorageSize()
{
    storageSizeIsSet_ = false;
}

int32_t DatabaseInfoItem::getCollectionNum() const
{
    return collectionNum_;
}

void DatabaseInfoItem::setCollectionNum(int32_t value)
{
    collectionNum_ = value;
    collectionNumIsSet_ = true;
}

bool DatabaseInfoItem::collectionNumIsSet() const
{
    return collectionNumIsSet_;
}

void DatabaseInfoItem::unsetcollectionNum()
{
    collectionNumIsSet_ = false;
}

}
}
}
}
}


