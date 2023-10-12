

#include "huaweicloud/eip/v2/model/CreatePublicipTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePublicipTagRequest::CreatePublicipTagRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePublicipTagRequest::~CreatePublicipTagRequest() = default;

void CreatePublicipTagRequest::validate()
{
}

web::json::value CreatePublicipTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePublicipTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePublicipTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePublicipTagRequest::getPublicipId() const
{
    return publicipId_;
}

void CreatePublicipTagRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool CreatePublicipTagRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void CreatePublicipTagRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

CreatePublicipTagRequestBody CreatePublicipTagRequest::getBody() const
{
    return body_;
}

void CreatePublicipTagRequest::setBody(const CreatePublicipTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePublicipTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePublicipTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


