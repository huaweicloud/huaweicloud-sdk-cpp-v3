

#include "huaweicloud/rds/v3/model/PostgresqlHbaHistory.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlHbaHistory::PostgresqlHbaHistory()
{
    status_ = "";
    statusIsSet_ = false;
    time_ = utility::datetime();
    timeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    beforeConfsIsSet_ = false;
    afterConfsIsSet_ = false;
}

PostgresqlHbaHistory::~PostgresqlHbaHistory() = default;

void PostgresqlHbaHistory::validate()
{
}

web::json::value PostgresqlHbaHistory::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool PostgresqlHbaHistory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<PostgresqlHbaConf> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeConfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_confs"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgresqlHbaConf> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterConfs(refVal);
        }
    }
    return ok;
}


std::string PostgresqlHbaHistory::getStatus() const
{
    return status_;
}

void PostgresqlHbaHistory::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PostgresqlHbaHistory::statusIsSet() const
{
    return statusIsSet_;
}

void PostgresqlHbaHistory::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime PostgresqlHbaHistory::getTime() const
{
    return time_;
}

void PostgresqlHbaHistory::setTime(const utility::datetime& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool PostgresqlHbaHistory::timeIsSet() const
{
    return timeIsSet_;
}

void PostgresqlHbaHistory::unsettime()
{
    timeIsSet_ = false;
}

std::string PostgresqlHbaHistory::getFailReason() const
{
    return failReason_;
}

void PostgresqlHbaHistory::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool PostgresqlHbaHistory::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void PostgresqlHbaHistory::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::vector<PostgresqlHbaConf>& PostgresqlHbaHistory::getBeforeConfs()
{
    return beforeConfs_;
}

void PostgresqlHbaHistory::setBeforeConfs(const std::vector<PostgresqlHbaConf>& value)
{
    beforeConfs_ = value;
    beforeConfsIsSet_ = true;
}

bool PostgresqlHbaHistory::beforeConfsIsSet() const
{
    return beforeConfsIsSet_;
}

void PostgresqlHbaHistory::unsetbeforeConfs()
{
    beforeConfsIsSet_ = false;
}

std::vector<PostgresqlHbaConf>& PostgresqlHbaHistory::getAfterConfs()
{
    return afterConfs_;
}

void PostgresqlHbaHistory::setAfterConfs(const std::vector<PostgresqlHbaConf>& value)
{
    afterConfs_ = value;
    afterConfsIsSet_ = true;
}

bool PostgresqlHbaHistory::afterConfsIsSet() const
{
    return afterConfsIsSet_;
}

void PostgresqlHbaHistory::unsetafterConfs()
{
    afterConfsIsSet_ = false;
}

}
}
}
}
}


