

#include "huaweicloud/codeartsdeploy/v2/model/CreateHostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateHostRequest::CreateHostRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateHostRequest::~CreateHostRequest() = default;

void CreateHostRequest::validate()
{
}

web::json::value CreateHostRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateHostRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateHostRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateHostRequest::getGroupId() const
{
    return groupId_;
}

void CreateHostRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateHostRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateHostRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

CreateHostRequestBody CreateHostRequest::getBody() const
{
    return body_;
}

void CreateHostRequest::setBody(const CreateHostRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


