

#include "huaweicloud/iotda/v5/model/DeleteBatchTaskFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteBatchTaskFileRequest::DeleteBatchTaskFileRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
}

DeleteBatchTaskFileRequest::~DeleteBatchTaskFileRequest() = default;

void DeleteBatchTaskFileRequest::validate()
{
}

web::json::value DeleteBatchTaskFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }

    return val;
}
bool DeleteBatchTaskFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    return ok;
}


std::string DeleteBatchTaskFileRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteBatchTaskFileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteBatchTaskFileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteBatchTaskFileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteBatchTaskFileRequest::getFileId() const
{
    return fileId_;
}

void DeleteBatchTaskFileRequest::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool DeleteBatchTaskFileRequest::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void DeleteBatchTaskFileRequest::unsetfileId()
{
    fileIdIsSet_ = false;
}

}
}
}
}
}


