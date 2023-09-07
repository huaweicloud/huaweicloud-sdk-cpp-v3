

#include "huaweicloud/drs/v5/model/QueryColumnReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryColumnReq::QueryColumnReq()
{
    isForceRefresh_ = false;
    isForceRefreshIsSet_ = false;
    dbObjectInfosIsSet_ = false;
}

QueryColumnReq::~QueryColumnReq() = default;

void QueryColumnReq::validate()
{
}

web::json::value QueryColumnReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isForceRefreshIsSet_) {
        val[utility::conversions::to_string_t("is_force_refresh")] = ModelBase::toJson(isForceRefresh_);
    }
    if(dbObjectInfosIsSet_) {
        val[utility::conversions::to_string_t("db_object_infos")] = ModelBase::toJson(dbObjectInfos_);
    }

    return val;
}

bool QueryColumnReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_force_refresh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_force_refresh"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForceRefresh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_object_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_object_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<SelectDbTableObjectInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbObjectInfos(refVal);
        }
    }
    return ok;
}

bool QueryColumnReq::isIsForceRefresh() const
{
    return isForceRefresh_;
}

void QueryColumnReq::setIsForceRefresh(bool value)
{
    isForceRefresh_ = value;
    isForceRefreshIsSet_ = true;
}

bool QueryColumnReq::isForceRefreshIsSet() const
{
    return isForceRefreshIsSet_;
}

void QueryColumnReq::unsetisForceRefresh()
{
    isForceRefreshIsSet_ = false;
}

std::vector<SelectDbTableObjectInfo>& QueryColumnReq::getDbObjectInfos()
{
    return dbObjectInfos_;
}

void QueryColumnReq::setDbObjectInfos(const std::vector<SelectDbTableObjectInfo>& value)
{
    dbObjectInfos_ = value;
    dbObjectInfosIsSet_ = true;
}

bool QueryColumnReq::dbObjectInfosIsSet() const
{
    return dbObjectInfosIsSet_;
}

void QueryColumnReq::unsetdbObjectInfos()
{
    dbObjectInfosIsSet_ = false;
}

}
}
}
}
}


