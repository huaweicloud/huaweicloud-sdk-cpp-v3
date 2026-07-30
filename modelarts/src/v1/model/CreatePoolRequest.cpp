

#include "huaweicloud/modelarts/v1/model/CreatePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreatePoolRequest::CreatePoolRequest()
{
    xModelArtsUserID_ = "";
    xModelArtsUserIDIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePoolRequest::~CreatePoolRequest() = default;

void CreatePoolRequest::validate()
{
}

web::json::value CreatePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xModelArtsUserIDIsSet_) {
        val[utility::conversions::to_string_t("X-ModelArts-User-ID")] = ModelBase::toJson(xModelArtsUserID_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePoolRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-ModelArts-User-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-ModelArts-User-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXModelArtsUserID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePoolRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePoolRequest::getXModelArtsUserID() const
{
    return xModelArtsUserID_;
}

void CreatePoolRequest::setXModelArtsUserID(const std::string& value)
{
    xModelArtsUserID_ = value;
    xModelArtsUserIDIsSet_ = true;
}

bool CreatePoolRequest::xModelArtsUserIDIsSet() const
{
    return xModelArtsUserIDIsSet_;
}

void CreatePoolRequest::unsetxModelArtsUserID()
{
    xModelArtsUserIDIsSet_ = false;
}

CreatePoolRequestBody CreatePoolRequest::getBody() const
{
    return body_;
}

void CreatePoolRequest::setBody(const CreatePoolRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


