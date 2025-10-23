

#include "huaweicloud/gaussdbfornosql/v3/model/RecoveryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RecoveryInfo::RecoveryInfo()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    filesIsSet_ = false;
}

RecoveryInfo::~RecoveryInfo() = default;

void RecoveryInfo::validate()
{
}

web::json::value RecoveryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool RecoveryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


std::string RecoveryInfo::getBucketName() const
{
    return bucketName_;
}

void RecoveryInfo::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool RecoveryInfo::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void RecoveryInfo::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::vector<std::string>& RecoveryInfo::getFiles()
{
    return files_;
}

void RecoveryInfo::setFiles(const std::vector<std::string>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool RecoveryInfo::filesIsSet() const
{
    return filesIsSet_;
}

void RecoveryInfo::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


