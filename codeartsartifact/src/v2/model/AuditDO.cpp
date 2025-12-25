

#include "huaweicloud/codeartsartifact/v2/model/AuditDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




AuditDO::AuditDO()
{
    id_ = "";
    idIsSet_ = false;
    module_ = "";
    moduleIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    info_ = "";
    infoIsSet_ = false;
    data_ = "";
    dataIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    userAgent_ = "";
    userAgentIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    operatorNickName_ = "";
    operatorNickNameIsSet_ = false;
    operatorTenantName_ = "";
    operatorTenantNameIsSet_ = false;
    ipSource_ = "";
    ipSourceIsSet_ = false;
}

AuditDO::~AuditDO() = default;

void AuditDO::validate()
{
}

web::json::value AuditDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(userAgentIsSet_) {
        val[utility::conversions::to_string_t("userAgent")] = ModelBase::toJson(userAgent_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(operatorNickNameIsSet_) {
        val[utility::conversions::to_string_t("operatorNickName")] = ModelBase::toJson(operatorNickName_);
    }
    if(operatorTenantNameIsSet_) {
        val[utility::conversions::to_string_t("operatorTenantName")] = ModelBase::toJson(operatorTenantName_);
    }
    if(ipSourceIsSet_) {
        val[utility::conversions::to_string_t("ipSource")] = ModelBase::toJson(ipSource_);
    }

    return val;
}
bool AuditDO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userAgent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userAgent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserAgent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operatorNickName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operatorNickName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatorNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operatorTenantName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operatorTenantName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatorTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipSource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipSource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpSource(refVal);
        }
    }
    return ok;
}


std::string AuditDO::getId() const
{
    return id_;
}

void AuditDO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuditDO::idIsSet() const
{
    return idIsSet_;
}

void AuditDO::unsetid()
{
    idIsSet_ = false;
}

std::string AuditDO::getModule() const
{
    return module_;
}

void AuditDO::setModule(const std::string& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool AuditDO::moduleIsSet() const
{
    return moduleIsSet_;
}

void AuditDO::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string AuditDO::getOperation() const
{
    return operation_;
}

void AuditDO::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool AuditDO::operationIsSet() const
{
    return operationIsSet_;
}

void AuditDO::unsetoperation()
{
    operationIsSet_ = false;
}

std::string AuditDO::getTime() const
{
    return time_;
}

void AuditDO::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool AuditDO::timeIsSet() const
{
    return timeIsSet_;
}

void AuditDO::unsettime()
{
    timeIsSet_ = false;
}

std::string AuditDO::getInfo() const
{
    return info_;
}

void AuditDO::setInfo(const std::string& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool AuditDO::infoIsSet() const
{
    return infoIsSet_;
}

void AuditDO::unsetinfo()
{
    infoIsSet_ = false;
}

std::string AuditDO::getData() const
{
    return data_;
}

void AuditDO::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AuditDO::dataIsSet() const
{
    return dataIsSet_;
}

void AuditDO::unsetdata()
{
    dataIsSet_ = false;
}

std::string AuditDO::getReason() const
{
    return reason_;
}

void AuditDO::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool AuditDO::reasonIsSet() const
{
    return reasonIsSet_;
}

void AuditDO::unsetreason()
{
    reasonIsSet_ = false;
}

std::string AuditDO::getUserAgent() const
{
    return userAgent_;
}

void AuditDO::setUserAgent(const std::string& value)
{
    userAgent_ = value;
    userAgentIsSet_ = true;
}

bool AuditDO::userAgentIsSet() const
{
    return userAgentIsSet_;
}

void AuditDO::unsetuserAgent()
{
    userAgentIsSet_ = false;
}

std::string AuditDO::getOperator() const
{
    return operator_;
}

void AuditDO::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool AuditDO::operatorIsSet() const
{
    return operatorIsSet_;
}

void AuditDO::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string AuditDO::getOperatorNickName() const
{
    return operatorNickName_;
}

void AuditDO::setOperatorNickName(const std::string& value)
{
    operatorNickName_ = value;
    operatorNickNameIsSet_ = true;
}

bool AuditDO::operatorNickNameIsSet() const
{
    return operatorNickNameIsSet_;
}

void AuditDO::unsetoperatorNickName()
{
    operatorNickNameIsSet_ = false;
}

std::string AuditDO::getOperatorTenantName() const
{
    return operatorTenantName_;
}

void AuditDO::setOperatorTenantName(const std::string& value)
{
    operatorTenantName_ = value;
    operatorTenantNameIsSet_ = true;
}

bool AuditDO::operatorTenantNameIsSet() const
{
    return operatorTenantNameIsSet_;
}

void AuditDO::unsetoperatorTenantName()
{
    operatorTenantNameIsSet_ = false;
}

std::string AuditDO::getIpSource() const
{
    return ipSource_;
}

void AuditDO::setIpSource(const std::string& value)
{
    ipSource_ = value;
    ipSourceIsSet_ = true;
}

bool AuditDO::ipSourceIsSet() const
{
    return ipSourceIsSet_;
}

void AuditDO::unsetipSource()
{
    ipSourceIsSet_ = false;
}

}
}
}
}
}


