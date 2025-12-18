

#include "huaweicloud/meeting/v1/model/QueryVisionActiveCodeResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryVisionActiveCodeResultDTO::QueryVisionActiveCodeResultDTO()
{
    id_ = "";
    idIsSet_ = false;
    activeCode_ = "";
    activeCodeIsSet_ = false;
    devName_ = "";
    devNameIsSet_ = false;
    devType_ = "";
    devTypeIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    expireDate_ = 0L;
    expireDateIsSet_ = false;
}

QueryVisionActiveCodeResultDTO::~QueryVisionActiveCodeResultDTO() = default;

void QueryVisionActiveCodeResultDTO::validate()
{
}

web::json::value QueryVisionActiveCodeResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(activeCodeIsSet_) {
        val[utility::conversions::to_string_t("activeCode")] = ModelBase::toJson(activeCode_);
    }
    if(devNameIsSet_) {
        val[utility::conversions::to_string_t("devName")] = ModelBase::toJson(devName_);
    }
    if(devTypeIsSet_) {
        val[utility::conversions::to_string_t("devType")] = ModelBase::toJson(devType_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(expireDateIsSet_) {
        val[utility::conversions::to_string_t("expireDate")] = ModelBase::toJson(expireDate_);
    }

    return val;
}
bool QueryVisionActiveCodeResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("activeCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("devName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("devType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
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
    return ok;
}


std::string QueryVisionActiveCodeResultDTO::getId() const
{
    return id_;
}

void QueryVisionActiveCodeResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryVisionActiveCodeResultDTO::idIsSet() const
{
    return idIsSet_;
}

void QueryVisionActiveCodeResultDTO::unsetid()
{
    idIsSet_ = false;
}

std::string QueryVisionActiveCodeResultDTO::getActiveCode() const
{
    return activeCode_;
}

void QueryVisionActiveCodeResultDTO::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool QueryVisionActiveCodeResultDTO::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void QueryVisionActiveCodeResultDTO::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

std::string QueryVisionActiveCodeResultDTO::getDevName() const
{
    return devName_;
}

void QueryVisionActiveCodeResultDTO::setDevName(const std::string& value)
{
    devName_ = value;
    devNameIsSet_ = true;
}

bool QueryVisionActiveCodeResultDTO::devNameIsSet() const
{
    return devNameIsSet_;
}

void QueryVisionActiveCodeResultDTO::unsetdevName()
{
    devNameIsSet_ = false;
}

std::string QueryVisionActiveCodeResultDTO::getDevType() const
{
    return devType_;
}

void QueryVisionActiveCodeResultDTO::setDevType(const std::string& value)
{
    devType_ = value;
    devTypeIsSet_ = true;
}

bool QueryVisionActiveCodeResultDTO::devTypeIsSet() const
{
    return devTypeIsSet_;
}

void QueryVisionActiveCodeResultDTO::unsetdevType()
{
    devTypeIsSet_ = false;
}

std::string QueryVisionActiveCodeResultDTO::getDeptCode() const
{
    return deptCode_;
}

void QueryVisionActiveCodeResultDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool QueryVisionActiveCodeResultDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void QueryVisionActiveCodeResultDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string QueryVisionActiveCodeResultDTO::getDeptName() const
{
    return deptName_;
}

void QueryVisionActiveCodeResultDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool QueryVisionActiveCodeResultDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void QueryVisionActiveCodeResultDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

int64_t QueryVisionActiveCodeResultDTO::getExpireDate() const
{
    return expireDate_;
}

void QueryVisionActiveCodeResultDTO::setExpireDate(int64_t value)
{
    expireDate_ = value;
    expireDateIsSet_ = true;
}

bool QueryVisionActiveCodeResultDTO::expireDateIsSet() const
{
    return expireDateIsSet_;
}

void QueryVisionActiveCodeResultDTO::unsetexpireDate()
{
    expireDateIsSet_ = false;
}

}
}
}
}
}


