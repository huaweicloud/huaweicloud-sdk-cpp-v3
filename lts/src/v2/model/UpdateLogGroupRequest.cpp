

#include "huaweicloud/lts/v2/model/UpdateLogGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateLogGroupRequest::UpdateLogGroupRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLogGroupRequest::~UpdateLogGroupRequest() = default;

void UpdateLogGroupRequest::validate()
{
}

web::json::value UpdateLogGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLogGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
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
            UpdateLogGroupParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLogGroupRequest::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateLogGroupRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateLogGroupRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateLogGroupRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateLogGroupRequest::getContentType() const
{
    return contentType_;
}

void UpdateLogGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateLogGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateLogGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateLogGroupParams UpdateLogGroupRequest::getBody() const
{
    return body_;
}

void UpdateLogGroupRequest::setBody(const UpdateLogGroupParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


