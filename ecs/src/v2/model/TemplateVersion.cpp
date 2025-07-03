

#include "huaweicloud/ecs/v2/model/TemplateVersion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateVersion::TemplateVersion()
{
    templateDataIsSet_ = false;
    versionNumber_ = 0;
    versionNumberIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    launchTemplateId_ = "";
    launchTemplateIdIsSet_ = false;
}

TemplateVersion::~TemplateVersion() = default;

void TemplateVersion::validate()
{
}

web::json::value TemplateVersion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateDataIsSet_) {
        val[utility::conversions::to_string_t("template_data")] = ModelBase::toJson(templateData_);
    }
    if(versionNumberIsSet_) {
        val[utility::conversions::to_string_t("version_number")] = ModelBase::toJson(versionNumber_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(launchTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("launch_template_id")] = ModelBase::toJson(launchTemplateId_);
    }

    return val;
}
bool TemplateVersion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_data"));
        if(!fieldValue.is_null())
        {
            TemplateData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
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


TemplateData TemplateVersion::getTemplateData() const
{
    return templateData_;
}

void TemplateVersion::setTemplateData(const TemplateData& value)
{
    templateData_ = value;
    templateDataIsSet_ = true;
}

bool TemplateVersion::templateDataIsSet() const
{
    return templateDataIsSet_;
}

void TemplateVersion::unsettemplateData()
{
    templateDataIsSet_ = false;
}

int32_t TemplateVersion::getVersionNumber() const
{
    return versionNumber_;
}

void TemplateVersion::setVersionNumber(int32_t value)
{
    versionNumber_ = value;
    versionNumberIsSet_ = true;
}

bool TemplateVersion::versionNumberIsSet() const
{
    return versionNumberIsSet_;
}

void TemplateVersion::unsetversionNumber()
{
    versionNumberIsSet_ = false;
}

std::string TemplateVersion::getVersionId() const
{
    return versionId_;
}

void TemplateVersion::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool TemplateVersion::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void TemplateVersion::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string TemplateVersion::getVersionDescription() const
{
    return versionDescription_;
}

void TemplateVersion::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool TemplateVersion::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void TemplateVersion::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

std::string TemplateVersion::getCreatedAt() const
{
    return createdAt_;
}

void TemplateVersion::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool TemplateVersion::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void TemplateVersion::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string TemplateVersion::getLaunchTemplateId() const
{
    return launchTemplateId_;
}

void TemplateVersion::setLaunchTemplateId(const std::string& value)
{
    launchTemplateId_ = value;
    launchTemplateIdIsSet_ = true;
}

bool TemplateVersion::launchTemplateIdIsSet() const
{
    return launchTemplateIdIsSet_;
}

void TemplateVersion::unsetlaunchTemplateId()
{
    launchTemplateIdIsSet_ = false;
}

}
}
}
}
}


