

#include "huaweicloud/iotda/v5/model/ListBatchTaskFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListBatchTaskFilesResponse::ListBatchTaskFilesResponse()
{
    filesIsSet_ = false;
}

ListBatchTaskFilesResponse::~ListBatchTaskFilesResponse() = default;

void ListBatchTaskFilesResponse::validate()
{
}

web::json::value ListBatchTaskFilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool ListBatchTaskFilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchTaskFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


std::vector<BatchTaskFile>& ListBatchTaskFilesResponse::getFiles()
{
    return files_;
}

void ListBatchTaskFilesResponse::setFiles(const std::vector<BatchTaskFile>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ListBatchTaskFilesResponse::filesIsSet() const
{
    return filesIsSet_;
}

void ListBatchTaskFilesResponse::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


