

#include "huaweicloud/lts/v2/model/PreviewAgencyLogAccessReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




PreviewAgencyLogAccessReqBody::PreviewAgencyLogAccessReqBody()
{
    agencyAccessType_ = "";
    agencyAccessTypeIsSet_ = false;
    agencyLogAccess_ = "";
    agencyLogAccessIsSet_ = false;
    logAgencyStreamName_ = "";
    logAgencyStreamNameIsSet_ = false;
    logAgencyStreamId_ = "";
    logAgencyStreamIdIsSet_ = false;
    logAgencyGroupName_ = "";
    logAgencyGroupNameIsSet_ = false;
    logAgencyGroupId_ = "";
    logAgencyGroupIdIsSet_ = false;
    logBeAgencystreamName_ = "";
    logBeAgencystreamNameIsSet_ = false;
    logBeAgencystreamId_ = "";
    logBeAgencystreamIdIsSet_ = false;
    logBeAgencygroupName_ = "";
    logBeAgencygroupNameIsSet_ = false;
    logBeAgencygroupId_ = "";
    logBeAgencygroupIdIsSet_ = false;
    beAgencyProjectId_ = "";
    beAgencyProjectIdIsSet_ = false;
    agencyProjectId_ = "";
    agencyProjectIdIsSet_ = false;
    agencyDomainName_ = "";
    agencyDomainNameIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
}

PreviewAgencyLogAccessReqBody::~PreviewAgencyLogAccessReqBody() = default;

void PreviewAgencyLogAccessReqBody::validate()
{
}

web::json::value PreviewAgencyLogAccessReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyAccessTypeIsSet_) {
        val[utility::conversions::to_string_t("agency_access_type")] = ModelBase::toJson(agencyAccessType_);
    }
    if(agencyLogAccessIsSet_) {
        val[utility::conversions::to_string_t("agency_log_access")] = ModelBase::toJson(agencyLogAccess_);
    }
    if(logAgencyStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_agencyStream_name")] = ModelBase::toJson(logAgencyStreamName_);
    }
    if(logAgencyStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_agencyStream_id")] = ModelBase::toJson(logAgencyStreamId_);
    }
    if(logAgencyGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_agencyGroup_name")] = ModelBase::toJson(logAgencyGroupName_);
    }
    if(logAgencyGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_agencyGroup_id")] = ModelBase::toJson(logAgencyGroupId_);
    }
    if(logBeAgencystreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_beAgencystream_name")] = ModelBase::toJson(logBeAgencystreamName_);
    }
    if(logBeAgencystreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_beAgencystream_id")] = ModelBase::toJson(logBeAgencystreamId_);
    }
    if(logBeAgencygroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_beAgencygroup_name")] = ModelBase::toJson(logBeAgencygroupName_);
    }
    if(logBeAgencygroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_beAgencygroup_id")] = ModelBase::toJson(logBeAgencygroupId_);
    }
    if(beAgencyProjectIdIsSet_) {
        val[utility::conversions::to_string_t("be_agency_project_id")] = ModelBase::toJson(beAgencyProjectId_);
    }
    if(agencyProjectIdIsSet_) {
        val[utility::conversions::to_string_t("agency_project_id")] = ModelBase::toJson(agencyProjectId_);
    }
    if(agencyDomainNameIsSet_) {
        val[utility::conversions::to_string_t("agency_domain_name")] = ModelBase::toJson(agencyDomainName_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }

    return val;
}
bool PreviewAgencyLogAccessReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_access_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_access_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyAccessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_log_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_log_access"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyLogAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_agencyStream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_agencyStream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogAgencyStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_agencyStream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_agencyStream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogAgencyStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_agencyGroup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_agencyGroup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogAgencyGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_agencyGroup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_agencyGroup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogAgencyGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_beAgencystream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_beAgencystream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogBeAgencystreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_beAgencystream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_beAgencystream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogBeAgencystreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_beAgencygroup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_beAgencygroup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogBeAgencygroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_beAgencygroup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_beAgencygroup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogBeAgencygroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_agency_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_agency_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeAgencyProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    return ok;
}


std::string PreviewAgencyLogAccessReqBody::getAgencyAccessType() const
{
    return agencyAccessType_;
}

