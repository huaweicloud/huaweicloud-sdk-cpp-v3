

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseListVo::UpdateTestCaseListVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    successListIsSet_ = false;
    failedListIsSet_ = false;
}

UpdateTestCaseListVo::~UpdateTestCaseListVo() = default;

void UpdateTestCaseListVo::validate()
{
}

web::json::value UpdateTestCaseListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(successListIsSet_) {
        val[utility::conversions::to_string_t("success_list")] = ModelBase::toJson(successList_);
    }
    if(failedListIsSet_) {
        val[utility::conversions::to_string_t("failed_list")] = ModelBase::toJson(failedList_);
    }

    return val;
}
bool UpdateTestCaseListVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("success_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedList(refVal);
        }
    }
    return ok;
}


std::string UpdateTestCaseListVo::getId() const
{
    return id_;
}

void UpdateTestCaseListVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateTestCaseListVo::idIsSet() const
{
    return idIsSet_;
}

void UpdateTestCaseListVo::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateTestCaseListVo::getName() const
{
    return name_;
}

void UpdateTestCaseListVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateTestCaseListVo::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateTestCaseListVo::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& UpdateTestCaseListVo::getSuccessList()
{
    return successList_;
}

void UpdateTestCaseListVo::setSuccessList(const std::vector<std::string>& value)
{
    successList_ = value;
    successListIsSet_ = true;
}

bool UpdateTestCaseListVo::successListIsSet() const
{
    return successListIsSet_;
}

void UpdateTestCaseListVo::unsetsuccessList()
{
    successListIsSet_ = false;
}

std::vector<std::string>& UpdateTestCaseListVo::getFailedList()
{
    return failedList_;
}

void UpdateTestCaseListVo::setFailedList(const std::vector<std::string>& value)
{
    failedList_ = value;
    failedListIsSet_ = true;
}

bool UpdateTestCaseListVo::failedListIsSet() const
{
    return failedListIsSet_;
}

void UpdateTestCaseListVo::unsetfailedList()
{
    failedListIsSet_ = false;
}

}
}
}
}
}


