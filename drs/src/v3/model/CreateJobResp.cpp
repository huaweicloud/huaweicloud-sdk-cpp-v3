

#include "huaweicloud/drs/v3/model/CreateJobResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateJobResp::CreateJobResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    childIdsIsSet_ = false;
}

CreateJobResp::~CreateJobResp() = default;

void CreateJobResp::validate()
{
}

web::json::value CreateJobResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(childIdsIsSet_) {
        val[utility::conversions::to_string_t("child_ids")] = ModelBase::toJson(childIds_);
    }

    return val;
}
bool CreateJobResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("child_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("child_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildIds(refVal);
        }
    }
    return ok;
}


std::string CreateJobResp::getId() const
{
    return id_;
}

void CreateJobResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateJobResp::idIsSet() const
{
    return idIsSet_;
}

void CreateJobResp::unsetid()
{
    idIsSet_ = false;
}

std::string CreateJobResp::getName() const
{
    return name_;
}

void CreateJobResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateJobResp::nameIsSet() const
{
    return nameIsSet_;
}

void CreateJobResp::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateJobResp::getStatus() const
{
    return status_;
}

void CreateJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void CreateJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateJobResp::getCreateTime() const
{
    return createTime_;
}

void CreateJobResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateJobResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateJobResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateJobResp::getErrorCode() const
{
    return errorCode_;
}

void CreateJobResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateJobResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateJobResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateJobResp::getErrorMsg() const
{
    return errorMsg_;
}

void CreateJobResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateJobResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateJobResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::vector<std::string>& CreateJobResp::getChildIds()
{
    return childIds_;
}

void CreateJobResp::setChildIds(const std::vector<std::string>& value)
{
    childIds_ = value;
    childIdsIsSet_ = true;
}

bool CreateJobResp::childIdsIsSet() const
{
    return childIdsIsSet_;
}

void CreateJobResp::unsetchildIds()
{
    childIdsIsSet_ = false;
}

}
}
}
}
}


