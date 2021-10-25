

#include "huaweicloud/sdrs/v1/model/AddProtectedInstanceTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




AddProtectedInstanceTagsRequest::AddProtectedInstanceTagsRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddProtectedInstanceTagsRequest::~AddProtectedInstanceTagsRequest() = default;

void AddProtectedInstanceTagsRequest::validate()
{
}

web::json::value AddProtectedInstanceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AddProtectedInstanceTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProtectedInstanceAddTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddProtectedInstanceTagsRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void AddProtectedInstanceTagsRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool AddProtectedInstanceTagsRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void AddProtectedInstanceTagsRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

ProtectedInstanceAddTagsRequestBody AddProtectedInstanceTagsRequest::getBody() const
{
    return body_;
}

void AddProtectedInstanceTagsRequest::setBody(const ProtectedInstanceAddTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddProtectedInstanceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddProtectedInstanceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


