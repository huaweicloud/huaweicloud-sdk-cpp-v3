

#include "huaweicloud/drs/v5/model/ShowFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowFilesResponse::ShowFilesResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    filesIsSet_ = false;
}

ShowFilesResponse::~ShowFilesResponse() = default;

void ShowFilesResponse::validate()
{
}

web::json::value ShowFilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool ShowFilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<FileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


int64_t ShowFilesResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowFilesResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowFilesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowFilesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<FileInfo>& ShowFilesResponse::getFiles()
{
    return files_;
}

void ShowFilesResponse::setFiles(const std::vector<FileInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ShowFilesResponse::filesIsSet() const
{
    return filesIsSet_;
}

void ShowFilesResponse::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


