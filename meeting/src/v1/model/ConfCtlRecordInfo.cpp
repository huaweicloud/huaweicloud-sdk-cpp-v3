

#include "huaweicloud/meeting/v1/model/ConfCtlRecordInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ConfCtlRecordInfo::ConfCtlRecordInfo()
{
    operateTime_ = 0L;
    operateTimeIsSet_ = false;
    operateSource_ = "";
    operateSourceIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    operateCode_ = "";
    operateCodeIsSet_ = false;
    operationObject_ = "";
    operationObjectIsSet_ = false;
    operateResult_ = "";
    operateResultIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
}

ConfCtlRecordInfo::~ConfCtlRecordInfo() = default;

void ConfCtlRecordInfo::validate()
{
}

web::json::value ConfCtlRecordInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operateTime")] = ModelBase::toJson(operateTime_);
    }
    if(operateSourceIsSet_) {
        val[utility::conversions::to_string_t("operateSource")] = ModelBase::toJson(operateSource_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(operateCodeIsSet_) {
        val[utility::conversions::to_string_t("operateCode")] = ModelBase::toJson(operateCode_);
    }
    if(operationObjectIsSet_) {
        val[utility::conversions::to_string_t("operationObject")] = ModelBase::toJson(operationObject_);
    }
    if(operateResultIsSet_) {
        val[utility::conversions::to_string_t("operateResult")] = ModelBase::toJson(operateResult_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool ConfCtlRecordInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operateTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operateSource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operateSource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateSource(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operateCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operateCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operationObject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operationObject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operateResult"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operateResult"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


int64_t ConfCtlRecordInfo::getOperateTime() const
{
    return operateTime_;
}

void ConfCtlRecordInfo::setOperateTime(int64_t value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool ConfCtlRecordInfo::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void ConfCtlRecordInfo::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

std::string ConfCtlRecordInfo::getOperateSource() const
{
    return operateSource_;
}

void ConfCtlRecordInfo::setOperateSource(const std::string& value)
{
    operateSource_ = value;
    operateSourceIsSet_ = true;
}

bool ConfCtlRecordInfo::operateSourceIsSet() const
{
    return operateSourceIsSet_;
}

void ConfCtlRecordInfo::unsetoperateSource()
{
    operateSourceIsSet_ = false;
}

std::string ConfCtlRecordInfo::getOperator() const
{
    return operator_;
}

void ConfCtlRecordInfo::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ConfCtlRecordInfo::operatorIsSet() const
{
    return operatorIsSet_;
}

void ConfCtlRecordInfo::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string ConfCtlRecordInfo::getOperateCode() const
{
    return operateCode_;
}

void ConfCtlRecordInfo::setOperateCode(const std::string& value)
{
    operateCode_ = value;
    operateCodeIsSet_ = true;
}

bool ConfCtlRecordInfo::operateCodeIsSet() const
{
    return operateCodeIsSet_;
}

void ConfCtlRecordInfo::unsetoperateCode()
{
    operateCodeIsSet_ = false;
}

std::string ConfCtlRecordInfo::getOperationObject() const
{
    return operationObject_;
}

void ConfCtlRecordInfo::setOperationObject(const std::string& value)
{
    operationObject_ = value;
    operationObjectIsSet_ = true;
}

bool ConfCtlRecordInfo::operationObjectIsSet() const
{
    return operationObjectIsSet_;
}

void ConfCtlRecordInfo::unsetoperationObject()
{
    operationObjectIsSet_ = false;
}

std::string ConfCtlRecordInfo::getOperateResult() const
{
    return operateResult_;
}

void ConfCtlRecordInfo::setOperateResult(const std::string& value)
{
    operateResult_ = value;
    operateResultIsSet_ = true;
}

bool ConfCtlRecordInfo::operateResultIsSet() const
{
    return operateResultIsSet_;
}

void ConfCtlRecordInfo::unsetoperateResult()
{
    operateResultIsSet_ = false;
}

std::string ConfCtlRecordInfo::getDetail() const
{
    return detail_;
}

void ConfCtlRecordInfo::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ConfCtlRecordInfo::detailIsSet() const
{
    return detailIsSet_;
}

void ConfCtlRecordInfo::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


