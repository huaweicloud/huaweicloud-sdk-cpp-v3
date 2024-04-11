

#include "huaweicloud/drs/v5/model/ReplayErrorSqlResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayErrorSqlResp::ReplayErrorSqlResp()
{
    objectType_ = "";
    objectTypeIsSet_ = false;
    abnormalSql_ = "";
    abnormalSqlIsSet_ = false;
    abnormalInfo_ = "";
    abnormalInfoIsSet_ = false;
}

ReplayErrorSqlResp::~ReplayErrorSqlResp() = default;

void ReplayErrorSqlResp::validate()
{
}

web::json::value ReplayErrorSqlResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(abnormalSqlIsSet_) {
        val[utility::conversions::to_string_t("abnormal_sql")] = ModelBase::toJson(abnormalSql_);
    }
    if(abnormalInfoIsSet_) {
        val[utility::conversions::to_string_t("abnormal_info")] = ModelBase::toJson(abnormalInfo_);
    }

    return val;
}
bool ReplayErrorSqlResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalInfo(refVal);
        }
    }
    return ok;
}


std::string ReplayErrorSqlResp::getObjectType() const
{
    return objectType_;
}

void ReplayErrorSqlResp::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool ReplayErrorSqlResp::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void ReplayErrorSqlResp::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string ReplayErrorSqlResp::getAbnormalSql() const
{
    return abnormalSql_;
}

void ReplayErrorSqlResp::setAbnormalSql(const std::string& value)
{
    abnormalSql_ = value;
    abnormalSqlIsSet_ = true;
}

bool ReplayErrorSqlResp::abnormalSqlIsSet() const
{
    return abnormalSqlIsSet_;
}

void ReplayErrorSqlResp::unsetabnormalSql()
{
    abnormalSqlIsSet_ = false;
}

std::string ReplayErrorSqlResp::getAbnormalInfo() const
{
    return abnormalInfo_;
}

void ReplayErrorSqlResp::setAbnormalInfo(const std::string& value)
{
    abnormalInfo_ = value;
    abnormalInfoIsSet_ = true;
}

bool ReplayErrorSqlResp::abnormalInfoIsSet() const
{
    return abnormalInfoIsSet_;
}

void ReplayErrorSqlResp::unsetabnormalInfo()
{
    abnormalInfoIsSet_ = false;
}

}
}
}
}
}


