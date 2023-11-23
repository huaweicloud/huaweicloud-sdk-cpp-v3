

#include "huaweicloud/drs/v3/model/QueryJobsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryJobsReq::QueryJobsReq()
{
    curPage_ = 0;
    curPageIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tagsIsSet_ = false;
    instanceIdsIsSet_ = false;
    instanceIp_ = "";
    instanceIpIsSet_ = false;
}

QueryJobsReq::~QueryJobsReq() = default;

void QueryJobsReq::validate()
{
}

web::json::value QueryJobsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(curPageIsSet_) {
        val[utility::conversions::to_string_t("cur_page")] = ModelBase::toJson(curPage_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(instanceIpIsSet_) {
        val[utility::conversions::to_string_t("instance_ip")] = ModelBase::toJson(instanceIp_);
    }

    return val;
}
bool QueryJobsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cur_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIp(refVal);
        }
    }
    return ok;
}


int32_t QueryJobsReq::getCurPage() const
{
    return curPage_;
}

void QueryJobsReq::setCurPage(int32_t value)
{
    curPage_ = value;
    curPageIsSet_ = true;
}

bool QueryJobsReq::curPageIsSet() const
{
    return curPageIsSet_;
}

void QueryJobsReq::unsetcurPage()
{
    curPageIsSet_ = false;
}

int32_t QueryJobsReq::getPerPage() const
{
    return perPage_;
}

void QueryJobsReq::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool QueryJobsReq::perPageIsSet() const
{
    return perPageIsSet_;
}

void QueryJobsReq::unsetperPage()
{
    perPageIsSet_ = false;
}

std::string QueryJobsReq::getDbUseType() const
{
    return dbUseType_;
}

void QueryJobsReq::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool QueryJobsReq::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void QueryJobsReq::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

std::string QueryJobsReq::getEngineType() const
{
    return engineType_;
}

void QueryJobsReq::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool QueryJobsReq::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void QueryJobsReq::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string QueryJobsReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void QueryJobsReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool QueryJobsReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void QueryJobsReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string QueryJobsReq::getName() const
{
    return name_;
}

void QueryJobsReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryJobsReq::nameIsSet() const
{
    return nameIsSet_;
}

void QueryJobsReq::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryJobsReq::getNetType() const
{
    return netType_;
}

void QueryJobsReq::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool QueryJobsReq::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void QueryJobsReq::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string QueryJobsReq::getServiceName() const
{
    return serviceName_;
}

void QueryJobsReq::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool QueryJobsReq::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void QueryJobsReq::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string QueryJobsReq::getStatus() const
{
    return status_;
}

void QueryJobsReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryJobsReq::statusIsSet() const
{
    return statusIsSet_;
}

void QueryJobsReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::map<std::string, std::string>& QueryJobsReq::getTags()
{
    return tags_;
}

void QueryJobsReq::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryJobsReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryJobsReq::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<std::string>& QueryJobsReq::getInstanceIds()
{
    return instanceIds_;
}

void QueryJobsReq::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool QueryJobsReq::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void QueryJobsReq::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string QueryJobsReq::getInstanceIp() const
{
    return instanceIp_;
}

void QueryJobsReq::setInstanceIp(const std::string& value)
{
    instanceIp_ = value;
    instanceIpIsSet_ = true;
}

bool QueryJobsReq::instanceIpIsSet() const
{
    return instanceIpIsSet_;
}

void QueryJobsReq::unsetinstanceIp()
{
    instanceIpIsSet_ = false;
}

}
}
}
}
}


