

#include "huaweicloud/dbss/v1/model/CreateReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateReportRequest::CreateReportRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateReportRequest::~CreateReportRequest() = default;

void CreateReportRequest::validate()
{
}

web::json::value CreateReportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateReportRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
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
            CreateReportRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateReportRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateReportRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateReportRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateReportRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateReportRequestBody CreateReportRequest::getBody() const
{
    return body_;
}

void CreateReportRequest::setBody(const CreateReportRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateReportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateReportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


