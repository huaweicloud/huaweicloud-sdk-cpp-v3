

#include "huaweicloud/modelarts/v1/model/ListAssetOperationRecordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAssetOperationRecordsResponse::ListAssetOperationRecordsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    dataIsSet_ = false;
}

ListAssetOperationRecordsResponse::~ListAssetOperationRecordsResponse() = default;

void ListAssetOperationRecordsResponse::validate()
{
}

web::json::value ListAssetOperationRecordsResponse::toJson() const
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
bool ListAssetOperationRecordsResponse::fromJson(const web::json::value& val)
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
            std::vector<AssetOperationRecordRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListAssetOperationRecordsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAssetOperationRecordsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAssetOperationRecordsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAssetOperationRecordsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AssetOperationRecordRsp>& ListAssetOperationRecordsResponse::getData()
{
    return data_;
}

void ListAssetOperationRecordsResponse::setData(const std::vector<AssetOperationRecordRsp>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAssetOperationRecordsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAssetOperationRecordsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


