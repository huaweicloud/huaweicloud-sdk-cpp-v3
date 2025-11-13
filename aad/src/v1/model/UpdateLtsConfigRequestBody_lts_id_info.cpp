

#include "huaweicloud/aad/v1/model/UpdateLtsConfigRequestBody_lts_id_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateLtsConfigRequestBody_lts_id_info::UpdateLtsConfigRequestBody_lts_id_info()
{
    epsId_ = "";
    epsIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsAttackStreamId_ = "";
    ltsAttackStreamIdIsSet_ = false;
}

UpdateLtsConfigRequestBody_lts_id_info::~UpdateLtsConfigRequestBody_lts_id_info() = default;

void UpdateLtsConfigRequestBody_lts_id_info::validate()
{
}

web::json::value UpdateLtsConfigRequestBody_lts_id_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsAttackStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_attack_stream_id")] = ModelBase::toJson(ltsAttackStreamId_);
    }

    return val;
}
bool UpdateLtsConfigRequestBody_lts_id_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_attack_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_attack_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsAttackStreamId(refVal);
        }
    }
    return ok;
}


std::string UpdateLtsConfigRequestBody_lts_id_info::getEpsId() const
{
    return epsId_;
}

void UpdateLtsConfigRequestBody_lts_id_info::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_id_info::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void UpdateLtsConfigRequestBody_lts_id_info::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string UpdateLtsConfigRequestBody_lts_id_info::getRegion() const
{
    return region_;
}

void UpdateLtsConfigRequestBody_lts_id_info::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_id_info::regionIsSet() const
{
    return regionIsSet_;
}

void UpdateLtsConfigRequestBody_lts_id_info::unsetregion()
{
    regionIsSet_ = false;
}

std::string UpdateLtsConfigRequestBody_lts_id_info::getLtsGroupId() const
{
    return ltsGroupId_;
}

void UpdateLtsConfigRequestBody_lts_id_info::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_id_info::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void UpdateLtsConfigRequestBody_lts_id_info::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string UpdateLtsConfigRequestBody_lts_id_info::getLtsAttackStreamId() const
{
    return ltsAttackStreamId_;
}

void UpdateLtsConfigRequestBody_lts_id_info::setLtsAttackStreamId(const std::string& value)
{
    ltsAttackStreamId_ = value;
    ltsAttackStreamIdIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_id_info::ltsAttackStreamIdIsSet() const
{
    return ltsAttackStreamIdIsSet_;
}

void UpdateLtsConfigRequestBody_lts_id_info::unsetltsAttackStreamId()
{
    ltsAttackStreamIdIsSet_ = false;
}

}
}
}
}
}


