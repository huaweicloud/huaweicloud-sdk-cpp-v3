

#include "huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithoutCloudInitOption::ChangeServerOsWithoutCloudInitOption()
{
    adminpass_ = "";
    adminpassIsSet_ = false;
    keyname_ = "";
    keynameIsSet_ = false;
    userid_ = "";
    useridIsSet_ = false;
    imageid_ = "";
    imageidIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    metadataIsSet_ = false;
}

ChangeServerOsWithoutCloudInitOption::~ChangeServerOsWithoutCloudInitOption() = default;

void ChangeServerOsWithoutCloudInitOption::validate()
{
}

web::json::value ChangeServerOsWithoutCloudInitOption::toJson() const
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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}

bool ChangeServerOsWithoutCloudInitOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ChangeSeversOsMetadataWithoutCloudInitOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}

std::string ChangeServerOsWithoutCloudInitOption::getAdminpass() const
{
    return adminpass_;
}

void ChangeServerOsWithoutCloudInitOption::setAdminpass(const std::string& value)
{
    adminpass_ = value;
    adminpassIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitOption::adminpassIsSet() const
{
    return adminpassIsSet_;
}

void ChangeServerOsWithoutCloudInitOption::unsetadminpass()
{
    adminpassIsSet_ = false;
}

std::string ChangeServerOsWithoutCloudInitOption::getKeyname() const
{
    return keyname_;
}

void ChangeServerOsWithoutCloudInitOption::setKeyname(const std::string& value)
{
    keyname_ = value;
    keynameIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitOption::keynameIsSet() const
{
    return keynameIsSet_;
}

void ChangeServerOsWithoutCloudInitOption::unsetkeyname()
{
    keynameIsSet_ = false;
}

std::string ChangeServerOsWithoutCloudInitOption::getUserid() const
{
    return userid_;
}

void ChangeServerOsWithoutCloudInitOption::setUserid(const std::string& value)
{
    userid_ = value;
    useridIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitOption::useridIsSet() const
{
    return useridIsSet_;
}

void ChangeServerOsWithoutCloudInitOption::unsetuserid()
{
    useridIsSet_ = false;
}

std::string ChangeServerOsWithoutCloudInitOption::getImageid() const
{
    return imageid_;
}

void ChangeServerOsWithoutCloudInitOption::setImageid(const std::string& value)
{
    imageid_ = value;
    imageidIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitOption::imageidIsSet() const
{
    return imageidIsSet_;
}

void ChangeServerOsWithoutCloudInitOption::unsetimageid()
{
    imageidIsSet_ = false;
}

std::string ChangeServerOsWithoutCloudInitOption::getMode() const
{
    return mode_;
}

void ChangeServerOsWithoutCloudInitOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitOption::modeIsSet() const
{
    return modeIsSet_;
}

void ChangeServerOsWithoutCloudInitOption::unsetmode()
{
    modeIsSet_ = false;
}

ChangeSeversOsMetadataWithoutCloudInitOption ChangeServerOsWithoutCloudInitOption::getMetadata() const
{
    return metadata_;
}

void ChangeServerOsWithoutCloudInitOption::setMetadata(const ChangeSeversOsMetadataWithoutCloudInitOption& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitOption::metadataIsSet() const
{
    return metadataIsSet_;
}

void ChangeServerOsWithoutCloudInitOption::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


