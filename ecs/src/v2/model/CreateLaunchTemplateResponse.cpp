

#include "huaweicloud/ecs/v2/model/CreateLaunchTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateLaunchTemplateResponse::CreateLaunchTemplateResponse()
{
    launchTemplateId_ = "";
    launchTemplateIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateLaunchTemplateResponse::~CreateLaunchTemplateResponse() = default;

void CreateLaunchTemplateResponse::validate()
{
}

web::json::value CreateLaunchTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(launchTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("launch_template_id")] = ModelBase::toJson(launchTemplateId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateLaunchTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("launch_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launch_template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateLaunchTemplateResponse::getLaunchTemplateId() const
{
    return launchTemplateId_;
}

void CreateLaunchTemplateResponse::setLaunchTemplateId(const std::string& value)
{
    launchTemplateId_ = value;
    launchTemplateIdIsSet_ = true;
}

bool CreateLaunchTemplateResponse::launchTemplateIdIsSet() const
{
    return launchTemplateIdIsSet_;
}

void CreateLaunchTemplateResponse::unsetlaunchTemplateId()
{
    launchTemplateIdIsSet_ = false;
}

std::string CreateLaunchTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateLaunchTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateLaunchTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateLaunchTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


