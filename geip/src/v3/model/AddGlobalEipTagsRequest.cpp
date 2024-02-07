

#include "huaweicloud/geip/v3/model/AddGlobalEipTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AddGlobalEipTagsRequest::AddGlobalEipTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddGlobalEipTagsRequest::~AddGlobalEipTagsRequest() = default;

void AddGlobalEipTagsRequest::validate()
{
}

web::json::value AddGlobalEipTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddGlobalEipTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateV2TagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddGlobalEipTagsRequest::getResourceId() const
{
    return resourceId_;
}

void AddGlobalEipTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool AddGlobalEipTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void AddGlobalEipTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

CreateV2TagRequestBody AddGlobalEipTagsRequest::getBody() const
{
    return body_;
}

void AddGlobalEipTagsRequest::setBody(const CreateV2TagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddGlobalEipTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddGlobalEipTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


