

#include "huaweicloud/meeting/v1/model/DeptBasicDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeptBasicDTO::DeptBasicDTO()
{
    deptCode_ = "";
    deptCodeIsSet_ = false;
    corpId_ = "";
    corpIdIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    deptNamePath_ = "";
    deptNamePathIsSet_ = false;
    parentDeptCode_ = "";
    parentDeptCodeIsSet_ = false;
}

DeptBasicDTO::~DeptBasicDTO() = default;

void DeptBasicDTO::validate()
{
}

web::json::value DeptBasicDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corpId")] = ModelBase::toJson(corpId_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(deptNamePathIsSet_) {
        val[utility::conversions::to_string_t("deptNamePath")] = ModelBase::toJson(deptNamePath_);
    }
    if(parentDeptCodeIsSet_) {
        val[utility::conversions::to_string_t("parentDeptCode")] = ModelBase::toJson(parentDeptCode_);
    }

    return val;
}
bool DeptBasicDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("corpId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptNamePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptNamePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptNamePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentDeptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentDeptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentDeptCode(refVal);
        }
    }
    return ok;
}


std::string DeptBasicDTO::getDeptCode() const
{
    return deptCode_;
}

void DeptBasicDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool DeptBasicDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void DeptBasicDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string DeptBasicDTO::getCorpId() const
{
    return corpId_;
}

void DeptBasicDTO::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool DeptBasicDTO::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void DeptBasicDTO::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string DeptBasicDTO::getDeptName() const
{
    return deptName_;
}

void DeptBasicDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool DeptBasicDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void DeptBasicDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string DeptBasicDTO::getDeptNamePath() const
{
    return deptNamePath_;
}

void DeptBasicDTO::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool DeptBasicDTO::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void DeptBasicDTO::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

std::string DeptBasicDTO::getParentDeptCode() const
{
    return parentDeptCode_;
}

void DeptBasicDTO::setParentDeptCode(const std::string& value)
{
    parentDeptCode_ = value;
    parentDeptCodeIsSet_ = true;
}

bool DeptBasicDTO::parentDeptCodeIsSet() const
{
    return parentDeptCodeIsSet_;
}

void DeptBasicDTO::unsetparentDeptCode()
{
    parentDeptCodeIsSet_ = false;
}

}
}
}
}
}


