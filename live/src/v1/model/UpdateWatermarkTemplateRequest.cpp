

#include "huaweicloud/live/v1/model/UpdateWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateWatermarkTemplateRequest::UpdateWatermarkTemplateRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWatermarkTemplateRequest::~UpdateWatermarkTemplateRequest() = default;

void UpdateWatermarkTemplateRequest::validate()
{
}

web::json::value UpdateWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWatermarkTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WatermarkTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWatermarkTemplateRequest::getId() const
{
    return id_;
}

void UpdateWatermarkTemplateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateWatermarkTemplateRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateWatermarkTemplateRequest::unsetid()
{
    idIsSet_ = false;
}

WatermarkTemplate UpdateWatermarkTemplateRequest::getBody() const
{
    return body_;
}

void UpdateWatermarkTemplateRequest::setBody(const WatermarkTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWatermarkTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWatermarkTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


