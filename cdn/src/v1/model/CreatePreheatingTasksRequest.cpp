

#include "huaweicloud/cdn/v1/model/CreatePreheatingTasksRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreatePreheatingTasksRequest::CreatePreheatingTasksRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePreheatingTasksRequest::~CreatePreheatingTasksRequest() = default;

void CreatePreheatingTasksRequest::validate()
{
}

web::json::value CreatePreheatingTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatePreheatingTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PreheatingTaskRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreatePreheatingTasksRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreatePreheatingTasksRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreatePreheatingTasksRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreatePreheatingTasksRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

PreheatingTaskRequest CreatePreheatingTasksRequest::getBody() const
{
    return body_;
}

void CreatePreheatingTasksRequest::setBody(const PreheatingTaskRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePreheatingTasksRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePreheatingTasksRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


