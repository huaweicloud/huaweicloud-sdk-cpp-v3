

#include "huaweicloud/iotda/v5/model/CreateExportTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateExportTaskRequest::CreateExportTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateExportTaskRequest::~CreateExportTaskRequest() = default;

void CreateExportTaskRequest::validate()
{
}

web::json::value CreateExportTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateExportTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddExportTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateExportTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateExportTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateExportTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateExportTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddExportTask CreateExportTaskRequest::getBody() const
{
    return body_;
}

void CreateExportTaskRequest::setBody(const AddExportTask& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateExportTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateExportTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


