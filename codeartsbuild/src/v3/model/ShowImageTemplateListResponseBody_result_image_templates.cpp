

#include "huaweicloud/codeartsbuild/v3/model/ShowImageTemplateListResponseBody_result_image_templates.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowImageTemplateListResponseBody_result_image_templates::ShowImageTemplateListResponseBody_result_image_templates()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    organization_ = "";
    organizationIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    imageLabel_ = "";
    imageLabelIsSet_ = false;
    baseImage_ = "";
    baseImageIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

ShowImageTemplateListResponseBody_result_image_templates::~ShowImageTemplateListResponseBody_result_image_templates() = default;

void ShowImageTemplateListResponseBody_result_image_templates::validate()
{
}

web::json::value ShowImageTemplateListResponseBody_result_image_templates::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(organizationIsSet_) {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(organization_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(imageLabelIsSet_) {
        val[utility::conversions::to_string_t("image_label")] = ModelBase::toJson(imageLabel_);
    }
    if(baseImageIsSet_) {
        val[utility::conversions::to_string_t("base_image")] = ModelBase::toJson(baseImage_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ShowImageTemplateListResponseBody_result_image_templates::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string ShowImageTemplateListResponseBody_result_image_templates::getImageId() const
{
    return imageId_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ShowImageTemplateListResponseBody_result_image_templates::getOrganization() const
{
    return organization_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setOrganization(const std::string& value)
{
    organization_ = value;
    organizationIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::organizationIsSet() const
{
    return organizationIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsetorganization()
{
    organizationIsSet_ = false;
}

std::string ShowImageTemplateListResponseBody_result_image_templates::getImageName() const
{
    return imageName_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string ShowImageTemplateListResponseBody_result_image_templates::getImageLabel() const
{
    return imageLabel_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setImageLabel(const std::string& value)
{
    imageLabel_ = value;
    imageLabelIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::imageLabelIsSet() const
{
    return imageLabelIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsetimageLabel()
{
    imageLabelIsSet_ = false;
}

std::string ShowImageTemplateListResponseBody_result_image_templates::getBaseImage() const
{
    return baseImage_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setBaseImage(const std::string& value)
{
    baseImage_ = value;
    baseImageIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::baseImageIsSet() const
{
    return baseImageIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsetbaseImage()
{
    baseImageIsSet_ = false;
}

std::string ShowImageTemplateListResponseBody_result_image_templates::getTitle() const
{
    return title_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::titleIsSet() const
{
    return titleIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsettitle()
{
    titleIsSet_ = false;
}

std::string ShowImageTemplateListResponseBody_result_image_templates::getDescription() const
{
    return description_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowImageTemplateListResponseBody_result_image_templates::getCreateTime() const
{
    return createTime_;
}

void ShowImageTemplateListResponseBody_result_image_templates::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result_image_templates::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowImageTemplateListResponseBody_result_image_templates::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


