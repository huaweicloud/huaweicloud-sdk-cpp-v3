

#include "huaweicloud/antiddos/v1/model/LtsConfigRequestAndResponse_lts_id_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




LtsConfigRequestAndResponse_lts_id_info::LtsConfigRequestAndResponse_lts_id_info()
{
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsAttackStreamId_ = "";
    ltsAttackStreamIdIsSet_ = false;
}

LtsConfigRequestAndResponse_lts_id_info::~LtsConfigRequestAndResponse_lts_id_info() = default;

void LtsConfigRequestAndResponse_lts_id_info::validate()
{
}

web::json::value LtsConfigRequestAndResponse_lts_id_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsAttackStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_attack_stream_id")] = ModelBase::toJson(ltsAttackStreamId_);
    }

    return val;
}
bool LtsConfigRequestAndResponse_lts_id_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string LtsConfigRequestAndResponse_lts_id_info::getLtsGroupId() const
{
    return ltsGroupId_;
}

void LtsConfigRequestAndResponse_lts_id_info::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool LtsConfigRequestAndResponse_lts_id_info::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void LtsConfigRequestAndResponse_lts_id_info::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string LtsConfigRequestAndResponse_lts_id_info::getLtsAttackStreamId() const
{
    return ltsAttackStreamId_;
}

void LtsConfigRequestAndResponse_lts_id_info::setLtsAttackStreamId(const std::string& value)
{
    ltsAttackStreamId_ = value;
    ltsAttackStreamIdIsSet_ = true;
}

bool LtsConfigRequestAndResponse_lts_id_info::ltsAttackStreamIdIsSet() const
{
    return ltsAttackStreamIdIsSet_;
}

void LtsConfigRequestAndResponse_lts_id_info::unsetltsAttackStreamId()
{
    ltsAttackStreamIdIsSet_ = false;
}

}
}
}
}
}


