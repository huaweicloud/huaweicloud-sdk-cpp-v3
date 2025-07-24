

#include "huaweicloud/cloudtest/v1/model/SaveTaskSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SaveTaskSettingRequest::SaveTaskSettingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SaveTaskSettingRequest::~SaveTaskSettingRequest() = default;

void SaveTaskSettingRequest::validate()
{
}

web::json::value SaveTaskSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveTaskSettingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SaveTaskSettingRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveTaskSettingRequest::getServiceId() const
{
    return serviceId_;
}

void SaveTaskSettingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool SaveTaskSettingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void SaveTaskSettingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

SaveTaskSettingRequestBody SaveTaskSettingRequest::getBody() const
{
    return body_;
}

void SaveTaskSettingRequest::setBody(const SaveTaskSettingRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveTaskSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveTaskSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


