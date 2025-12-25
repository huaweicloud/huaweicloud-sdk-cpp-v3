

#include "huaweicloud/codeartsartifact/v2/model/StorageInfoDOV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




StorageInfoDOV5::StorageInfoDOV5()
{
    usedSpaceLength_ = 0L;
    usedSpaceLengthIsSet_ = false;
    usedSpace_ = "";
    usedSpaceIsSet_ = false;
    filesCount_ = 0L;
    filesCountIsSet_ = false;
}

StorageInfoDOV5::~StorageInfoDOV5() = default;

void StorageInfoDOV5::validate()
{
}

web::json::value StorageInfoDOV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usedSpaceLengthIsSet_) {
        val[utility::conversions::to_string_t("used_space_length")] = ModelBase::toJson(usedSpaceLength_);
    }
    if(usedSpaceIsSet_) {
        val[utility::conversions::to_string_t("used_space")] = ModelBase::toJson(usedSpace_);
    }
    if(filesCountIsSet_) {
        val[utility::conversions::to_string_t("files_count")] = ModelBase::toJson(filesCount_);
    }

    return val;
}
bool StorageInfoDOV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("used_space_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_space_length"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSpaceLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_space"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilesCount(refVal);
        }
    }
    return ok;
}


int64_t StorageInfoDOV5::getUsedSpaceLength() const
{
    return usedSpaceLength_;
}

void StorageInfoDOV5::setUsedSpaceLength(int64_t value)
{
    usedSpaceLength_ = value;
    usedSpaceLengthIsSet_ = true;
}

bool StorageInfoDOV5::usedSpaceLengthIsSet() const
{
    return usedSpaceLengthIsSet_;
}

void StorageInfoDOV5::unsetusedSpaceLength()
{
    usedSpaceLengthIsSet_ = false;
}

std::string StorageInfoDOV5::getUsedSpace() const
{
    return usedSpace_;
}

void StorageInfoDOV5::setUsedSpace(const std::string& value)
{
    usedSpace_ = value;
    usedSpaceIsSet_ = true;
}

bool StorageInfoDOV5::usedSpaceIsSet() const
{
    return usedSpaceIsSet_;
}

void StorageInfoDOV5::unsetusedSpace()
{
    usedSpaceIsSet_ = false;
}

int64_t StorageInfoDOV5::getFilesCount() const
{
    return filesCount_;
}

void StorageInfoDOV5::setFilesCount(int64_t value)
{
    filesCount_ = value;
    filesCountIsSet_ = true;
}

bool StorageInfoDOV5::filesCountIsSet() const
{
    return filesCountIsSet_;
}

void StorageInfoDOV5::unsetfilesCount()
{
    filesCountIsSet_ = false;
}

}
}
}
}
}


