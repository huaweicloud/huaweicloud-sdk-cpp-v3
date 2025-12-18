

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTableVolumesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTableVolumesResponse::ListTableVolumesResponse()
{
    tableVolumesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListTableVolumesResponse::~ListTableVolumesResponse() = default;

void ListTableVolumesResponse::validate()
{
}

web::json::value ListTableVolumesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableVolumesIsSet_) {
        val[utility::conversions::to_string_t("table_volumes")] = ModelBase::toJson(tableVolumes_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListTableVolumesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<TableVolumeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<TableVolumeResult>& ListTableVolumesResponse::getTableVolumes()
{
    return tableVolumes_;
}

void ListTableVolumesResponse::setTableVolumes(const std::vector<TableVolumeResult>& value)
{
    tableVolumes_ = value;
    tableVolumesIsSet_ = true;
}

bool ListTableVolumesResponse::tableVolumesIsSet() const
{
    return tableVolumesIsSet_;
}

void ListTableVolumesResponse::unsettableVolumes()
{
    tableVolumesIsSet_ = false;
}

int32_t ListTableVolumesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTableVolumesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTableVolumesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTableVolumesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


