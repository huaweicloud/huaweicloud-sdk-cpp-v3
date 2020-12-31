

#include "huaweicloud/ecs/model/ChangeServerOsWithCloudInitOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithCloudInitOption::ChangeServerOsWithCloudInitOption()
{
    adminpass_ = "";
    adminpassIsSet_ = false;
    keyname_ = "";
    keynameIsSet_ = false;
    userid_ = "";
    useridIsSet_ = false;
    imageid_ = "";
    imageidIsSet_ = false;
    metadataIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

ChangeServerOsWithCloudInitOption::~ChangeServerOsWithCloudInitOption() = default;

void ChangeServerOsWithCloudInitOption::validate()
{
}

web::json::value ChangeServerOsWithCloudInitOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminpassIsSet_) {
        val[utility::conversions::to_string_t("adminpass")] = ModelBase::toJson(adminpass_);
    }
    if(keynameIsSet_) {
        val[utility::conversions::to_string_t("keyname")] = ModelBase::toJson(keyname_);
    }
    if(useridIsSet_) {
        val[utility::conversions::to_string_t("userid")] = ModelBase::toJson(userid_);
    }
    if(imageidIsSet_) {
        val[utility::conversions::to_string_t("imageid")] = ModelBase::toJson(imageid_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}

bool ChangeServerOsWithCloudInitOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("adminpass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminpass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminpass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ChangeSeversOsMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string ChangeServerOsWithCloudInitOption::getAdminpass() const
{
    return adminpass_;
}

void ChangeServerOsWithCloudInitOption::setAdminpass(const std::string& value)
{
    adminpass_ = value;
    adminpassIsSet_ = true;
}

bool ChangeServerOsWithCloudInitOption::adminpassIsSet() const
{
    return adminpassIsSet_;
}

void ChangeServerOsWithCloudInitOption::unsetadminpass()
{
    adminpassIsSet_ = false;
}

std::string ChangeServerOsWithCloudInitOption::getKeyname() const
{
    return keyname_;
}

void ChangeServerOsWithCloudInitOption::setKeyname(const std::string& value)
{
    keyname_ = value;
    keynameIsSet_ = true;
}

bool ChangeServerOsWithCloudInitOption::keynameIsSet() const
{
    return keynameIsSet_;
}

void ChangeServerOsWithCloudInitOption::unsetkeyname()
{
    keynameIsSet_ = false;
}

std::string ChangeServerOsWithCloudInitOption::getUserid() const
{
    return userid_;
}

void ChangeServerOsWithCloudInitOption::setUserid(const std::string& value)
{
    userid_ = value;
    useridIsSet_ = true;
}

bool ChangeServerOsWithCloudInitOption::useridIsSet() const
{
    return useridIsSet_;
}

void ChangeServerOsWithCloudInitOption::unsetuserid()
{
    useridIsSet_ = false;
}

std::string ChangeServerOsWithCloudInitOption::getImageid() const
{
    return imageid_;
}

void ChangeServerOsWithCloudInitOption::setImageid(const std::string& value)
{
    imageid_ = value;
    imageidIsSet_ = true;
}

bool ChangeServerOsWithCloudInitOption::imageidIsSet() const
{
    return imageidIsSet_;
}

void ChangeServerOsWithCloudInitOption::unsetimageid()
{
    imageidIsSet_ = false;
}

ChangeSeversOsMetadata ChangeServerOsWithCloudInitOption::getMetadata() const
{
    return metadata_;
}

void ChangeServerOsWithCloudInitOption::setMetadata(const ChangeSeversOsMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ChangeServerOsWithCloudInitOption::metadataIsSet() const
{
    return metadataIsSet_;
}

void ChangeServerOsWithCloudInitOption::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string ChangeServerOsWithCloudInitOption::getMode() const
{
    return mode_;
}

void ChangeServerOsWithCloudInitOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ChangeServerOsWithCloudInitOption::modeIsSet() const
{
    return modeIsSet_;
}

void ChangeServerOsWithCloudInitOption::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


