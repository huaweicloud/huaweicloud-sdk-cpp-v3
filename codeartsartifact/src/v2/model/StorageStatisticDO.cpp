

#include "huaweicloud/codeartsartifact/v2/model/StorageStatisticDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




StorageStatisticDO::StorageStatisticDO()
{
    filesCount_ = 0L;
    filesCountIsSet_ = false;
    usedSpaceLength_ = 0L;
    usedSpaceLengthIsSet_ = false;
    usedSpace_ = "";
    usedSpaceIsSet_ = false;
    summaryDate_ = "";
    summaryDateIsSet_ = false;
    foldersCount_ = 0L;
    foldersCountIsSet_ = false;
    itemsCount_ = 0L;
    itemsCountIsSet_ = false;
}

StorageStatisticDO::~StorageStatisticDO() = default;

void StorageStatisticDO::validate()
{
}

web::json::value StorageStatisticDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filesCountIsSet_) {
        val[utility::conversions::to_string_t("filesCount")] = ModelBase::toJson(filesCount_);
    }
    if(usedSpaceLengthIsSet_) {
        val[utility::conversions::to_string_t("usedSpaceLength")] = ModelBase::toJson(usedSpaceLength_);
    }
    if(usedSpaceIsSet_) {
        val[utility::conversions::to_string_t("usedSpace")] = ModelBase::toJson(usedSpace_);
    }
    if(summaryDateIsSet_) {
        val[utility::conversions::to_string_t("summaryDate")] = ModelBase::toJson(summaryDate_);
    }
    if(foldersCountIsSet_) {
        val[utility::conversions::to_string_t("foldersCount")] = ModelBase::toJson(foldersCount_);
    }
    if(itemsCountIsSet_) {
        val[utility::conversions::to_string_t("itemsCount")] = ModelBase::toJson(itemsCount_);
    }

    return val;
}
bool StorageStatisticDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filesCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filesCount"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usedSpaceLength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedSpaceLength"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSpaceLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usedSpace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedSpace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summaryDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summaryDate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummaryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("foldersCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("foldersCount"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoldersCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("itemsCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("itemsCount"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemsCount(refVal);
        }
    }
    return ok;
}


int64_t StorageStatisticDO::getFilesCount() const
{
    return filesCount_;
}

void StorageStatisticDO::setFilesCount(int64_t value)
{
    filesCount_ = value;
    filesCountIsSet_ = true;
}

bool StorageStatisticDO::filesCountIsSet() const
{
    return filesCountIsSet_;
}

void StorageStatisticDO::unsetfilesCount()
{
    filesCountIsSet_ = false;
}

int64_t StorageStatisticDO::getUsedSpaceLength() const
{
    return usedSpaceLength_;
}

void StorageStatisticDO::setUsedSpaceLength(int64_t value)
{
    usedSpaceLength_ = value;
    usedSpaceLengthIsSet_ = true;
}

bool StorageStatisticDO::usedSpaceLengthIsSet() const
{
    return usedSpaceLengthIsSet_;
}

void StorageStatisticDO::unsetusedSpaceLength()
{
    usedSpaceLengthIsSet_ = false;
}

std::string StorageStatisticDO::getUsedSpace() const
{
    return usedSpace_;
}

void StorageStatisticDO::setUsedSpace(const std::string& value)
{
    usedSpace_ = value;
    usedSpaceIsSet_ = true;
}

bool StorageStatisticDO::usedSpaceIsSet() const
{
    return usedSpaceIsSet_;
}

void StorageStatisticDO::unsetusedSpace()
{
    usedSpaceIsSet_ = false;
}

std::string StorageStatisticDO::getSummaryDate() const
{
    return summaryDate_;
}

void StorageStatisticDO::setSummaryDate(const std::string& value)
{
    summaryDate_ = value;
    summaryDateIsSet_ = true;
}

bool StorageStatisticDO::summaryDateIsSet() const
{
    return summaryDateIsSet_;
}

void StorageStatisticDO::unsetsummaryDate()
{
    summaryDateIsSet_ = false;
}

int64_t StorageStatisticDO::getFoldersCount() const
{
    return foldersCount_;
}

void StorageStatisticDO::setFoldersCount(int64_t value)
{
    foldersCount_ = value;
    foldersCountIsSet_ = true;
}

bool StorageStatisticDO::foldersCountIsSet() const
{
    return foldersCountIsSet_;
}

void StorageStatisticDO::unsetfoldersCount()
{
    foldersCountIsSet_ = false;
}

int64_t StorageStatisticDO::getItemsCount() const
{
    return itemsCount_;
}

void StorageStatisticDO::setItemsCount(int64_t value)
{
    itemsCount_ = value;
    itemsCountIsSet_ = true;
}

bool StorageStatisticDO::itemsCountIsSet() const
{
    return itemsCountIsSet_;
}

void StorageStatisticDO::unsetitemsCount()
{
    itemsCountIsSet_ = false;
}

}
}
}
}
}


