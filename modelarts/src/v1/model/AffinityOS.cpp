

#include "huaweicloud/modelarts/v1/model/AffinityOS.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AffinityOS::AffinityOS()
{
    name_ = "";
    nameIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    preferred_ = false;
    preferredIsSet_ = false;
    eos_ = false;
    eosIsSet_ = false;
    offline_ = false;
    offlineIsSet_ = false;
}

AffinityOS::~AffinityOS() = default;

void AffinityOS::validate()
{
}

web::json::value AffinityOS::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("imageId")] = ModelBase::toJson(imageId_);
    }
    if(preferredIsSet_) {
        val[utility::conversions::to_string_t("preferred")] = ModelBase::toJson(preferred_);
    }
    if(eosIsSet_) {
        val[utility::conversions::to_string_t("eos")] = ModelBase::toJson(eos_);
    }
    if(offlineIsSet_) {
        val[utility::conversions::to_string_t("offline")] = ModelBase::toJson(offline_);
    }

    return val;
}
bool AffinityOS::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preferred"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preferred"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreferred(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eos"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offline"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffline(refVal);
        }
    }
    return ok;
}


std::string AffinityOS::getName() const
{
    return name_;
}

void AffinityOS::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AffinityOS::nameIsSet() const
{
    return nameIsSet_;
}

void AffinityOS::unsetname()
{
    nameIsSet_ = false;
}

std::string AffinityOS::getImageId() const
{
    return imageId_;
}

void AffinityOS::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool AffinityOS::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void AffinityOS::unsetimageId()
{
    imageIdIsSet_ = false;
}

bool AffinityOS::isPreferred() const
{
    return preferred_;
}

void AffinityOS::setPreferred(bool value)
{
    preferred_ = value;
    preferredIsSet_ = true;
}

bool AffinityOS::preferredIsSet() const
{
    return preferredIsSet_;
}

void AffinityOS::unsetpreferred()
{
    preferredIsSet_ = false;
}

bool AffinityOS::isEos() const
{
    return eos_;
}

void AffinityOS::setEos(bool value)
{
    eos_ = value;
    eosIsSet_ = true;
}

bool AffinityOS::eosIsSet() const
{
    return eosIsSet_;
}

void AffinityOS::unseteos()
{
    eosIsSet_ = false;
}

bool AffinityOS::isOffline() const
{
    return offline_;
}

void AffinityOS::setOffline(bool value)
{
    offline_ = value;
    offlineIsSet_ = true;
}

bool AffinityOS::offlineIsSet() const
{
    return offlineIsSet_;
}

void AffinityOS::unsetoffline()
{
    offlineIsSet_ = false;
}

}
}
}
}
}


