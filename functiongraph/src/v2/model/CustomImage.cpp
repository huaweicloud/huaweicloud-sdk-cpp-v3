

#include "huaweicloud/functiongraph/v2/model/CustomImage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CustomImage::CustomImage()
{
    enabled_ = false;
    enabledIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    args_ = "";
    argsIsSet_ = false;
    workingDir_ = "";
    workingDirIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    gid_ = "";
    gidIsSet_ = false;
    isPublic_ = false;
    isPublicIsSet_ = false;
}

CustomImage::~CustomImage() = default;

void CustomImage::validate()
{
}

web::json::value CustomImage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(argsIsSet_) {
        val[utility::conversions::to_string_t("args")] = ModelBase::toJson(args_);
    }
    if(workingDirIsSet_) {
        val[utility::conversions::to_string_t("working_dir")] = ModelBase::toJson(workingDir_);
    }
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(gidIsSet_) {
        val[utility::conversions::to_string_t("gid")] = ModelBase::toJson(gid_);
    }
    if(isPublicIsSet_) {
        val[utility::conversions::to_string_t("is_public")] = ModelBase::toJson(isPublic_);
    }

    return val;
}
bool CustomImage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("args"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("working_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("working_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkingDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublic(refVal);
        }
    }
    return ok;
}


bool CustomImage::isEnabled() const
{
    return enabled_;
}

void CustomImage::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool CustomImage::enabledIsSet() const
{
    return enabledIsSet_;
}

void CustomImage::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string CustomImage::getImage() const
{
    return image_;
}

void CustomImage::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool CustomImage::imageIsSet() const
{
    return imageIsSet_;
}

void CustomImage::unsetimage()
{
    imageIsSet_ = false;
}

std::string CustomImage::getCommand() const
{
    return command_;
}

void CustomImage::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool CustomImage::commandIsSet() const
{
    return commandIsSet_;
}

void CustomImage::unsetcommand()
{
    commandIsSet_ = false;
}

std::string CustomImage::getArgs() const
{
    return args_;
}

void CustomImage::setArgs(const std::string& value)
{
    args_ = value;
    argsIsSet_ = true;
}

bool CustomImage::argsIsSet() const
{
    return argsIsSet_;
}

void CustomImage::unsetargs()
{
    argsIsSet_ = false;
}

std::string CustomImage::getWorkingDir() const
{
    return workingDir_;
}

void CustomImage::setWorkingDir(const std::string& value)
{
    workingDir_ = value;
    workingDirIsSet_ = true;
}

bool CustomImage::workingDirIsSet() const
{
    return workingDirIsSet_;
}

void CustomImage::unsetworkingDir()
{
    workingDirIsSet_ = false;
}

std::string CustomImage::getUid() const
{
    return uid_;
}

void CustomImage::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool CustomImage::uidIsSet() const
{
    return uidIsSet_;
}

void CustomImage::unsetuid()
{
    uidIsSet_ = false;
}

std::string CustomImage::getGid() const
{
    return gid_;
}

void CustomImage::setGid(const std::string& value)
{
    gid_ = value;
    gidIsSet_ = true;
}

bool CustomImage::gidIsSet() const
{
    return gidIsSet_;
}

void CustomImage::unsetgid()
{
    gidIsSet_ = false;
}

bool CustomImage::isIsPublic() const
{
    return isPublic_;
}

void CustomImage::setIsPublic(bool value)
{
    isPublic_ = value;
    isPublicIsSet_ = true;
}

bool CustomImage::isPublicIsSet() const
{
    return isPublicIsSet_;
}

void CustomImage::unsetisPublic()
{
    isPublicIsSet_ = false;
}

}
}
}
}
}


