

#include "huaweicloud/lts/v2/model/TransferDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TransferDetail::TransferDetail()
{
    obsPeriod_ = 0;
    obsPeriodIsSet_ = false;
    obsEncryptedId_ = "";
    obsEncryptedIdIsSet_ = false;
    obsPrefixName_ = "";
    obsPrefixNameIsSet_ = false;
    obsPeriodUnit_ = "";
    obsPeriodUnitIsSet_ = false;
    obsTransferPath_ = "";
    obsTransferPathIsSet_ = false;
    obsEpsId_ = "";
    obsEpsIdIsSet_ = false;
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsEncryptedEnable_ = false;
    obsEncryptedEnableIsSet_ = false;
    obsDirPreFixName_ = "";
    obsDirPreFixNameIsSet_ = false;
    disId_ = "";
    disIdIsSet_ = false;
    disName_ = "";
    disNameIsSet_ = false;
    kafkaId_ = "";
    kafkaIdIsSet_ = false;
    kafkaTopic_ = "";
    kafkaTopicIsSet_ = false;
    obsTimeZone_ = "";
    obsTimeZoneIsSet_ = false;
    obsTimeZoneId_ = "";
    obsTimeZoneIdIsSet_ = false;
    tagsIsSet_ = false;
}

TransferDetail::~TransferDetail() = default;

void TransferDetail::validate()
{
}

