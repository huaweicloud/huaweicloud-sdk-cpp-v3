

#include "huaweicloud/lts/v2/model/CreateLogDumpObsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogDumpObsRequestBody::CreateLogDumpObsRequestBody()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamIdsIsSet_ = false;
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    storageFormat_ = "";
    storageFormatIsSet_ = false;
    switchOn_ = false;
    switchOnIsSet_ = false;
    prefixName_ = "";
    prefixNameIsSet_ = false;
    dirPrefixName_ = "";
    dirPrefixNameIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
    periodUnit_ = "";
    periodUnitIsSet_ = false;
}

CreateLogDumpObsRequestBody::~CreateLogDumpObsRequestBody() = default;

void CreateLogDumpObsRequestBody::validate()
{
}

web::json::value CreateLogDumpObsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdsIsSet_) {
        val[utility::conversions::to_string_t("log_stream_ids")] = ModelBase::toJson(logStreamIds_);
    }
    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(storageFormatIsSet_) {
        val[utility::conversions::to_string_t("storage_format")] = ModelBase::toJson(storageFormat_);
    }
    if(switchOnIsSet_) {
        val[utility::conversions::to_string_t("switch_on")] = ModelBase::toJson(switchOn_);
    }
    if(prefixNameIsSet_) {
        val[utility::conversions::to_string_t("prefix_name")] = ModelBase::toJson(prefixName_);
    }
    if(dirPrefixNameIsSet_) {
        val[utility::conversions::to_string_t("dir_prefix_name")] = ModelBase::toJson(dirPrefixName_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(periodUnitIsSet_) {
        val[utility::conversions::to_string_t("period_unit")] = ModelBase::toJson(periodUnit_);
    }

    return val;
}

bool CreateLogDumpObsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switch_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_on"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefixName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dir_prefix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dir_prefix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirPrefixName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodUnit(refVal);
        }
    }
    return ok;
}

std::string CreateLogDumpObsRequestBody::getLogGroupId() const
{
    return logGroupId_;
}

void CreateLogDumpObsRequestBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateLogDumpObsRequestBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::vector<std::string>& CreateLogDumpObsRequestBody::getLogStreamIds()
{
    return logStreamIds_;
}

void CreateLogDumpObsRequestBody::setLogStreamIds(const std::vector<std::string>& value)
{
    logStreamIds_ = value;
    logStreamIdsIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::logStreamIdsIsSet() const
{
    return logStreamIdsIsSet_;
}

void CreateLogDumpObsRequestBody::unsetlogStreamIds()
{
    logStreamIdsIsSet_ = false;
}

std::string CreateLogDumpObsRequestBody::getObsBucketName() const
{
    return obsBucketName_;
}

void CreateLogDumpObsRequestBody::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void CreateLogDumpObsRequestBody::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string CreateLogDumpObsRequestBody::getType() const
{
    return type_;
}

void CreateLogDumpObsRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateLogDumpObsRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateLogDumpObsRequestBody::getStorageFormat() const
{
    return storageFormat_;
}

void CreateLogDumpObsRequestBody::setStorageFormat(const std::string& value)
{
    storageFormat_ = value;
    storageFormatIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::storageFormatIsSet() const
{
    return storageFormatIsSet_;
}

void CreateLogDumpObsRequestBody::unsetstorageFormat()
{
    storageFormatIsSet_ = false;
}

bool CreateLogDumpObsRequestBody::isSwitchOn() const
{
    return switchOn_;
}

void CreateLogDumpObsRequestBody::setSwitchOn(bool value)
{
    switchOn_ = value;
    switchOnIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::switchOnIsSet() const
{
    return switchOnIsSet_;
}

void CreateLogDumpObsRequestBody::unsetswitchOn()
{
    switchOnIsSet_ = false;
}

std::string CreateLogDumpObsRequestBody::getPrefixName() const
{
    return prefixName_;
}

void CreateLogDumpObsRequestBody::setPrefixName(const std::string& value)
{
    prefixName_ = value;
    prefixNameIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::prefixNameIsSet() const
{
    return prefixNameIsSet_;
}

void CreateLogDumpObsRequestBody::unsetprefixName()
{
    prefixNameIsSet_ = false;
}

std::string CreateLogDumpObsRequestBody::getDirPrefixName() const
{
    return dirPrefixName_;
}

void CreateLogDumpObsRequestBody::setDirPrefixName(const std::string& value)
{
    dirPrefixName_ = value;
    dirPrefixNameIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::dirPrefixNameIsSet() const
{
    return dirPrefixNameIsSet_;
}

void CreateLogDumpObsRequestBody::unsetdirPrefixName()
{
    dirPrefixNameIsSet_ = false;
}

int32_t CreateLogDumpObsRequestBody::getPeriod() const
{
    return period_;
}

void CreateLogDumpObsRequestBody::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::periodIsSet() const
{
    return periodIsSet_;
}

void CreateLogDumpObsRequestBody::unsetperiod()
{
    periodIsSet_ = false;
}

std::string CreateLogDumpObsRequestBody::getPeriodUnit() const
{
    return periodUnit_;
}

void CreateLogDumpObsRequestBody::setPeriodUnit(const std::string& value)
{
    periodUnit_ = value;
    periodUnitIsSet_ = true;
}

bool CreateLogDumpObsRequestBody::periodUnitIsSet() const
{
    return periodUnitIsSet_;
}

void CreateLogDumpObsRequestBody::unsetperiodUnit()
{
    periodUnitIsSet_ = false;
}

}
}
}
}
}


