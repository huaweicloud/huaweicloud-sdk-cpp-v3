

#include "huaweicloud/meeting/v1/model/QueryVmrResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryVmrResultDTO::QueryVmrResultDTO()
{
    id_ = "";
    idIsSet_ = false;
    vmrId_ = "";
    vmrIdIsSet_ = false;
    vmrName_ = "";
    vmrNameIsSet_ = false;
    gustPwd_ = "";
    gustPwdIsSet_ = false;
    gustJoinUrl_ = "";
    gustJoinUrlIsSet_ = false;
    chairPwd_ = "";
    chairPwdIsSet_ = false;
    chairJoinUrl_ = "";
    chairJoinUrlIsSet_ = false;
    allowGustFirst_ = false;
    allowGustFirstIsSet_ = false;
    gustFirstNotice_ = false;
    gustFirstNoticeIsSet_ = false;
    vmrMode_ = 0;
    vmrModeIsSet_ = false;
    vmrPkgId_ = "";
    vmrPkgIdIsSet_ = false;
    vmrPkgName_ = "";
    vmrPkgNameIsSet_ = false;
    vmrPkgParties_ = 0;
    vmrPkgPartiesIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

QueryVmrResultDTO::~QueryVmrResultDTO() = default;

void QueryVmrResultDTO::validate()
{
}

web::json::value QueryVmrResultDTO::toJson() const
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
    if(gustPwdIsSet_) {
        val[utility::conversions::to_string_t("gustPwd")] = ModelBase::toJson(gustPwd_);
    }
    if(gustJoinUrlIsSet_) {
        val[utility::conversions::to_string_t("gustJoinUrl")] = ModelBase::toJson(gustJoinUrl_);
    }
    if(chairPwdIsSet_) {
        val[utility::conversions::to_string_t("chairPwd")] = ModelBase::toJson(chairPwd_);
    }
    if(chairJoinUrlIsSet_) {
        val[utility::conversions::to_string_t("chairJoinUrl")] = ModelBase::toJson(chairJoinUrl_);
    }
    if(allowGustFirstIsSet_) {
        val[utility::conversions::to_string_t("allowGustFirst")] = ModelBase::toJson(allowGustFirst_);
    }
    if(gustFirstNoticeIsSet_) {
        val[utility::conversions::to_string_t("gustFirstNotice")] = ModelBase::toJson(gustFirstNotice_);
    }
    if(vmrModeIsSet_) {
        val[utility::conversions::to_string_t("vmrMode")] = ModelBase::toJson(vmrMode_);
    }
    if(vmrPkgIdIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgId")] = ModelBase::toJson(vmrPkgId_);
    }
    if(vmrPkgNameIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgName")] = ModelBase::toJson(vmrPkgName_);
    }
    if(vmrPkgPartiesIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgParties")] = ModelBase::toJson(vmrPkgParties_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool QueryVmrResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("gustPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gustPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGustPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gustJoinUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gustJoinUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGustJoinUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairJoinUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairJoinUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairJoinUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowGustFirst"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowGustFirst"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowGustFirst(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gustFirstNotice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gustFirstNotice"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGustFirstNotice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string QueryVmrResultDTO::getId() const
{
    return id_;
}

void QueryVmrResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryVmrResultDTO::idIsSet() const
{
    return idIsSet_;
}

void QueryVmrResultDTO::unsetid()
{
    idIsSet_ = false;
}

std::string QueryVmrResultDTO::getVmrId() const
{
    return vmrId_;
}

void QueryVmrResultDTO::setVmrId(const std::string& value)
{
    vmrId_ = value;
    vmrIdIsSet_ = true;
}

bool QueryVmrResultDTO::vmrIdIsSet() const
{
    return vmrIdIsSet_;
}

void QueryVmrResultDTO::unsetvmrId()
{
    vmrIdIsSet_ = false;
}

std::string QueryVmrResultDTO::getVmrName() const
{
    return vmrName_;
}

void QueryVmrResultDTO::setVmrName(const std::string& value)
{
    vmrName_ = value;
    vmrNameIsSet_ = true;
}

bool QueryVmrResultDTO::vmrNameIsSet() const
{
    return vmrNameIsSet_;
}

void QueryVmrResultDTO::unsetvmrName()
{
    vmrNameIsSet_ = false;
}

std::string QueryVmrResultDTO::getGustPwd() const
{
    return gustPwd_;
}

void QueryVmrResultDTO::setGustPwd(const std::string& value)
{
    gustPwd_ = value;
    gustPwdIsSet_ = true;
}

bool QueryVmrResultDTO::gustPwdIsSet() const
{
    return gustPwdIsSet_;
}

void QueryVmrResultDTO::unsetgustPwd()
{
    gustPwdIsSet_ = false;
}

std::string QueryVmrResultDTO::getGustJoinUrl() const
{
    return gustJoinUrl_;
}

void QueryVmrResultDTO::setGustJoinUrl(const std::string& value)
{
    gustJoinUrl_ = value;
    gustJoinUrlIsSet_ = true;
}

bool QueryVmrResultDTO::gustJoinUrlIsSet() const
{
    return gustJoinUrlIsSet_;
}

void QueryVmrResultDTO::unsetgustJoinUrl()
{
    gustJoinUrlIsSet_ = false;
}

std::string QueryVmrResultDTO::getChairPwd() const
{
    return chairPwd_;
}

void QueryVmrResultDTO::setChairPwd(const std::string& value)
{
    chairPwd_ = value;
    chairPwdIsSet_ = true;
}

bool QueryVmrResultDTO::chairPwdIsSet() const
{
    return chairPwdIsSet_;
}

void QueryVmrResultDTO::unsetchairPwd()
{
    chairPwdIsSet_ = false;
}

std::string QueryVmrResultDTO::getChairJoinUrl() const
{
    return chairJoinUrl_;
}

void QueryVmrResultDTO::setChairJoinUrl(const std::string& value)
{
    chairJoinUrl_ = value;
    chairJoinUrlIsSet_ = true;
}

bool QueryVmrResultDTO::chairJoinUrlIsSet() const
{
    return chairJoinUrlIsSet_;
}

void QueryVmrResultDTO::unsetchairJoinUrl()
{
    chairJoinUrlIsSet_ = false;
}

bool QueryVmrResultDTO::isAllowGustFirst() const
{
    return allowGustFirst_;
}

void QueryVmrResultDTO::setAllowGustFirst(bool value)
{
    allowGustFirst_ = value;
    allowGustFirstIsSet_ = true;
}

bool QueryVmrResultDTO::allowGustFirstIsSet() const
{
    return allowGustFirstIsSet_;
}

void QueryVmrResultDTO::unsetallowGustFirst()
{
    allowGustFirstIsSet_ = false;
}

bool QueryVmrResultDTO::isGustFirstNotice() const
{
    return gustFirstNotice_;
}

void QueryVmrResultDTO::setGustFirstNotice(bool value)
{
    gustFirstNotice_ = value;
    gustFirstNoticeIsSet_ = true;
}

bool QueryVmrResultDTO::gustFirstNoticeIsSet() const
{
    return gustFirstNoticeIsSet_;
}

void QueryVmrResultDTO::unsetgustFirstNotice()
{
    gustFirstNoticeIsSet_ = false;
}

int32_t QueryVmrResultDTO::getVmrMode() const
{
    return vmrMode_;
}

void QueryVmrResultDTO::setVmrMode(int32_t value)
{
    vmrMode_ = value;
    vmrModeIsSet_ = true;
}

bool QueryVmrResultDTO::vmrModeIsSet() const
{
    return vmrModeIsSet_;
}

void QueryVmrResultDTO::unsetvmrMode()
{
    vmrModeIsSet_ = false;
}

std::string QueryVmrResultDTO::getVmrPkgId() const
{
    return vmrPkgId_;
}

void QueryVmrResultDTO::setVmrPkgId(const std::string& value)
{
    vmrPkgId_ = value;
    vmrPkgIdIsSet_ = true;
}

bool QueryVmrResultDTO::vmrPkgIdIsSet() const
{
    return vmrPkgIdIsSet_;
}

void QueryVmrResultDTO::unsetvmrPkgId()
{
    vmrPkgIdIsSet_ = false;
}

std::string QueryVmrResultDTO::getVmrPkgName() const
{
    return vmrPkgName_;
}

void QueryVmrResultDTO::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool QueryVmrResultDTO::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void QueryVmrResultDTO::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

int32_t QueryVmrResultDTO::getVmrPkgParties() const
{
    return vmrPkgParties_;
}

void QueryVmrResultDTO::setVmrPkgParties(int32_t value)
{
    vmrPkgParties_ = value;
    vmrPkgPartiesIsSet_ = true;
}

bool QueryVmrResultDTO::vmrPkgPartiesIsSet() const
{
    return vmrPkgPartiesIsSet_;
}

void QueryVmrResultDTO::unsetvmrPkgParties()
{
    vmrPkgPartiesIsSet_ = false;
}

int32_t QueryVmrResultDTO::getStatus() const
{
    return status_;
}

void QueryVmrResultDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryVmrResultDTO::statusIsSet() const
{
    return statusIsSet_;
}

void QueryVmrResultDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


