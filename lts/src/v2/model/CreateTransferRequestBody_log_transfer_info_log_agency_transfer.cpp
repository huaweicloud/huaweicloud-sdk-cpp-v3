

#include "huaweicloud/lts/v2/model/CreateTransferRequestBody_log_transfer_info_log_agency_transfer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTransferRequestBody_log_transfer_info_log_agency_transfer::CreateTransferRequestBody_log_transfer_info_log_agency_transfer()
{
    agencyDomainId_ = "";
    agencyDomainIdIsSet_ = false;
    agencyDomainName_ = "";
    agencyDomainNameIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    agencyProjectId_ = "";
    agencyProjectIdIsSet_ = false;
    beAgencyDomainId_ = "";
    beAgencyDomainIdIsSet_ = false;
    beAgencyProjectId_ = "";
    beAgencyProjectIdIsSet_ = false;
}

CreateTransferRequestBody_log_transfer_info_log_agency_transfer::~CreateTransferRequestBody_log_transfer_info_log_agency_transfer() = default;

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::validate()
{
}

web::json::value CreateTransferRequestBody_log_transfer_info_log_agency_transfer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyDomainIdIsSet_) {
        val[utility::conversions::to_string_t("agency_domain_id")] = ModelBase::toJson(agencyDomainId_);
    }
    if(agencyDomainNameIsSet_) {
        val[utility::conversions::to_string_t("agency_domain_name")] = ModelBase::toJson(agencyDomainName_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(agencyProjectIdIsSet_) {
        val[utility::conversions::to_string_t("agency_project_id")] = ModelBase::toJson(agencyProjectId_);
    }
    if(beAgencyDomainIdIsSet_) {
        val[utility::conversions::to_string_t("be_agency_domain_id")] = ModelBase::toJson(beAgencyDomainId_);
    }
    if(beAgencyProjectIdIsSet_) {
        val[utility::conversions::to_string_t("be_agency_project_id")] = ModelBase::toJson(beAgencyProjectId_);
    }

    return val;
}
bool CreateTransferRequestBody_log_transfer_info_log_agency_transfer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("agency_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_agency_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_agency_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeAgencyDomainId(refVal);
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
    return ok;
}


std::string CreateTransferRequestBody_log_transfer_info_log_agency_transfer::getAgencyDomainId() const
{
    return agencyDomainId_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::setAgencyDomainId(const std::string& value)
{
    agencyDomainId_ = value;
    agencyDomainIdIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info_log_agency_transfer::agencyDomainIdIsSet() const
{
    return agencyDomainIdIsSet_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::unsetagencyDomainId()
{
    agencyDomainIdIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info_log_agency_transfer::getAgencyDomainName() const
{
    return agencyDomainName_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::setAgencyDomainName(const std::string& value)
{
    agencyDomainName_ = value;
    agencyDomainNameIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info_log_agency_transfer::agencyDomainNameIsSet() const
{
    return agencyDomainNameIsSet_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::unsetagencyDomainName()
{
    agencyDomainNameIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info_log_agency_transfer::getAgencyName() const
{
    return agencyName_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info_log_agency_transfer::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info_log_agency_transfer::getAgencyProjectId() const
{
    return agencyProjectId_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::setAgencyProjectId(const std::string& value)
{
    agencyProjectId_ = value;
    agencyProjectIdIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info_log_agency_transfer::agencyProjectIdIsSet() const
{
    return agencyProjectIdIsSet_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::unsetagencyProjectId()
{
    agencyProjectIdIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info_log_agency_transfer::getBeAgencyDomainId() const
{
    return beAgencyDomainId_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::setBeAgencyDomainId(const std::string& value)
{
    beAgencyDomainId_ = value;
    beAgencyDomainIdIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info_log_agency_transfer::beAgencyDomainIdIsSet() const
{
    return beAgencyDomainIdIsSet_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::unsetbeAgencyDomainId()
{
    beAgencyDomainIdIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info_log_agency_transfer::getBeAgencyProjectId() const
{
    return beAgencyProjectId_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::setBeAgencyProjectId(const std::string& value)
{
    beAgencyProjectId_ = value;
    beAgencyProjectIdIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info_log_agency_transfer::beAgencyProjectIdIsSet() const
{
    return beAgencyProjectIdIsSet_;
}

void CreateTransferRequestBody_log_transfer_info_log_agency_transfer::unsetbeAgencyProjectId()
{
    beAgencyProjectIdIsSet_ = false;
}

}
}
}
}
}


