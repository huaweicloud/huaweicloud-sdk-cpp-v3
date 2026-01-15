

#include "huaweicloud/drs/v5/model/ColumnMappingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ColumnMappingInfo::ColumnMappingInfo()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    columnInfoListsIsSet_ = false;
}

ColumnMappingInfo::~ColumnMappingInfo() = default;

void ColumnMappingInfo::validate()
{
}

web::json::value ColumnMappingInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(columnInfoListsIsSet_) {
        val[utility::conversions::to_string_t("column_info_lists")] = ModelBase::toJson(columnInfoLists_);
    }

    return val;
}
bool ColumnMappingInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_info_lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_info_lists"));
        if(!fieldValue.is_null())
        {
            std::vector<ColumnInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnInfoLists(refVal);
        }
    }
    return ok;
}


std::string ColumnMappingInfo::getObjectId() const
{
    return objectId_;
}

void ColumnMappingInfo::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ColumnMappingInfo::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ColumnMappingInfo::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<ColumnInfo>& ColumnMappingInfo::getColumnInfoLists()
{
    return columnInfoLists_;
}

void ColumnMappingInfo::setColumnInfoLists(const std::vector<ColumnInfo>& value)
{
    columnInfoLists_ = value;
    columnInfoListsIsSet_ = true;
}

bool ColumnMappingInfo::columnInfoListsIsSet() const
{
    return columnInfoListsIsSet_;
}

void ColumnMappingInfo::unsetcolumnInfoLists()
{
    columnInfoListsIsSet_ = false;
}

}
}
}
}
}


