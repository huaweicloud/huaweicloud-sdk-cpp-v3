

#include "huaweicloud/codeartsartifact/v2/model/DownloadFolderInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DownloadFolderInfo::DownloadFolderInfo()
{
    filesCount_ = 0L;
    filesCountIsSet_ = false;
    usedSpace_ = "";
    usedSpaceIsSet_ = false;
}

DownloadFolderInfo::~DownloadFolderInfo() = default;

void DownloadFolderInfo::validate()
{
}

web::json::value DownloadFolderInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filesCountIsSet_) {
        val[utility::conversions::to_string_t("filesCount")] = ModelBase::toJson(filesCount_);
    }
    if(usedSpaceIsSet_) {
        val[utility::conversions::to_string_t("usedSpace")] = ModelBase::toJson(usedSpace_);
    }

    return val;
}
bool DownloadFolderInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("usedSpace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedSpace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSpace(refVal);
        }
    }
    return ok;
}


int64_t DownloadFolderInfo::getFilesCount() const
{
    return filesCount_;
}

void DownloadFolderInfo::setFilesCount(int64_t value)
{
    filesCount_ = value;
    filesCountIsSet_ = true;
}

bool DownloadFolderInfo::filesCountIsSet() const
{
    return filesCountIsSet_;
}

void DownloadFolderInfo::unsetfilesCount()
{
    filesCountIsSet_ = false;
}

std::string DownloadFolderInfo::getUsedSpace() const
{
    return usedSpace_;
}

void DownloadFolderInfo::setUsedSpace(const std::string& value)
{
    usedSpace_ = value;
    usedSpaceIsSet_ = true;
}

bool DownloadFolderInfo::usedSpaceIsSet() const
{
    return usedSpaceIsSet_;
}

void DownloadFolderInfo::unsetusedSpace()
{
    usedSpaceIsSet_ = false;
}

}
}
}
}
}


