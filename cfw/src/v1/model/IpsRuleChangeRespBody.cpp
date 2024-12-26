

#include "huaweicloud/cfw/v1/model/IpsRuleChangeRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsRuleChangeRespBody::IpsRuleChangeRespBody()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    ipsIdsIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
}

IpsRuleChangeRespBody::~IpsRuleChangeRespBody() = default;

void IpsRuleChangeRespBody::validate()
{
}

web::json::value IpsRuleChangeRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipsIdsIsSet_) {
        val[utility::conversions::to_string_t("ips_ids")] = ModelBase::toJson(ipsIds_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool IpsRuleChangeRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string IpsRuleChangeRespBody::getErrorCode() const
{
    return errorCode_;
}

void IpsRuleChangeRespBody::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool IpsRuleChangeRespBody::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void IpsRuleChangeRespBody::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string IpsRuleChangeRespBody::getErrorMsg() const
{
    return errorMsg_;
}

void IpsRuleChangeRespBody::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool IpsRuleChangeRespBody::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void IpsRuleChangeRespBody::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string IpsRuleChangeRespBody::getGroupId() const
{
    return groupId_;
}

void IpsRuleChangeRespBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool IpsRuleChangeRespBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void IpsRuleChangeRespBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string IpsRuleChangeRespBody::getId() const
{
    return id_;
}

void IpsRuleChangeRespBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IpsRuleChangeRespBody::idIsSet() const
{
    return idIsSet_;
}

void IpsRuleChangeRespBody::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& IpsRuleChangeRespBody::getIpsIds()
{
    return ipsIds_;
}

void IpsRuleChangeRespBody::setIpsIds(const std::vector<std::string>& value)
{
    ipsIds_ = value;
    ipsIdsIsSet_ = true;
}

bool IpsRuleChangeRespBody::ipsIdsIsSet() const
{
    return ipsIdsIsSet_;
}

void IpsRuleChangeRespBody::unsetipsIds()
{
    ipsIdsIsSet_ = false;
}

bool IpsRuleChangeRespBody::isResult() const
{
    return result_;
}

void IpsRuleChangeRespBody::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool IpsRuleChangeRespBody::resultIsSet() const
{
    return resultIsSet_;
}

void IpsRuleChangeRespBody::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


