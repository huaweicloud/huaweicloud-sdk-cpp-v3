

#include "huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallServerWithoutCloudInitOption::ReinstallServerWithoutCloudInitOption()
{
    adminpass_ = "";
    adminpassIsSet_ = false;
    keyname_ = "";
    keynameIsSet_ = false;
    userid_ = "";
    useridIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    metadataIsSet_ = false;
}

ReinstallServerWithoutCloudInitOption::~ReinstallServerWithoutCloudInitOption() = default;

void ReinstallServerWithoutCloudInitOption::validate()
{
}

web::json::value ReinstallServerWithoutCloudInitOption::toJson() const
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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}

bool ReinstallServerWithoutCloudInitOption::fromJson(const web::json::value& val)
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
            ReinstallSeverMetadataWithoutCloudInitOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string ReinstallServerWithoutCloudInitOption::getAdminpass() const
{
    return adminpass_;
}

void ReinstallServerWithoutCloudInitOption::setAdminpass(const std::string& value)
{
    adminpass_ = value;
    adminpassIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitOption::adminpassIsSet() const
{
    return adminpassIsSet_;
}

void ReinstallServerWithoutCloudInitOption::unsetadminpass()
{
    adminpassIsSet_ = false;
}

std::string ReinstallServerWithoutCloudInitOption::getKeyname() const
{
    return keyname_;
}

void ReinstallServerWithoutCloudInitOption::setKeyname(const std::string& value)
{
    keyname_ = value;
    keynameIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitOption::keynameIsSet() const
{
    return keynameIsSet_;
}

void ReinstallServerWithoutCloudInitOption::unsetkeyname()
{
    keynameIsSet_ = false;
}

std::string ReinstallServerWithoutCloudInitOption::getUserid() const
{
    return userid_;
}

void ReinstallServerWithoutCloudInitOption::setUserid(const std::string& value)
{
    userid_ = value;
    useridIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitOption::useridIsSet() const
{
    return useridIsSet_;
}

void ReinstallServerWithoutCloudInitOption::unsetuserid()
{
    useridIsSet_ = false;
}

std::string ReinstallServerWithoutCloudInitOption::getMode() const
{
    return mode_;
}

void ReinstallServerWithoutCloudInitOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitOption::modeIsSet() const
{
    return modeIsSet_;
}

void ReinstallServerWithoutCloudInitOption::unsetmode()
{
    modeIsSet_ = false;
}

ReinstallSeverMetadataWithoutCloudInitOption ReinstallServerWithoutCloudInitOption::getMetadata() const
{
    return metadata_;
}

void ReinstallServerWithoutCloudInitOption::setMetadata(const ReinstallSeverMetadataWithoutCloudInitOption& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitOption::metadataIsSet() const
{
    return metadataIsSet_;
}

void ReinstallServerWithoutCloudInitOption::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


