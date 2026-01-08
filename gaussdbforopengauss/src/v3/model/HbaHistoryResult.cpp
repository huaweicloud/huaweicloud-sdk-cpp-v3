

#include "huaweicloud/gaussdbforopengauss/v3/model/HbaHistoryResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




HbaHistoryResult::HbaHistoryResult()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    time_ = utility::datetime();
    timeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    beforeConfsIsSet_ = false;
    afterConfsIsSet_ = false;
}

HbaHistoryResult::~HbaHistoryResult() = default;

void HbaHistoryResult::validate()
{
}

web::json::value HbaHistoryResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(beforeConfsIsSet_) {
        val[utility::conversions::to_string_t("before_confs")] = ModelBase::toJson(beforeConfs_);
    }
    if(afterConfsIsSet_) {
        val[utility::conversions::to_string_t("after_confs")] = ModelBase::toJson(afterConfs_);
    }

    return val;
}
bool HbaHistoryResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("before_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_confs"));
        if(!fieldValue.is_null())
        {
            std::vector<HbaConfResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeConfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_confs"));
        if(!fieldValue.is_null())
        {
            std::vector<HbaConfResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterConfs(refVal);
        }
    }
    return ok;
}


std::string HbaHistoryResult::getId() const
{
    return id_;
}

void HbaHistoryResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HbaHistoryResult::idIsSet() const
{
    return idIsSet_;
}

void HbaHistoryResult::unsetid()
{
    idIsSet_ = false;
}

std::string HbaHistoryResult::getStatus() const
{
    return status_;
}

void HbaHistoryResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HbaHistoryResult::statusIsSet() const
{
    return statusIsSet_;
}

void HbaHistoryResult::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime HbaHistoryResult::getTime() const
{
    return time_;
}

void HbaHistoryResult::setTime(const utility::datetime& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool HbaHistoryResult::timeIsSet() const
{
    return timeIsSet_;
}

void HbaHistoryResult::unsettime()
{
    timeIsSet_ = false;
}

std::string HbaHistoryResult::getFailReason() const
{
    return failReason_;
}

void HbaHistoryResult::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool HbaHistoryResult::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void HbaHistoryResult::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::vector<HbaConfResult>& HbaHistoryResult::getBeforeConfs()
{
    return beforeConfs_;
}

void HbaHistoryResult::setBeforeConfs(const std::vector<HbaConfResult>& value)
{
    beforeConfs_ = value;
    beforeConfsIsSet_ = true;
}

bool HbaHistoryResult::beforeConfsIsSet() const
{
    return beforeConfsIsSet_;
}

void HbaHistoryResult::unsetbeforeConfs()
{
    beforeConfsIsSet_ = false;
}

std::vector<HbaConfResult>& HbaHistoryResult::getAfterConfs()
{
    return afterConfs_;
}

void HbaHistoryResult::setAfterConfs(const std::vector<HbaConfResult>& value)
{
    afterConfs_ = value;
    afterConfsIsSet_ = true;
}

bool HbaHistoryResult::afterConfsIsSet() const
{
    return afterConfsIsSet_;
}

void HbaHistoryResult::unsetafterConfs()
{
    afterConfsIsSet_ = false;
}

}
}
}
}
}


