

#include "huaweicloud/rds/v3/model/ListPackLogInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPackLogInfosResponse::ListPackLogInfosResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    packLogInfosIsSet_ = false;
}

ListPackLogInfosResponse::~ListPackLogInfosResponse() = default;

void ListPackLogInfosResponse::validate()
{
}

web::json::value ListPackLogInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(packLogInfosIsSet_) {
        val[utility::conversions::to_string_t("pack_log_infos")] = ModelBase::toJson(packLogInfos_);
    }

    return val;
}
bool ListPackLogInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pack_log_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pack_log_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<PackLogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackLogInfos(refVal);
        }
    }
    return ok;
}


int32_t ListPackLogInfosResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPackLogInfosResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPackLogInfosResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPackLogInfosResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<PackLogInfo>& ListPackLogInfosResponse::getPackLogInfos()
{
    return packLogInfos_;
}

void ListPackLogInfosResponse::setPackLogInfos(const std::vector<PackLogInfo>& value)
{
    packLogInfos_ = value;
    packLogInfosIsSet_ = true;
}

bool ListPackLogInfosResponse::packLogInfosIsSet() const
{
    return packLogInfosIsSet_;
}

void ListPackLogInfosResponse::unsetpackLogInfos()
{
    packLogInfosIsSet_ = false;
}

}
}
}
}
}


