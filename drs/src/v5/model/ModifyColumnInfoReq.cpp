

#include "huaweicloud/drs/v5/model/ModifyColumnInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyColumnInfoReq::ModifyColumnInfoReq()
{
    columnMapInfosIsSet_ = false;
}

ModifyColumnInfoReq::~ModifyColumnInfoReq() = default;

void ModifyColumnInfoReq::validate()
{
}

web::json::value ModifyColumnInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnMapInfosIsSet_) {
        val[utility::conversions::to_string_t("column_map_infos")] = ModelBase::toJson(columnMapInfos_);
    }

    return val;
}
bool ModifyColumnInfoReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<ColumnMappingInfo>& ModifyColumnInfoReq::getColumnMapInfos()
{
    return columnMapInfos_;
}

void ModifyColumnInfoReq::setColumnMapInfos(const std::vector<ColumnMappingInfo>& value)
{
    columnMapInfos_ = value;
    columnMapInfosIsSet_ = true;
}

bool ModifyColumnInfoReq::columnMapInfosIsSet() const
{
    return columnMapInfosIsSet_;
}

void ModifyColumnInfoReq::unsetcolumnMapInfos()
{
    columnMapInfosIsSet_ = false;
}

}
}
}
}
}


