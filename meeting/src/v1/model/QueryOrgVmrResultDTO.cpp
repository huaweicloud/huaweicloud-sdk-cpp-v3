

#include "huaweicloud/meeting/v1/model/QueryOrgVmrResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryOrgVmrResultDTO::QueryOrgVmrResultDTO()
{
    id_ = "";
    idIsSet_ = false;
    vmrId_ = "";
    vmrIdIsSet_ = false;
    vmrName_ = "";
    vmrNameIsSet_ = false;
    vmrPkgName_ = "";
    vmrPkgNameIsSet_ = false;
    vmrPkgParties_ = 0;
    vmrPkgPartiesIsSet_ = false;
    maxAudienceParties_ = 0;
    maxAudiencePartiesIsSet_ = false;
    memberIsSet_ = false;
    deviceIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    expireDate_ = 0L;
    expireDateIsSet_ = false;
    commercialMaxAudienceParties_ = 0;
    commercialMaxAudiencePartiesIsSet_ = false;
}

QueryOrgVmrResultDTO::~QueryOrgVmrResultDTO() = default;

void QueryOrgVmrResultDTO::validate()
{
}

web::json::value QueryOrgVmrResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(vmrIdIsSet_) {
        val[utility::conversions::to_string_t("vmrId")] = ModelBase::toJson(vmrId_);
    }
    if(vmrNameIsSet_) {
        val[utility::conversions::to_string_t("vmrName")] = ModelBase::toJson(vmrName_);
    }
    if(vmrPkgNameIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgName")] = ModelBase::toJson(vmrPkgName_);
    }
    if(vmrPkgPartiesIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgParties")] = ModelBase::toJson(vmrPkgParties_);
    }
    if(maxAudiencePartiesIsSet_) {
        val[utility::conversions::to_string_t("maxAudienceParties")] = ModelBase::toJson(maxAudienceParties_);
    }
    if(memberIsSet_) {
        val[utility::conversions::to_string_t("member")] = ModelBase::toJson(member_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(expireDateIsSet_) {
        val[utility::conversions::to_string_t("expireDate")] = ModelBase::toJson(expireDate_);
    }
    if(commercialMaxAudiencePartiesIsSet_) {
        val[utility::conversions::to_string_t("commercialMaxAudienceParties")] = ModelBase::toJson(commercialMaxAudienceParties_);
    }

    return val;
}
bool QueryOrgVmrResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vmrId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgParties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgParties"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgParties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxAudienceParties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxAudienceParties"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAudienceParties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member"));
        if(!fieldValue.is_null())
        {
            IdMarkDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMember(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            IdMarkDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commercialMaxAudienceParties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commercialMaxAudienceParties"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommercialMaxAudienceParties(refVal);
        }
    }
    return ok;
}


std::string QueryOrgVmrResultDTO::getId() const
{
    return id_;
}

void QueryOrgVmrResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryOrgVmrResultDTO::idIsSet() const
{
    return idIsSet_;
}

void QueryOrgVmrResultDTO::unsetid()
{
    idIsSet_ = false;
}

std::string QueryOrgVmrResultDTO::getVmrId() const
{
    return vmrId_;
}

void QueryOrgVmrResultDTO::setVmrId(const std::string& value)
{
    vmrId_ = value;
    vmrIdIsSet_ = true;
}

bool QueryOrgVmrResultDTO::vmrIdIsSet() const
{
    return vmrIdIsSet_;
}

void QueryOrgVmrResultDTO::unsetvmrId()
{
    vmrIdIsSet_ = false;
}

std::string QueryOrgVmrResultDTO::getVmrName() const
{
    return vmrName_;
}

void QueryOrgVmrResultDTO::setVmrName(const std::string& value)
{
    vmrName_ = value;
    vmrNameIsSet_ = true;
}

bool QueryOrgVmrResultDTO::vmrNameIsSet() const
{
    return vmrNameIsSet_;
}

void QueryOrgVmrResultDTO::unsetvmrName()
{
    vmrNameIsSet_ = false;
}

std::string QueryOrgVmrResultDTO::getVmrPkgName() const
{
    return vmrPkgName_;
}

void QueryOrgVmrResultDTO::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool QueryOrgVmrResultDTO::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void QueryOrgVmrResultDTO::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

int32_t QueryOrgVmrResultDTO::getVmrPkgParties() const
{
    return vmrPkgParties_;
}

void QueryOrgVmrResultDTO::setVmrPkgParties(int32_t value)
{
    vmrPkgParties_ = value;
    vmrPkgPartiesIsSet_ = true;
}

bool QueryOrgVmrResultDTO::vmrPkgPartiesIsSet() const
{
    return vmrPkgPartiesIsSet_;
}

void QueryOrgVmrResultDTO::unsetvmrPkgParties()
{
    vmrPkgPartiesIsSet_ = false;
}

int32_t QueryOrgVmrResultDTO::getMaxAudienceParties() const
{
    return maxAudienceParties_;
}

void QueryOrgVmrResultDTO::setMaxAudienceParties(int32_t value)
{
    maxAudienceParties_ = value;
    maxAudiencePartiesIsSet_ = true;
}

bool QueryOrgVmrResultDTO::maxAudiencePartiesIsSet() const
{
    return maxAudiencePartiesIsSet_;
}

void QueryOrgVmrResultDTO::unsetmaxAudienceParties()
{
    maxAudiencePartiesIsSet_ = false;
}

IdMarkDTO QueryOrgVmrResultDTO::getMember() const
{
    return member_;
}

void QueryOrgVmrResultDTO::setMember(const IdMarkDTO& value)
{
    member_ = value;
    memberIsSet_ = true;
}

bool QueryOrgVmrResultDTO::memberIsSet() const
{
    return memberIsSet_;
}

void QueryOrgVmrResultDTO::unsetmember()
{
    memberIsSet_ = false;
}

IdMarkDTO QueryOrgVmrResultDTO::getDevice() const
{
    return device_;
}

void QueryOrgVmrResultDTO::setDevice(const IdMarkDTO& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool QueryOrgVmrResultDTO::deviceIsSet() const
{
    return deviceIsSet_;
}

void QueryOrgVmrResultDTO::unsetdevice()
{
    deviceIsSet_ = false;
}

int32_t QueryOrgVmrResultDTO::getStatus() const
{
    return status_;
}

void QueryOrgVmrResultDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryOrgVmrResultDTO::statusIsSet() const
{
    return statusIsSet_;
}

void QueryOrgVmrResultDTO::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t QueryOrgVmrResultDTO::getExpireDate() const
{
    return expireDate_;
}

void QueryOrgVmrResultDTO::setExpireDate(int64_t value)
{
    expireDate_ = value;
    expireDateIsSet_ = true;
}

bool QueryOrgVmrResultDTO::expireDateIsSet() const
{
    return expireDateIsSet_;
}

void QueryOrgVmrResultDTO::unsetexpireDate()
{
    expireDateIsSet_ = false;
}

int32_t QueryOrgVmrResultDTO::getCommercialMaxAudienceParties() const
{
    return commercialMaxAudienceParties_;
}

void QueryOrgVmrResultDTO::setCommercialMaxAudienceParties(int32_t value)
{
    commercialMaxAudienceParties_ = value;
    commercialMaxAudiencePartiesIsSet_ = true;
}

bool QueryOrgVmrResultDTO::commercialMaxAudiencePartiesIsSet() const
{
    return commercialMaxAudiencePartiesIsSet_;
}

void QueryOrgVmrResultDTO::unsetcommercialMaxAudienceParties()
{
    commercialMaxAudiencePartiesIsSet_ = false;
}

}
}
}
}
}


