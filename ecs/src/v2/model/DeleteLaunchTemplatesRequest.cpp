

#include "huaweicloud/ecs/v2/model/DeleteLaunchTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteLaunchTemplatesRequest::DeleteLaunchTemplatesRequest()
{
    launchTemplateId_ = "";
    launchTemplateIdIsSet_ = false;
}

DeleteLaunchTemplatesRequest::~DeleteLaunchTemplatesRequest() = default;

void DeleteLaunchTemplatesRequest::validate()
{
}

web::json::value DeleteLaunchTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(launchTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("launch_template_id")] = ModelBase::toJson(launchTemplateId_);
    }

    return val;
}
bool DeleteLaunchTemplatesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteLaunchTemplatesRequest::getLaunchTemplateId() const
{
    return launchTemplateId_;
}

void DeleteLaunchTemplatesRequest::setLaunchTemplateId(const std::string& value)
{
    launchTemplateId_ = value;
    launchTemplateIdIsSet_ = true;
}

bool DeleteLaunchTemplatesRequest::launchTemplateIdIsSet() const
{
    return launchTemplateIdIsSet_;
}

void DeleteLaunchTemplatesRequest::unsetlaunchTemplateId()
{
    launchTemplateIdIsSet_ = false;
}

}
}
}
}
}


