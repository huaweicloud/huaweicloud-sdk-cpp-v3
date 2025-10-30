

#include "huaweicloud/lts/v2/model/Log_transfer_detail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Log_transfer_detail::Log_transfer_detail()
{
    obsPeriod_ = 0;
    obsPeriodIsSet_ = false;
    obsPeriodUnit_ = "";
    obsPeriodUnitIsSet_ = false;
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsEncryptedId_ = "";
    obsEncryptedIdIsSet_ = false;
    obsDirPreFixName_ = "";
    obsDirPreFixNameIsSet_ = false;
    obsPrefixName_ = "";
    obsPrefixNameIsSet_ = false;
    obsTimeZone_ = "";
    obsTimeZoneIsSet_ = false;
    obsTimeZoneId_ = "";
    obsTimeZoneIdIsSet_ = false;
    disId_ = "";
    disIdIsSet_ = false;
    disName_ = "";
    disNameIsSet_ = false;
    kafkaId_ = "";
    kafkaIdIsSet_ = false;
    kafkaTopic_ = "";
    kafkaTopicIsSet_ = false;
    obsEpsId_ = "";
    obsEpsIdIsSet_ = false;
    obsEncryptedEnable_ = false;
    obsEncryptedEnableIsSet_ = false;
    tagsIsSet_ = false;
    ltsTagsIsSet_ = false;
    streamTagsIsSet_ = false;
    structFieldsIsSet_ = false;
    invalidFieldValue_ = "";
    invalidFieldValueIsSet_ = false;
}

Log_transfer_detail::~Log_transfer_detail() = default;

void Log_transfer_detail::validate()
{
}

