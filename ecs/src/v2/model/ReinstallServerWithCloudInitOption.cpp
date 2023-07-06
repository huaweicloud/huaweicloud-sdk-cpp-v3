

#include "huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallServerWithCloudInitOption::ReinstallServerWithCloudInitOption()
{
    adminpass_ = "";
    adminpassIsSet_ = false;
    keyname_ = "";
    keynameIsSet_ = false;
    userid_ = "";
    useridIsSet_ = false;
    metadataIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

ReinstallServerWithCloudInitOption::~ReinstallServerWithCloudInitOption() = default;

void ReinstallServerWithCloudInitOption::validate()
{
}

web::json::value ReinstallServerWithCloudInitOption::toJson() const
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
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}

bool ReinstallServerWithCloudInitOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ReinstallSeverMetadata refVal;
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

std::string ReinstallServerWithCloudInitOption::getAdminpass() const
{
    return adminpass_;
}

void ReinstallServerWithCloudInitOption::setAdminpass(const std::string& value)
{
    adminpass_ = value;
    adminpassIsSet_ = true;
}

bool ReinstallServerWithCloudInitOption::adminpassIsSet() const
{
    return adminpassIsSet_;
}

void ReinstallServerWithCloudInitOption::unsetadminpass()
{
    adminpassIsSet_ = false;
}

std::string ReinstallServerWithCloudInitOption::getKeyname() const
{
    return keyname_;
}

void ReinstallServerWithCloudInitOption::setKeyname(const std::string& value)
{
    keyname_ = value;
    keynameIsSet_ = true;
}

bool ReinstallServerWithCloudInitOption::keynameIsSet() const
{
    return keynameIsSet_;
}

void ReinstallServerWithCloudInitOption::unsetkeyname()
{
    keynameIsSet_ = false;
}

std::string ReinstallServerWithCloudInitOption::getUserid() const
{
    return userid_;
}

void ReinstallServerWithCloudInitOption::setUserid(const std::string& value)
{
    userid_ = value;
    useridIsSet_ = true;
}

bool ReinstallServerWithCloudInitOption::useridIsSet() const
{
    return useridIsSet_;
}

void ReinstallServerWithCloudInitOption::unsetuserid()
{
    useridIsSet_ = false;
}

ReinstallSeverMetadata ReinstallServerWithCloudInitOption::getMetadata() const
{
    return metadata_;
}

void ReinstallServerWithCloudInitOption::setMetadata(const ReinstallSeverMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ReinstallServerWithCloudInitOption::metadataIsSet() const
{
    return metadataIsSet_;
}

void ReinstallServerWithCloudInitOption::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string ReinstallServerWithCloudInitOption::getMode() const
{
    return mode_;
}

void ReinstallServerWithCloudInitOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ReinstallServerWithCloudInitOption::modeIsSet() const
{
    return modeIsSet_;
}

void ReinstallServerWithCloudInitOption::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


