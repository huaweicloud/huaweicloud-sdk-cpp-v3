

#include "huaweicloud/rds/v3/model/SlowlogDownloadRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SlowlogDownloadRequest::SlowlogDownloadRequest()
{
    fileName_ = "";
    fileNameIsSet_ = false;
}

SlowlogDownloadRequest::~SlowlogDownloadRequest() = default;

void SlowlogDownloadRequest::validate()
{
}

web::json::value SlowlogDownloadRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }

    return val;
}

bool SlowlogDownloadRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string SlowlogDownloadRequest::getFileName() const
{
    return fileName_;
}

void SlowlogDownloadRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool SlowlogDownloadRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void SlowlogDownloadRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

}
}
}
}
}


