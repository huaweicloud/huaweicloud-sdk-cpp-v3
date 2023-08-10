

#include "huaweicloud/rds/v3/model/CreateXelLogDownloadRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateXelLogDownloadRequestBody::CreateXelLogDownloadRequestBody()
{
    fileName_ = "";
    fileNameIsSet_ = false;
}

CreateXelLogDownloadRequestBody::~CreateXelLogDownloadRequestBody() = default;

void CreateXelLogDownloadRequestBody::validate()
{
}

web::json::value CreateXelLogDownloadRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }

    return val;
}

bool CreateXelLogDownloadRequestBody::fromJson(const web::json::value& val)
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

std::string CreateXelLogDownloadRequestBody::getFileName() const
{
    return fileName_;
}

void CreateXelLogDownloadRequestBody::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool CreateXelLogDownloadRequestBody::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void CreateXelLogDownloadRequestBody::unsetfileName()
{
    fileNameIsSet_ = false;
}

}
}
}
}
}


