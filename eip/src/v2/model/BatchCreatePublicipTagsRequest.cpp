

#include "huaweicloud/eip/v2/model/BatchCreatePublicipTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreatePublicipTagsRequest::BatchCreatePublicipTagsRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreatePublicipTagsRequest::~BatchCreatePublicipTagsRequest() = default;

void BatchCreatePublicipTagsRequest::validate()
{
}

web::json::value BatchCreatePublicipTagsRequest::toJson() const
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

bool BatchCreatePublicipTagsRequest::fromJson(const web::json::value& val)
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
            BatchCreatePublicipTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreatePublicipTagsRequest::getPublicipId() const
{
    return publicipId_;
}

void BatchCreatePublicipTagsRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool BatchCreatePublicipTagsRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void BatchCreatePublicipTagsRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

BatchCreatePublicipTagsRequestBody BatchCreatePublicipTagsRequest::getBody() const
{
    return body_;
}

void BatchCreatePublicipTagsRequest::setBody(const BatchCreatePublicipTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreatePublicipTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreatePublicipTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


