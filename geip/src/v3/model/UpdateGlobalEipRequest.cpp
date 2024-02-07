

#include "huaweicloud/geip/v3/model/UpdateGlobalEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipRequest::UpdateGlobalEipRequest()
{
    globalEipId_ = "";
    globalEipIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGlobalEipRequest::~UpdateGlobalEipRequest() = default;

void UpdateGlobalEipRequest::validate()
{
}

web::json::value UpdateGlobalEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_id")] = ModelBase::toJson(globalEipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGlobalEipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateGlobalEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGlobalEipRequest::getGlobalEipId() const
{
    return globalEipId_;
}

void UpdateGlobalEipRequest::setGlobalEipId(const std::string& value)
{
    globalEipId_ = value;
    globalEipIdIsSet_ = true;
}

bool UpdateGlobalEipRequest::globalEipIdIsSet() const
{
    return globalEipIdIsSet_;
}

void UpdateGlobalEipRequest::unsetglobalEipId()
{
    globalEipIdIsSet_ = false;
}

UpdateGlobalEipRequestBody UpdateGlobalEipRequest::getBody() const
{
    return body_;
}

void UpdateGlobalEipRequest::setBody(const UpdateGlobalEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGlobalEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGlobalEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


