

#include "huaweicloud/drs/v5/model/ShowColumnInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowColumnInfosResponse::ShowColumnInfosResponse()
{
    columnMapInfosIsSet_ = false;
    objectWithColumnInfosIsSet_ = false;
}

ShowColumnInfosResponse::~ShowColumnInfosResponse() = default;

void ShowColumnInfosResponse::validate()
{
}

web::json::value ShowColumnInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnMapInfosIsSet_) {
        val[utility::conversions::to_string_t("column_map_infos")] = ModelBase::toJson(columnMapInfos_);
    }
    if(objectWithColumnInfosIsSet_) {
        val[utility::conversions::to_string_t("object_with_column_infos")] = ModelBase::toJson(objectWithColumnInfos_);
    }

    return val;
}
bool ShowColumnInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column_map_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_map_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ColumnMappingInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnMapInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_with_column_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_with_column_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectWithColumnInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectWithColumnInfos(refVal);
        }
    }
    return ok;
}


std::vector<ColumnMappingInfo>& ShowColumnInfosResponse::getColumnMapInfos()
{
    return columnMapInfos_;
}

void ShowColumnInfosResponse::setColumnMapInfos(const std::vector<ColumnMappingInfo>& value)
{
    columnMapInfos_ = value;
    columnMapInfosIsSet_ = true;
}

bool ShowColumnInfosResponse::columnMapInfosIsSet() const
{
    return columnMapInfosIsSet_;
}

void ShowColumnInfosResponse::unsetcolumnMapInfos()
{
    columnMapInfosIsSet_ = false;
}

std::vector<ObjectWithColumnInfo>& ShowColumnInfosResponse::getObjectWithColumnInfos()
{
    return objectWithColumnInfos_;
}

void ShowColumnInfosResponse::setObjectWithColumnInfos(const std::vector<ObjectWithColumnInfo>& value)
{
    objectWithColumnInfos_ = value;
    objectWithColumnInfosIsSet_ = true;
}

bool ShowColumnInfosResponse::objectWithColumnInfosIsSet() const
{
    return objectWithColumnInfosIsSet_;
}

void ShowColumnInfosResponse::unsetobjectWithColumnInfos()
{
    objectWithColumnInfosIsSet_ = false;
}

}
}
}
}
}


