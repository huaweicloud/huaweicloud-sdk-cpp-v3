

#include "huaweicloud/drs/v5/model/QuerySelectObjectInfoReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QuerySelectObjectInfoReq::QuerySelectObjectInfoReq()
{
    dbNamesIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    isRefresh_ = "";
    isRefreshIsSet_ = false;
}

QuerySelectObjectInfoReq::~QuerySelectObjectInfoReq() = default;

void QuerySelectObjectInfoReq::validate()
{
}

web::json::value QuerySelectObjectInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNamesIsSet_) {
        val[utility::conversions::to_string_t("db_names")] = ModelBase::toJson(dbNames_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(isRefreshIsSet_) {
        val[utility::conversions::to_string_t("is_refresh")] = ModelBase::toJson(isRefresh_);
    }

    return val;
}

bool QuerySelectObjectInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_refresh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_refresh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRefresh(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& QuerySelectObjectInfoReq::getDbNames()
{
    return dbNames_;
}

void QuerySelectObjectInfoReq::setDbNames(const std::vector<std::string>& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool QuerySelectObjectInfoReq::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void QuerySelectObjectInfoReq::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

std::string QuerySelectObjectInfoReq::getType() const
{
    return type_;
}

void QuerySelectObjectInfoReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuerySelectObjectInfoReq::typeIsSet() const
{
    return typeIsSet_;
}

void QuerySelectObjectInfoReq::unsettype()
{
    typeIsSet_ = false;
}

std::string QuerySelectObjectInfoReq::getIsRefresh() const
{
    return isRefresh_;
}

void QuerySelectObjectInfoReq::setIsRefresh(const std::string& value)
{
    isRefresh_ = value;
    isRefreshIsSet_ = true;
}

bool QuerySelectObjectInfoReq::isRefreshIsSet() const
{
    return isRefreshIsSet_;
}

void QuerySelectObjectInfoReq::unsetisRefresh()
{
    isRefreshIsSet_ = false;
}

}
}
}
}
}


