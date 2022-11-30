

#include "huaweicloud/eip/v2/model/RemovePublicipInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




RemovePublicipInfo::RemovePublicipInfo()
{
    publicipType_ = "";
    publicipTypeIsSet_ = false;
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

RemovePublicipInfo::~RemovePublicipInfo() = default;

void RemovePublicipInfo::validate()
{
}

web::json::value RemovePublicipInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipTypeIsSet_) {
        val[utility::conversions::to_string_t("publicip_type")] = ModelBase::toJson(publicipType_);
    }
    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}

bool RemovePublicipInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    return ok;
}


std::string RemovePublicipInfo::getPublicipType() const
{
    return publicipType_;
}

void RemovePublicipInfo::setPublicipType(const std::string& value)
{
    publicipType_ = value;
    publicipTypeIsSet_ = true;
}

bool RemovePublicipInfo::publicipTypeIsSet() const
{
    return publicipTypeIsSet_;
}

void RemovePublicipInfo::unsetpublicipType()
{
    publicipTypeIsSet_ = false;
}

std::string RemovePublicipInfo::getPublicipId() const
{
    return publicipId_;
}

void RemovePublicipInfo::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool RemovePublicipInfo::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void RemovePublicipInfo::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


