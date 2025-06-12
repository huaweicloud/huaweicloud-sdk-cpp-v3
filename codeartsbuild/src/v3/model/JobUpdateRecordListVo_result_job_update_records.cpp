

#include "huaweicloud/codeartsbuild/v3/model/JobUpdateRecordListVo_result_job_update_records.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobUpdateRecordListVo_result_job_update_records::JobUpdateRecordListVo_result_job_update_records()
{
    id_ = "";
    idIsSet_ = false;
    updateNumber_ = 0;
    updateNumberIsSet_ = false;
    updateType_ = "";
    updateTypeIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
}

JobUpdateRecordListVo_result_job_update_records::~JobUpdateRecordListVo_result_job_update_records() = default;

void JobUpdateRecordListVo_result_job_update_records::validate()
{
}

web::json::value JobUpdateRecordListVo_result_job_update_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(updateNumberIsSet_) {
        val[utility::conversions::to_string_t("update_number")] = ModelBase::toJson(updateNumber_);
    }
    if(updateTypeIsSet_) {
        val[utility::conversions::to_string_t("update_type")] = ModelBase::toJson(updateType_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool JobUpdateRecordListVo_result_job_update_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string JobUpdateRecordListVo_result_job_update_records::getId() const
{
    return id_;
}

void JobUpdateRecordListVo_result_job_update_records::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobUpdateRecordListVo_result_job_update_records::idIsSet() const
{
    return idIsSet_;
}

void JobUpdateRecordListVo_result_job_update_records::unsetid()
{
    idIsSet_ = false;
}

int32_t JobUpdateRecordListVo_result_job_update_records::getUpdateNumber() const
{
    return updateNumber_;
}

void JobUpdateRecordListVo_result_job_update_records::setUpdateNumber(int32_t value)
{
    updateNumber_ = value;
    updateNumberIsSet_ = true;
}

bool JobUpdateRecordListVo_result_job_update_records::updateNumberIsSet() const
{
    return updateNumberIsSet_;
}

void JobUpdateRecordListVo_result_job_update_records::unsetupdateNumber()
{
    updateNumberIsSet_ = false;
}

std::string JobUpdateRecordListVo_result_job_update_records::getUpdateType() const
{
    return updateType_;
}

void JobUpdateRecordListVo_result_job_update_records::setUpdateType(const std::string& value)
{
    updateType_ = value;
    updateTypeIsSet_ = true;
}

bool JobUpdateRecordListVo_result_job_update_records::updateTypeIsSet() const
{
    return updateTypeIsSet_;
}

void JobUpdateRecordListVo_result_job_update_records::unsetupdateType()
{
    updateTypeIsSet_ = false;
}

std::string JobUpdateRecordListVo_result_job_update_records::getUserId() const
{
    return userId_;
}

void JobUpdateRecordListVo_result_job_update_records::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool JobUpdateRecordListVo_result_job_update_records::userIdIsSet() const
{
    return userIdIsSet_;
}

void JobUpdateRecordListVo_result_job_update_records::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string JobUpdateRecordListVo_result_job_update_records::getUserName() const
{
    return userName_;
}

void JobUpdateRecordListVo_result_job_update_records::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool JobUpdateRecordListVo_result_job_update_records::userNameIsSet() const
{
    return userNameIsSet_;
}

void JobUpdateRecordListVo_result_job_update_records::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string JobUpdateRecordListVo_result_job_update_records::getNickName() const
{
    return nickName_;
}

void JobUpdateRecordListVo_result_job_update_records::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool JobUpdateRecordListVo_result_job_update_records::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void JobUpdateRecordListVo_result_job_update_records::unsetnickName()
{
    nickNameIsSet_ = false;
}

int64_t JobUpdateRecordListVo_result_job_update_records::getUpdateAt() const
{
    return updateAt_;
}

void JobUpdateRecordListVo_result_job_update_records::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool JobUpdateRecordListVo_result_job_update_records::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void JobUpdateRecordListVo_result_job_update_records::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


