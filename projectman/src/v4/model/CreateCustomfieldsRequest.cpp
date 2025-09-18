

#include "huaweicloud/projectman/v4/model/CreateCustomfieldsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateCustomfieldsRequest::CreateCustomfieldsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCustomfieldsRequest::~CreateCustomfieldsRequest() = default;

void CreateCustomfieldsRequest::validate()
{
}

web::json::value CreateCustomfieldsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCustomfieldsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateCustomfieldV1Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCustomfieldsRequest::getProjectId() const
{
    return projectId_;
}

void CreateCustomfieldsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateCustomfieldsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateCustomfieldsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateCustomfieldV1Req CreateCustomfieldsRequest::getBody() const
{
    return body_;
}

void CreateCustomfieldsRequest::setBody(const CreateCustomfieldV1Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCustomfieldsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCustomfieldsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


