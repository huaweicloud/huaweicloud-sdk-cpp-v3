

#include "huaweicloud/eip/v2/model/InsertPublicipInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




InsertPublicipInfo::InsertPublicipInfo()
{
    publicipType_ = "";
    publicipTypeIsSet_ = false;
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

InsertPublicipInfo::~InsertPublicipInfo() = default;

void InsertPublicipInfo::validate()
{
}

web::json::value InsertPublicipInfo::toJson() const
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
bool InsertPublicipInfo::fromJson(const web::json::value& val)
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


std::string InsertPublicipInfo::getPublicipType() const
{
    return publicipType_;
}

void InsertPublicipInfo::setPublicipType(const std::string& value)
{
    publicipType_ = value;
    publicipTypeIsSet_ = true;
}

bool InsertPublicipInfo::publicipTypeIsSet() const
{
    return publicipTypeIsSet_;
}

void InsertPublicipInfo::unsetpublicipType()
{
    publicipTypeIsSet_ = false;
}

std::string InsertPublicipInfo::getPublicipId() const
{
    return publicipId_;
}

void InsertPublicipInfo::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool InsertPublicipInfo::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void InsertPublicipInfo::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


