

#include "huaweicloud/iotda/v5/model/CreateBatchTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateBatchTaskRequest::CreateBatchTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateBatchTaskRequest::~CreateBatchTaskRequest() = default;

void CreateBatchTaskRequest::validate()
{
}

web::json::value CreateBatchTaskRequest::toJson() const
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
bool CreateBatchTaskRequest::fromJson(const web::json::value& val)
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
            CreateBatchTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateBatchTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateBatchTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateBatchTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateBatchTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateBatchTask CreateBatchTaskRequest::getBody() const
{
    return body_;
}

void CreateBatchTaskRequest::setBody(const CreateBatchTask& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBatchTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBatchTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


