

#include "huaweicloud/ecs/v2/model/CreateLaunchTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateLaunchTemplateRequestBody::CreateLaunchTemplateRequestBody()
{
    launchTemplateIsSet_ = false;
    dryRun_ = false;
    dryRunIsSet_ = false;
}

CreateLaunchTemplateRequestBody::~CreateLaunchTemplateRequestBody() = default;

void CreateLaunchTemplateRequestBody::validate()
{
}

web::json::value CreateLaunchTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(launchTemplateIsSet_) {
        val[utility::conversions::to_string_t("launch_template")] = ModelBase::toJson(launchTemplate_);
    }
    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }

    return val;
}
bool CreateLaunchTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("launch_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launch_template"));
        if(!fieldValue.is_null())
        {
            LaunchTemplateOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    return ok;
}


LaunchTemplateOption CreateLaunchTemplateRequestBody::getLaunchTemplate() const
{
    return launchTemplate_;
}

void CreateLaunchTemplateRequestBody::setLaunchTemplate(const LaunchTemplateOption& value)
{
    launchTemplate_ = value;
    launchTemplateIsSet_ = true;
}

bool CreateLaunchTemplateRequestBody::launchTemplateIsSet() const
{
    return launchTemplateIsSet_;
}

void CreateLaunchTemplateRequestBody::unsetlaunchTemplate()
{
    launchTemplateIsSet_ = false;
}

bool CreateLaunchTemplateRequestBody::isDryRun() const
{
    return dryRun_;
}

void CreateLaunchTemplateRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool CreateLaunchTemplateRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void CreateLaunchTemplateRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

}
}
}
}
}


