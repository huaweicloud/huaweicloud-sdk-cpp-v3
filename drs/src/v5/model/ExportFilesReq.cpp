

#include "huaweicloud/drs/v5/model/ExportFilesReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportFilesReq::ExportFilesReq()
{
    filesIsSet_ = false;
}

ExportFilesReq::~ExportFilesReq() = default;

void ExportFilesReq::validate()
{
}

web::json::value ExportFilesReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool ExportFilesReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& ExportFilesReq::getFiles()
{
    return files_;
}

void ExportFilesReq::setFiles(const std::vector<std::string>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ExportFilesReq::filesIsSet() const
{
    return filesIsSet_;
}

void ExportFilesReq::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