web::json::value Log_transfer_detail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsPeriodIsSet_) {
        val[utility::conversions::to_string_t("obs_period")] = ModelBase::toJson(obsPeriod_);
    }
    if(obsPeriodUnitIsSet_) {
        val[utility::conversions::to_string_t("obs_period_unit")] = ModelBase::toJson(obsPeriodUnit_);
    }
    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(obsEncryptedIdIsSet_) {
        val[utility::conversions::to_string_t("obs_encrypted_id")] = ModelBase::toJson(obsEncryptedId_);
    }
    if(obsDirPreFixNameIsSet_) {
        val[utility::conversions::to_string_t("obs_dir_pre_fix_name")] = ModelBase::toJson(obsDirPreFixName_);
    }
    if(obsPrefixNameIsSet_) {
        val[utility::conversions::to_string_t("obs_prefix_name")] = ModelBase::toJson(obsPrefixName_);
    }
    if(obsTimeZoneIsSet_) {
        val[utility::conversions::to_string_t("obs_time_zone")] = ModelBase::toJson(obsTimeZone_);
    }
    if(obsTimeZoneIdIsSet_) {
        val[utility::conversions::to_string_t("obs_time_zone_id")] = ModelBase::toJson(obsTimeZoneId_);
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
    if(obsEpsIdIsSet_) {
        val[utility::conversions::to_string_t("obs_eps_id")] = ModelBase::toJson(obsEpsId_);
    }
    if(obsEncryptedEnableIsSet_) {
        val[utility::conversions::to_string_t("obs_encrypted_enable")] = ModelBase::toJson(obsEncryptedEnable_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(ltsTagsIsSet_) {
        val[utility::conversions::to_string_t("lts_tags")] = ModelBase::toJson(ltsTags_);
    }
    if(streamTagsIsSet_) {
        val[utility::conversions::to_string_t("stream_tags")] = ModelBase::toJson(streamTags_);
    }
    if(structFieldsIsSet_) {
        val[utility::conversions::to_string_t("struct_fields")] = ModelBase::toJson(structFields_);
    }
    if(invalidFieldValueIsSet_) {
        val[utility::conversions::to_string_t("invalid_field_value")] = ModelBase::toJson(invalidFieldValue_);
    }

    return val;
}
bool Log_transfer_detail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("obs_period_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_period_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPeriodUnit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("obs_encrypted_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_encrypted_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEncryptedId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("obs_prefix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_prefix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPrefixName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("obs_eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEpsId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("struct_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("struct_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStructFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invalid_field_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invalid_field_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvalidFieldValue(refVal);
        }
    }
    return ok;
}


int32_t Log_transfer_detail::getObsPeriod() const
{
    return obsPeriod_;
}

void Log_transfer_detail::setObsPeriod(int32_t value)
{
    obsPeriod_ = value;
    obsPeriodIsSet_ = true;
}

bool Log_transfer_detail::obsPeriodIsSet() const
{
    return obsPeriodIsSet_;
}

void Log_transfer_detail::unsetobsPeriod()
{
    obsPeriodIsSet_ = false;
}

std::string Log_transfer_detail::getObsPeriodUnit() const
{
    return obsPeriodUnit_;
}

void Log_transfer_detail::setObsPeriodUnit(const std::string& value)
{
    obsPeriodUnit_ = value;
    obsPeriodUnitIsSet_ = true;
}

bool Log_transfer_detail::obsPeriodUnitIsSet() const
{
    return obsPeriodUnitIsSet_;
}

void Log_transfer_detail::unsetobsPeriodUnit()
{
    obsPeriodUnitIsSet_ = false;
}

std::string Log_transfer_detail::getObsBucketName() const
{
    return obsBucketName_;
}

void Log_transfer_detail::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool Log_transfer_detail::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void Log_transfer_detail::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string Log_transfer_detail::getObsEncryptedId() const
{
    return obsEncryptedId_;
}

void Log_transfer_detail::setObsEncryptedId(const std::string& value)
{
    obsEncryptedId_ = value;
    obsEncryptedIdIsSet_ = true;
}

bool Log_transfer_detail::obsEncryptedIdIsSet() const
{
    return obsEncryptedIdIsSet_;
}

void Log_transfer_detail::unsetobsEncryptedId()
{
    obsEncryptedIdIsSet_ = false;
}

std::string Log_transfer_detail::getObsDirPreFixName() const
{
    return obsDirPreFixName_;
}

void Log_transfer_detail::setObsDirPreFixName(const std::string& value)
{
    obsDirPreFixName_ = value;
    obsDirPreFixNameIsSet_ = true;
}

bool Log_transfer_detail::obsDirPreFixNameIsSet() const
{
    return obsDirPreFixNameIsSet_;
}

void Log_transfer_detail::unsetobsDirPreFixName()
{
    obsDirPreFixNameIsSet_ = false;
}

std::string Log_transfer_detail::getObsPrefixName() const
{
    return obsPrefixName_;
}

void Log_transfer_detail::setObsPrefixName(const std::string& value)
{
    obsPrefixName_ = value;
    obsPrefixNameIsSet_ = true;
}

bool Log_transfer_detail::obsPrefixNameIsSet() const
{
    return obsPrefixNameIsSet_;
}

void Log_transfer_detail::unsetobsPrefixName()
{
    obsPrefixNameIsSet_ = false;
}

std::string Log_transfer_detail::getObsTimeZone() const
{
    return obsTimeZone_;
}

void Log_transfer_detail::setObsTimeZone(const std::string& value)
{
    obsTimeZone_ = value;
    obsTimeZoneIsSet_ = true;
}

bool Log_transfer_detail::obsTimeZoneIsSet() const
{
    return obsTimeZoneIsSet_;
}

void Log_transfer_detail::unsetobsTimeZone()
{
    obsTimeZoneIsSet_ = false;
}

std::string Log_transfer_detail::getObsTimeZoneId() const
{
    return obsTimeZoneId_;
}

void Log_transfer_detail::setObsTimeZoneId(const std::string& value)
{
    obsTimeZoneId_ = value;
    obsTimeZoneIdIsSet_ = true;
}

bool Log_transfer_detail::obsTimeZoneIdIsSet() const
{
    return obsTimeZoneIdIsSet_;
}

void Log_transfer_detail::unsetobsTimeZoneId()
{
    obsTimeZoneIdIsSet_ = false;
}

std::string Log_transfer_detail::getDisId() const
{
    return disId_;
}

void Log_transfer_detail::setDisId(const std::string& value)
{
    disId_ = value;
    disIdIsSet_ = true;
}

bool Log_transfer_detail::disIdIsSet() const
{
    return disIdIsSet_;
}

void Log_transfer_detail::unsetdisId()
{
    disIdIsSet_ = false;
}

std::string Log_transfer_detail::getDisName() const
{
    return disName_;
}

void Log_transfer_detail::setDisName(const std::string& value)
{
    disName_ = value;
    disNameIsSet_ = true;
}

bool Log_transfer_detail::disNameIsSet() const
{
    return disNameIsSet_;
}

void Log_transfer_detail::unsetdisName()
{
    disNameIsSet_ = false;
}

std::string Log_transfer_detail::getKafkaId() const
{
    return kafkaId_;
}

void Log_transfer_detail::setKafkaId(const std::string& value)
{
    kafkaId_ = value;
    kafkaIdIsSet_ = true;
}

bool Log_transfer_detail::kafkaIdIsSet() const
{
    return kafkaIdIsSet_;
}

void Log_transfer_detail::unsetkafkaId()
{
    kafkaIdIsSet_ = false;
}

std::string Log_transfer_detail::getKafkaTopic() const
{
    return kafkaTopic_;
}

void Log_transfer_detail::setKafkaTopic(const std::string& value)
{
    kafkaTopic_ = value;
    kafkaTopicIsSet_ = true;
}

bool Log_transfer_detail::kafkaTopicIsSet() const
{
    return kafkaTopicIsSet_;
}

void Log_transfer_detail::unsetkafkaTopic()
{
    kafkaTopicIsSet_ = false;
}

std::string Log_transfer_detail::getObsEpsId() const
{
    return obsEpsId_;
}

void Log_transfer_detail::setObsEpsId(const std::string& value)
{
    obsEpsId_ = value;
    obsEpsIdIsSet_ = true;
}

bool Log_transfer_detail::obsEpsIdIsSet() const
{
    return obsEpsIdIsSet_;
}

void Log_transfer_detail::unsetobsEpsId()
{
    obsEpsIdIsSet_ = false;
}

bool Log_transfer_detail::isObsEncryptedEnable() const
{
    return obsEncryptedEnable_;
}

void Log_transfer_detail::setObsEncryptedEnable(bool value)
{
    obsEncryptedEnable_ = value;
    obsEncryptedEnableIsSet_ = true;
}

bool Log_transfer_detail::obsEncryptedEnableIsSet() const
{
    return obsEncryptedEnableIsSet_;
}

void Log_transfer_detail::unsetobsEncryptedEnable()
{
    obsEncryptedEnableIsSet_ = false;
}

std::vector<std::string>& Log_transfer_detail::getTags()
{
    return tags_;
}

void Log_transfer_detail::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Log_transfer_detail::tagsIsSet() const
{
    return tagsIsSet_;
}

void Log_transfer_detail::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<std::string>& Log_transfer_detail::getLtsTags()
{
    return ltsTags_;
}

void Log_transfer_detail::setLtsTags(const std::vector<std::string>& value)
{
    ltsTags_ = value;
    ltsTagsIsSet_ = true;
}

bool Log_transfer_detail::ltsTagsIsSet() const
{
    return ltsTagsIsSet_;
}

void Log_transfer_detail::unsetltsTags()
{
    ltsTagsIsSet_ = false;
}

std::vector<std::string>& Log_transfer_detail::getStreamTags()
{
    return streamTags_;
}

void Log_transfer_detail::setStreamTags(const std::vector<std::string>& value)
{
    streamTags_ = value;
    streamTagsIsSet_ = true;
}

bool Log_transfer_detail::streamTagsIsSet() const
{
    return streamTagsIsSet_;
}

void Log_transfer_detail::unsetstreamTags()
{
    streamTagsIsSet_ = false;
}

std::vector<std::string>& Log_transfer_detail::getStructFields()
{
    return structFields_;
}

void Log_transfer_detail::setStructFields(const std::vector<std::string>& value)
{
    structFields_ = value;
    structFieldsIsSet_ = true;
}

bool Log_transfer_detail::structFieldsIsSet() const
{
    return structFieldsIsSet_;
}

void Log_transfer_detail::unsetstructFields()
{
    structFieldsIsSet_ = false;
}

std::string Log_transfer_detail::getInvalidFieldValue() const
{
    return invalidFieldValue_;
}

void Log_transfer_detail::setInvalidFieldValue(const std::string& value)
{
    invalidFieldValue_ = value;
    invalidFieldValueIsSet_ = true;
}

bool Log_transfer_detail::invalidFieldValueIsSet() const
{
    return invalidFieldValueIsSet_;
}

void Log_transfer_detail::unsetinvalidFieldValue()
{
    invalidFieldValueIsSet_ = false;
}

}
}
}
}
}