void PreviewAgencyLogAccessReqBody::setAgencyAccessType(const std::string& value)
{
    agencyAccessType_ = value;
    agencyAccessTypeIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::agencyAccessTypeIsSet() const
{
    return agencyAccessTypeIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetagencyAccessType()
{
    agencyAccessTypeIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getAgencyLogAccess() const
{
    return agencyLogAccess_;
}

void PreviewAgencyLogAccessReqBody::setAgencyLogAccess(const std::string& value)
{
    agencyLogAccess_ = value;
    agencyLogAccessIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::agencyLogAccessIsSet() const
{
    return agencyLogAccessIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetagencyLogAccess()
{
    agencyLogAccessIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogAgencyStreamName() const
{
    return logAgencyStreamName_;
}

void PreviewAgencyLogAccessReqBody::setLogAgencyStreamName(const std::string& value)
{
    logAgencyStreamName_ = value;
    logAgencyStreamNameIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logAgencyStreamNameIsSet() const
{
    return logAgencyStreamNameIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogAgencyStreamName()
{
    logAgencyStreamNameIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogAgencyStreamId() const
{
    return logAgencyStreamId_;
}

void PreviewAgencyLogAccessReqBody::setLogAgencyStreamId(const std::string& value)
{
    logAgencyStreamId_ = value;
    logAgencyStreamIdIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logAgencyStreamIdIsSet() const
{
    return logAgencyStreamIdIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogAgencyStreamId()
{
    logAgencyStreamIdIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogAgencyGroupName() const
{
    return logAgencyGroupName_;
}

void PreviewAgencyLogAccessReqBody::setLogAgencyGroupName(const std::string& value)
{
    logAgencyGroupName_ = value;
    logAgencyGroupNameIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logAgencyGroupNameIsSet() const
{
    return logAgencyGroupNameIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogAgencyGroupName()
{
    logAgencyGroupNameIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogAgencyGroupId() const
{
    return logAgencyGroupId_;
}

void PreviewAgencyLogAccessReqBody::setLogAgencyGroupId(const std::string& value)
{
    logAgencyGroupId_ = value;
    logAgencyGroupIdIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logAgencyGroupIdIsSet() const
{
    return logAgencyGroupIdIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogAgencyGroupId()
{
    logAgencyGroupIdIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogBeAgencystreamName() const
{
    return logBeAgencystreamName_;
}

void PreviewAgencyLogAccessReqBody::setLogBeAgencystreamName(const std::string& value)
{
    logBeAgencystreamName_ = value;
    logBeAgencystreamNameIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logBeAgencystreamNameIsSet() const
{
    return logBeAgencystreamNameIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogBeAgencystreamName()
{
    logBeAgencystreamNameIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogBeAgencystreamId() const
{
    return logBeAgencystreamId_;
}

void PreviewAgencyLogAccessReqBody::setLogBeAgencystreamId(const std::string& value)
{
    logBeAgencystreamId_ = value;
    logBeAgencystreamIdIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logBeAgencystreamIdIsSet() const
{
    return logBeAgencystreamIdIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogBeAgencystreamId()
{
    logBeAgencystreamIdIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogBeAgencygroupName() const
{
    return logBeAgencygroupName_;
}

void PreviewAgencyLogAccessReqBody::setLogBeAgencygroupName(const std::string& value)
{
    logBeAgencygroupName_ = value;
    logBeAgencygroupNameIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logBeAgencygroupNameIsSet() const
{
    return logBeAgencygroupNameIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogBeAgencygroupName()
{
    logBeAgencygroupNameIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getLogBeAgencygroupId() const
{
    return logBeAgencygroupId_;
}

void PreviewAgencyLogAccessReqBody::setLogBeAgencygroupId(const std::string& value)
{
    logBeAgencygroupId_ = value;
    logBeAgencygroupIdIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::logBeAgencygroupIdIsSet() const
{
    return logBeAgencygroupIdIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetlogBeAgencygroupId()
{
    logBeAgencygroupIdIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getBeAgencyProjectId() const
{
    return beAgencyProjectId_;
}

void PreviewAgencyLogAccessReqBody::setBeAgencyProjectId(const std::string& value)
{
    beAgencyProjectId_ = value;
    beAgencyProjectIdIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::beAgencyProjectIdIsSet() const
{
    return beAgencyProjectIdIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetbeAgencyProjectId()
{
    beAgencyProjectIdIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getAgencyProjectId() const
{
    return agencyProjectId_;
}

void PreviewAgencyLogAccessReqBody::setAgencyProjectId(const std::string& value)
{
    agencyProjectId_ = value;
    agencyProjectIdIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::agencyProjectIdIsSet() const
{
    return agencyProjectIdIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetagencyProjectId()
{
    agencyProjectIdIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getAgencyDomainName() const
{
    return agencyDomainName_;
}

void PreviewAgencyLogAccessReqBody::setAgencyDomainName(const std::string& value)
{
    agencyDomainName_ = value;
    agencyDomainNameIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::agencyDomainNameIsSet() const
{
    return agencyDomainNameIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetagencyDomainName()
{
    agencyDomainNameIsSet_ = false;
}

std::string PreviewAgencyLogAccessReqBody::getAgencyName() const
{
    return agencyName_;
}

void PreviewAgencyLogAccessReqBody::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool PreviewAgencyLogAccessReqBody::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void PreviewAgencyLogAccessReqBody::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

}
}
}
}
}


