

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfoHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHbaInfoHistoryResponse::ListHbaInfoHistoryResponse()
{
    hbaConfsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ListHbaInfoHistoryResponse::~ListHbaInfoHistoryResponse() = default;

void ListHbaInfoHistoryResponse::validate()
{
}

web::json::value ListHbaInfoHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hbaConfsIsSet_) {
        val[utility::conversions::to_string_t("hba_confs")] = ModelBase::toJson(hbaConfs_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListHbaInfoHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hba_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hba_confs"));
        if(!fieldValue.is_null())
        {
            std::vector<HbaHistoryResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHbaConfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<HbaHistoryResult>& ListHbaInfoHistoryResponse::getHbaConfs()
{
    return hbaConfs_;
}

void ListHbaInfoHistoryResponse::setHbaConfs(const std::vector<HbaHistoryResult>& value)
{
    hbaConfs_ = value;
    hbaConfsIsSet_ = true;
}

bool ListHbaInfoHistoryResponse::hbaConfsIsSet() const
{
    return hbaConfsIsSet_;
}

void ListHbaInfoHistoryResponse::unsethbaConfs()
{
    hbaConfsIsSet_ = false;
}

int64_t ListHbaInfoHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ListHbaInfoHistoryResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListHbaInfoHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListHbaInfoHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


