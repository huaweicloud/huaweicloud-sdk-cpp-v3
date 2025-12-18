

#include "huaweicloud/meeting/v1/model/UserVmrDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UserVmrDTO::UserVmrDTO()
{
    id_ = "";
    idIsSet_ = false;
    vmrId_ = "";
    vmrIdIsSet_ = false;
    vmrName_ = "";
    vmrNameIsSet_ = false;
    vmrMode_ = 0;
    vmrModeIsSet_ = false;
    vmrPkgId_ = "";
    vmrPkgIdIsSet_ = false;
    vmrPkgName_ = "";
    vmrPkgNameIsSet_ = false;
    vmrPkgParties_ = 0;
    vmrPkgPartiesIsSet_ = false;
    vmrPkgLength_ = 0;
    vmrPkgLengthIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

UserVmrDTO::~UserVmrDTO() = default;

void UserVmrDTO::validate()
{
}

web::json::value UserVmrDTO::toJson() const
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
    if(vmrPkgLengthIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgLength")] = ModelBase::toJson(vmrPkgLength_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UserVmrDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vmrPkgLength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgLength"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgLength(refVal);
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


std::string UserVmrDTO::getId() const
{
    return id_;
}

void UserVmrDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserVmrDTO::idIsSet() const
{
    return idIsSet_;
}

void UserVmrDTO::unsetid()
{
    idIsSet_ = false;
}

std::string UserVmrDTO::getVmrId() const
{
    return vmrId_;
}

void UserVmrDTO::setVmrId(const std::string& value)
{
    vmrId_ = value;
    vmrIdIsSet_ = true;
}

bool UserVmrDTO::vmrIdIsSet() const
{
    return vmrIdIsSet_;
}

void UserVmrDTO::unsetvmrId()
{
    vmrIdIsSet_ = false;
}

std::string UserVmrDTO::getVmrName() const
{
    return vmrName_;
}

void UserVmrDTO::setVmrName(const std::string& value)
{
    vmrName_ = value;
    vmrNameIsSet_ = true;
}

bool UserVmrDTO::vmrNameIsSet() const
{
    return vmrNameIsSet_;
}

void UserVmrDTO::unsetvmrName()
{
    vmrNameIsSet_ = false;
}

int32_t UserVmrDTO::getVmrMode() const
{
    return vmrMode_;
}

void UserVmrDTO::setVmrMode(int32_t value)
{
    vmrMode_ = value;
    vmrModeIsSet_ = true;
}

bool UserVmrDTO::vmrModeIsSet() const
{
    return vmrModeIsSet_;
}

void UserVmrDTO::unsetvmrMode()
{
    vmrModeIsSet_ = false;
}

std::string UserVmrDTO::getVmrPkgId() const
{
    return vmrPkgId_;
}

void UserVmrDTO::setVmrPkgId(const std::string& value)
{
    vmrPkgId_ = value;
    vmrPkgIdIsSet_ = true;
}

bool UserVmrDTO::vmrPkgIdIsSet() const
{
    return vmrPkgIdIsSet_;
}

void UserVmrDTO::unsetvmrPkgId()
{
    vmrPkgIdIsSet_ = false;
}

std::string UserVmrDTO::getVmrPkgName() const
{
    return vmrPkgName_;
}

void UserVmrDTO::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool UserVmrDTO::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void UserVmrDTO::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

int32_t UserVmrDTO::getVmrPkgParties() const
{
    return vmrPkgParties_;
}

void UserVmrDTO::setVmrPkgParties(int32_t value)
{
    vmrPkgParties_ = value;
    vmrPkgPartiesIsSet_ = true;
}

bool UserVmrDTO::vmrPkgPartiesIsSet() const
{
    return vmrPkgPartiesIsSet_;
}

void UserVmrDTO::unsetvmrPkgParties()
{
    vmrPkgPartiesIsSet_ = false;
}

int32_t UserVmrDTO::getVmrPkgLength() const
{
    return vmrPkgLength_;
}

void UserVmrDTO::setVmrPkgLength(int32_t value)
{
    vmrPkgLength_ = value;
    vmrPkgLengthIsSet_ = true;
}

bool UserVmrDTO::vmrPkgLengthIsSet() const
{
    return vmrPkgLengthIsSet_;
}

void UserVmrDTO::unsetvmrPkgLength()
{
    vmrPkgLengthIsSet_ = false;
}

int32_t UserVmrDTO::getStatus() const
{
    return status_;
}

void UserVmrDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UserVmrDTO::statusIsSet() const
{
    return statusIsSet_;
}

void UserVmrDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


