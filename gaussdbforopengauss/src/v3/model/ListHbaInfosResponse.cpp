

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHbaInfosResponse::ListHbaInfosResponse()
{
    hbaConfsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ListHbaInfosResponse::~ListHbaInfosResponse() = default;

void ListHbaInfosResponse::validate()
{
}

web::json::value ListHbaInfosResponse::toJson() const
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
bool ListHbaInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hba_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hba_confs"));
        if(!fieldValue.is_null())
        {
            std::vector<HbaConfResult> refVal;
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


std::vector<HbaConfResult>& ListHbaInfosResponse::getHbaConfs()
{
    return hbaConfs_;
}

void ListHbaInfosResponse::setHbaConfs(const std::vector<HbaConfResult>& value)
{
    hbaConfs_ = value;
    hbaConfsIsSet_ = true;
}

bool ListHbaInfosResponse::hbaConfsIsSet() const
{
    return hbaConfsIsSet_;
}

void ListHbaInfosResponse::unsethbaConfs()
{
    hbaConfsIsSet_ = false;
}

int64_t ListHbaInfosResponse::getTotalCount() const
{
    return totalCount_;
}

void ListHbaInfosResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListHbaInfosResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListHbaInfosResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


