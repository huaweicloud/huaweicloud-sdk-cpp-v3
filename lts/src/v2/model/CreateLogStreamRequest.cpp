

#include "huaweicloud/lts/v2/model/CreateLogStreamRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogStreamRequest::CreateLogStreamRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLogStreamRequest::~CreateLogStreamRequest() = default;

void CreateLogStreamRequest::validate()
{
}

web::json::value CreateLogStreamRequest::toJson() const
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

bool CreateLogStreamRequest::fromJson(const web::json::value& val)
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
            CreateLogStreamParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateLogStreamRequest::getLogGroupId() const
{
    return logGroupId_;
}

void CreateLogStreamRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateLogStreamRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateLogStreamRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateLogStreamRequest::getContentType() const
{
    return contentType_;
}

void CreateLogStreamRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateLogStreamRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateLogStreamRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateLogStreamParams CreateLogStreamRequest::getBody() const
{
    return body_;
}

void CreateLogStreamRequest::setBody(const CreateLogStreamParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLogStreamRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLogStreamRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