web::json::value TransferDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsPeriodIsSet_) {
        val[utility::conversions::to_string_t("obs_period")] = ModelBase::toJson(obsPeriod_);
    }
    if(obsEncryptedIdIsSet_) {
        val[utility::conversions::to_string_t("obs_encrypted_id")] = ModelBase::toJson(obsEncryptedId_);
    }
    if(obsPrefixNameIsSet_) {
        val[utility::conversions::to_string_t("obs_prefix_name")] = ModelBase::toJson(obsPrefixName_);
    }
    if(obsPeriodUnitIsSet_) {
        val[utility::conversions::to_string_t("obs_period_unit")] = ModelBase::toJson(obsPeriodUnit_);
    }
    if(obsTransferPathIsSet_) {
        val[utility::conversions::to_string_t("obs_transfer_path")] = ModelBase::toJson(obsTransferPath_);
    }
    if(obsEpsIdIsSet_) {
        val[utility::conversions::to_string_t("obs_eps_id")] = ModelBase::toJson(obsEpsId_);
    }
    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(obsEncryptedEnableIsSet_) {
        val[utility::conversions::to_string_t("obs_encrypted_enable")] = ModelBase::toJson(obsEncryptedEnable_);
    }
    if(obsDirPreFixNameIsSet_) {
        val[utility::conversions::to_string_t("obs_dir_pre_fix_name")] = ModelBase::toJson(obsDirPreFixName_);
    }
    if(disIdIsSet_) {
        val[utility::conversions::to_string_t("dis_id")] = ModelBase::toJson(disId_);
    }
    if(disNameIsSet_) {
        val[utility::conversions::to_string_t("dis_name")] = ModelBase::toJson(disName_);
    }
    if(kafkaIdIsSet_) {
        val[utility::conversions::to_string_t("kafka_id")] = ModelBase::toJson(kafkaId_);
    }
    if(kafkaTopicIsSet_) {
        val[utility::conversions::to_string_t("kafka_topic")] = ModelBase::toJson(kafkaTopic_);
    }
    if(obsTimeZoneIsSet_) {
        val[utility::conversions::to_string_t("obs_time_zone")] = ModelBase::toJson(obsTimeZone_);
    }
    if(obsTimeZoneIdIsSet_) {
        val[utility::conversions::to_string_t("obs_time_zone_id")] = ModelBase::toJson(obsTimeZoneId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool TransferDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_encrypted_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_encrypted_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEncryptedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_prefix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_prefix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPrefixName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_period_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_period_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPeriodUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_transfer_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_transfer_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsTransferPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_encrypted_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_encrypted_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEncryptedEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_dir_pre_fix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_dir_pre_fix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsDirPreFixName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dis_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dis_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dis_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dis_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_time_zone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_time_zone_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsTimeZoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


int32_t TransferDetail::getObsPeriod() const
{
    return obsPeriod_;
}

void TransferDetail::setObsPeriod(int32_t value)
{
    obsPeriod_ = value;
    obsPeriodIsSet_ = true;
}

bool TransferDetail::obsPeriodIsSet() const
{
    return obsPeriodIsSet_;
}

void TransferDetail::unsetobsPeriod()
{
    obsPeriodIsSet_ = false;
}

std::string TransferDetail::getObsEncryptedId() const
{
    return obsEncryptedId_;
}

void TransferDetail::setObsEncryptedId(const std::string& value)
{
    obsEncryptedId_ = value;
    obsEncryptedIdIsSet_ = true;
}

bool TransferDetail::obsEncryptedIdIsSet() const
{
    return obsEncryptedIdIsSet_;
}

void TransferDetail::unsetobsEncryptedId()
{
    obsEncryptedIdIsSet_ = false;
}

std::string TransferDetail::getObsPrefixName() const
{
    return obsPrefixName_;
}

void TransferDetail::setObsPrefixName(const std::string& value)
{
    obsPrefixName_ = value;
    obsPrefixNameIsSet_ = true;
}

bool TransferDetail::obsPrefixNameIsSet() const
{
    return obsPrefixNameIsSet_;
}

void TransferDetail::unsetobsPrefixName()
{
    obsPrefixNameIsSet_ = false;
}

std::string TransferDetail::getObsPeriodUnit() const
{
    return obsPeriodUnit_;
}

void TransferDetail::setObsPeriodUnit(const std::string& value)
{
    obsPeriodUnit_ = value;
    obsPeriodUnitIsSet_ = true;
}

bool TransferDetail::obsPeriodUnitIsSet() const
{
    return obsPeriodUnitIsSet_;
}

void TransferDetail::unsetobsPeriodUnit()
{
    obsPeriodUnitIsSet_ = false;
}

std::string TransferDetail::getObsTransferPath() const
{
    return obsTransferPath_;
}

void TransferDetail::setObsTransferPath(const std::string& value)
{
    obsTransferPath_ = value;
    obsTransferPathIsSet_ = true;
}

bool TransferDetail::obsTransferPathIsSet() const
{
    return obsTransferPathIsSet_;
}

void TransferDetail::unsetobsTransferPath()
{
    obsTransferPathIsSet_ = false;
}

std::string TransferDetail::getObsEpsId() const
{
    return obsEpsId_;
}

void TransferDetail::setObsEpsId(const std::string& value)
{
    obsEpsId_ = value;
    obsEpsIdIsSet_ = true;
}

bool TransferDetail::obsEpsIdIsSet() const
{
    return obsEpsIdIsSet_;
}

void TransferDetail::unsetobsEpsId()
{
    obsEpsIdIsSet_ = false;
}

std::string TransferDetail::getObsBucketName() const
{
    return obsBucketName_;
}

void TransferDetail::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool TransferDetail::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void TransferDetail::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

bool TransferDetail::isObsEncryptedEnable() const
{
    return obsEncryptedEnable_;
}

void TransferDetail::setObsEncryptedEnable(bool value)
{
    obsEncryptedEnable_ = value;
    obsEncryptedEnableIsSet_ = true;
}

bool TransferDetail::obsEncryptedEnableIsSet() const
{
    return obsEncryptedEnableIsSet_;
}

void TransferDetail::unsetobsEncryptedEnable()
{
    obsEncryptedEnableIsSet_ = false;
}

std::string TransferDetail::getObsDirPreFixName() const
{
    return obsDirPreFixName_;
}

void TransferDetail::setObsDirPreFixName(const std::string& value)
{
    obsDirPreFixName_ = value;
    obsDirPreFixNameIsSet_ = true;
}

bool TransferDetail::obsDirPreFixNameIsSet() const
{
    return obsDirPreFixNameIsSet_;
}

void TransferDetail::unsetobsDirPreFixName()
{
    obsDirPreFixNameIsSet_ = false;
}

std::string TransferDetail::getDisId() const
{
    return disId_;
}

void TransferDetail::setDisId(const std::string& value)
{
    disId_ = value;
    disIdIsSet_ = true;
}

bool TransferDetail::disIdIsSet() const
{
    return disIdIsSet_;
}

void TransferDetail::unsetdisId()
{
    disIdIsSet_ = false;
}

std::string TransferDetail::getDisName() const
{
    return disName_;
}

void TransferDetail::setDisName(const std::string& value)
{
    disName_ = value;
    disNameIsSet_ = true;
}

bool TransferDetail::disNameIsSet() const
{
    return disNameIsSet_;
}

void TransferDetail::unsetdisName()
{
    disNameIsSet_ = false;
}

std::string TransferDetail::getKafkaId() const
{
    return kafkaId_;
}

void TransferDetail::setKafkaId(const std::string& value)
{
    kafkaId_ = value;
    kafkaIdIsSet_ = true;
}

bool TransferDetail::kafkaIdIsSet() const
{
    return kafkaIdIsSet_;
}

void TransferDetail::unsetkafkaId()
{
    kafkaIdIsSet_ = false;
}

std::string TransferDetail::getKafkaTopic() const
{
    return kafkaTopic_;
}

void TransferDetail::setKafkaTopic(const std::string& value)
{
    kafkaTopic_ = value;
    kafkaTopicIsSet_ = true;
}

bool TransferDetail::kafkaTopicIsSet() const
{
    return kafkaTopicIsSet_;
}

void TransferDetail::unsetkafkaTopic()
{
    kafkaTopicIsSet_ = false;
}

std::string TransferDetail::getObsTimeZone() const
{
    return obsTimeZone_;
}

void TransferDetail::setObsTimeZone(const std::string& value)
{
    obsTimeZone_ = value;
    obsTimeZoneIsSet_ = true;
}

bool TransferDetail::obsTimeZoneIsSet() const
{
    return obsTimeZoneIsSet_;
}

void TransferDetail::unsetobsTimeZone()
{
    obsTimeZoneIsSet_ = false;
}

std::string TransferDetail::getObsTimeZoneId() const
{
    return obsTimeZoneId_;
}

void TransferDetail::setObsTimeZoneId(const std::string& value)
{
    obsTimeZoneId_ = value;
    obsTimeZoneIdIsSet_ = true;
}

bool TransferDetail::obsTimeZoneIdIsSet() const
{
    return obsTimeZoneIdIsSet_;
}

void TransferDetail::unsetobsTimeZoneId()
{
    obsTimeZoneIdIsSet_ = false;
}

std::vector<std::string>& TransferDetail::getTags()
{
    return tags_;
}

void TransferDetail::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TransferDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void TransferDetail::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


