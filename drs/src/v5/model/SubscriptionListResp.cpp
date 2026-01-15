

#include "huaweicloud/drs/v5/model/SubscriptionListResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SubscriptionListResp::SubscriptionListResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    nowTime_ = "";
    nowTimeIsSet_ = false;
    jobActionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

SubscriptionListResp::~SubscriptionListResp() = default;

void SubscriptionListResp::validate()
{
}

web::json::value SubscriptionListResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nowTimeIsSet_) {
        val[utility::conversions::to_string_t("now_time")] = ModelBase::toJson(nowTime_);
    }
    if(jobActionIsSet_) {
        val[utility::conversions::to_string_t("job_action")] = ModelBase::toJson(jobAction_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool SubscriptionListResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("now_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("now_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNowTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_action"));
        if(!fieldValue.is_null())
        {
            JobActions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string SubscriptionListResp::getId() const
{
    return id_;
}

void SubscriptionListResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubscriptionListResp::idIsSet() const
{
    return idIsSet_;
}

void SubscriptionListResp::unsetid()
{
    idIsSet_ = false;
}

std::string SubscriptionListResp::getName() const
{
    return name_;
}

void SubscriptionListResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubscriptionListResp::nameIsSet() const
{
    return nameIsSet_;
}

void SubscriptionListResp::unsetname()
{
    nameIsSet_ = false;
}

std::string SubscriptionListResp::getStatus() const
{
    return status_;
}

void SubscriptionListResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubscriptionListResp::statusIsSet() const
{
    return statusIsSet_;
}

void SubscriptionListResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SubscriptionListResp::getCreateTime() const
{
    return createTime_;
}

void SubscriptionListResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SubscriptionListResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SubscriptionListResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string SubscriptionListResp::getBeginTime() const
{
    return beginTime_;
}

void SubscriptionListResp::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SubscriptionListResp::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SubscriptionListResp::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string SubscriptionListResp::getDescription() const
{
    return description_;
}

void SubscriptionListResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SubscriptionListResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SubscriptionListResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SubscriptionListResp::getNowTime() const
{
    return nowTime_;
}

void SubscriptionListResp::setNowTime(const std::string& value)
{
    nowTime_ = value;
    nowTimeIsSet_ = true;
}

bool SubscriptionListResp::nowTimeIsSet() const
{
    return nowTimeIsSet_;
}

void SubscriptionListResp::unsetnowTime()
{
    nowTimeIsSet_ = false;
}

JobActions SubscriptionListResp::getJobAction() const
{
    return jobAction_;
}

void SubscriptionListResp::setJobAction(const JobActions& value)
{
    jobAction_ = value;
    jobActionIsSet_ = true;
}

bool SubscriptionListResp::jobActionIsSet() const
{
    return jobActionIsSet_;
}

void SubscriptionListResp::unsetjobAction()
{
    jobActionIsSet_ = false;
}

std::string SubscriptionListResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SubscriptionListResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SubscriptionListResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SubscriptionListResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


