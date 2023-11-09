

#include "huaweicloud/tics/v1/model/JobReportOutputVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




JobReportOutputVo::JobReportOutputVo()
{
    ext_ = "";
    extIsSet_ = false;
    resultStorageAgentName_ = "";
    resultStorageAgentNameIsSet_ = false;
    resultStorageDomainAlias_ = "";
    resultStorageDomainAliasIsSet_ = false;
}

JobReportOutputVo::~JobReportOutputVo() = default;

void JobReportOutputVo::validate()
{
}

web::json::value JobReportOutputVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extIsSet_) {
        val[utility::conversions::to_string_t("ext")] = ModelBase::toJson(ext_);
    }
    if(resultStorageAgentNameIsSet_) {
        val[utility::conversions::to_string_t("result_storage_agent_name")] = ModelBase::toJson(resultStorageAgentName_);
    }
    if(resultStorageDomainAliasIsSet_) {
        val[utility::conversions::to_string_t("result_storage_domain_alias")] = ModelBase::toJson(resultStorageDomainAlias_);
    }

    return val;
}
bool JobReportOutputVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ext"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_storage_agent_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_storage_agent_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultStorageAgentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_storage_domain_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_storage_domain_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultStorageDomainAlias(refVal);
        }
    }
    return ok;
}


std::string JobReportOutputVo::getExt() const
{
    return ext_;
}

void JobReportOutputVo::setExt(const std::string& value)
{
    ext_ = value;
    extIsSet_ = true;
}

bool JobReportOutputVo::extIsSet() const
{
    return extIsSet_;
}

void JobReportOutputVo::unsetext()
{
    extIsSet_ = false;
}

std::string JobReportOutputVo::getResultStorageAgentName() const
{
    return resultStorageAgentName_;
}

void JobReportOutputVo::setResultStorageAgentName(const std::string& value)
{
    resultStorageAgentName_ = value;
    resultStorageAgentNameIsSet_ = true;
}

bool JobReportOutputVo::resultStorageAgentNameIsSet() const
{
    return resultStorageAgentNameIsSet_;
}

void JobReportOutputVo::unsetresultStorageAgentName()
{
    resultStorageAgentNameIsSet_ = false;
}

std::string JobReportOutputVo::getResultStorageDomainAlias() const
{
    return resultStorageDomainAlias_;
}

void JobReportOutputVo::setResultStorageDomainAlias(const std::string& value)
{
    resultStorageDomainAlias_ = value;
    resultStorageDomainAliasIsSet_ = true;
}

bool JobReportOutputVo::resultStorageDomainAliasIsSet() const
{
    return resultStorageDomainAliasIsSet_;
}

void JobReportOutputVo::unsetresultStorageDomainAlias()
{
    resultStorageDomainAliasIsSet_ = false;
}

}
}
}
}
}


