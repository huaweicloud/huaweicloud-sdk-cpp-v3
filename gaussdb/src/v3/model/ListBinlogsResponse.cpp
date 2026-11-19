

#include "huaweicloud/gaussdb/v3/model/ListBinlogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListBinlogsResponse::ListBinlogsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    binlogsIsSet_ = false;
}

ListBinlogsResponse::~ListBinlogsResponse() = default;

void ListBinlogsResponse::validate()
{
}

web::json::value ListBinlogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(binlogsIsSet_) {
        val[utility::conversions::to_string_t("binlogs")] = ModelBase::toJson(binlogs_);
    }

    return val;
}
bool ListBinlogsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("binlogs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binlogs"));
        if(!fieldValue.is_null())
        {
            std::vector<BinlogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinlogs(refVal);
        }
    }
    return ok;
}


int32_t ListBinlogsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListBinlogsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListBinlogsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListBinlogsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<BinlogInfo>& ListBinlogsResponse::getBinlogs()
{
    return binlogs_;
}

void ListBinlogsResponse::setBinlogs(const std::vector<BinlogInfo>& value)
{
    binlogs_ = value;
    binlogsIsSet_ = true;
}

bool ListBinlogsResponse::binlogsIsSet() const
{
    return binlogsIsSet_;
}

void ListBinlogsResponse::unsetbinlogs()
{
    binlogsIsSet_ = false;
}

}
}
}
}
}


