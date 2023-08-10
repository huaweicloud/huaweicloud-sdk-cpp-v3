

#include "huaweicloud/rds/v3/model/ListXelLogResponseResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListXelLogResponseResult::ListXelLogResponseResult()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
}

ListXelLogResponseResult::~ListXelLogResponseResult() = default;

void ListXelLogResponseResult::validate()
{
}

web::json::value ListXelLogResponseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }

    return val;
}

bool ListXelLogResponseResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    return ok;
}

std::string ListXelLogResponseResult::getFileName() const
{
    return fileName_;
}

void ListXelLogResponseResult::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ListXelLogResponseResult::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ListXelLogResponseResult::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ListXelLogResponseResult::getFileSize() const
{
    return fileSize_;
}

void ListXelLogResponseResult::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool ListXelLogResponseResult::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void ListXelLogResponseResult::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

}
}
}
}
}


