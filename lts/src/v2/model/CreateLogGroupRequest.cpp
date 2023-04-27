

#include "huaweicloud/lts/v2/model/CreateLogGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogGroupRequest::CreateLogGroupRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLogGroupRequest::~CreateLogGroupRequest() = default;

void CreateLogGroupRequest::validate()
{
}

web::json::value CreateLogGroupRequest::toJson() const
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

bool CreateLogGroupRequest::fromJson(const web::json::value& val)
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
            CreateLogGroupParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLogGroupRequest::getContentType() const
{
    return contentType_;
}

void CreateLogGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateLogGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateLogGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateLogGroupParams CreateLogGroupRequest::getBody() const
{
    return body_;
}

void CreateLogGroupRequest::setBody(const CreateLogGroupParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLogGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLogGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


