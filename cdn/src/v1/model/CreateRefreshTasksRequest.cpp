

#include "huaweicloud/cdn/v1/model/CreateRefreshTasksRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateRefreshTasksRequest::CreateRefreshTasksRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRefreshTasksRequest::~CreateRefreshTasksRequest() = default;

void CreateRefreshTasksRequest::validate()
{
}

web::json::value CreateRefreshTasksRequest::toJson() const
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

bool CreateRefreshTasksRequest::fromJson(const web::json::value& val)
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
            RefreshTaskRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateRefreshTasksRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateRefreshTasksRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateRefreshTasksRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateRefreshTasksRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

RefreshTaskRequest CreateRefreshTasksRequest::getBody() const
{
    return body_;
}

void CreateRefreshTasksRequest::setBody(const RefreshTaskRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRefreshTasksRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRefreshTasksRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


