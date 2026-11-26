

#include "huaweicloud/modelarts/v1/model/ListAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAssetResponse::ListAssetResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    dataIsSet_ = false;
}

ListAssetResponse::~ListAssetResponse() = default;

void ListAssetResponse::validate()
{
}

web::json::value ListAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAssetResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListAssetResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAssetResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAssetResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAssetResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AssetDetail>& ListAssetResponse::getData()
{
    return data_;
}

void ListAssetResponse::setData(const std::vector<AssetDetail>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAssetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAssetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


