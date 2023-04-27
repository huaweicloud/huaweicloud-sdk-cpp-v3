

#include "huaweicloud/lts/v2/model/CreateDashboardGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateDashboardGroupRequest::CreateDashboardGroupRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDashboardGroupRequest::~CreateDashboardGroupRequest() = default;

void CreateDashboardGroupRequest::validate()
{
}

web::json::value CreateDashboardGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateDashboardGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDashboardGroupReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDashboardGroupRequest::getContentType() const
{
    return contentType_;
}

void CreateDashboardGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateDashboardGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateDashboardGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateDashboardGroupReq CreateDashboardGroupRequest::getBody() const
{
    return body_;
}

void CreateDashboardGroupRequest::setBody(const CreateDashboardGroupReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDashboardGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDashboardGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


