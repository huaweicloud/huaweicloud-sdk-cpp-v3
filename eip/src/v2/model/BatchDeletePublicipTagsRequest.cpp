

#include "huaweicloud/eip/v2/model/BatchDeletePublicipTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchDeletePublicipTagsRequest::BatchDeletePublicipTagsRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeletePublicipTagsRequest::~BatchDeletePublicipTagsRequest() = default;

void BatchDeletePublicipTagsRequest::validate()
{
}

web::json::value BatchDeletePublicipTagsRequest::toJson() const
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
bool BatchDeletePublicipTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeletePublicipTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeletePublicipTagsRequest::getPublicipId() const
{
    return publicipId_;
}

void BatchDeletePublicipTagsRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool BatchDeletePublicipTagsRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void BatchDeletePublicipTagsRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

BatchDeletePublicipTagsRequestBody BatchDeletePublicipTagsRequest::getBody() const
{
    return body_;
}

void BatchDeletePublicipTagsRequest::setBody(const BatchDeletePublicipTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeletePublicipTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeletePublicipTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


