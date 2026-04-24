

#include "huaweicloud/drs/v5/model/ColumnProcessObjects.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ColumnProcessObjects::ColumnProcessObjects()
{
    objectSourceNamesIsSet_ = false;
    objectAliasName_ = "";
    objectAliasNameIsSet_ = false;
    isSent_ = false;
    isSentIsSet_ = false;
    extraColumnInfosIsSet_ = false;
}

ColumnProcessObjects::~ColumnProcessObjects() = default;

void ColumnProcessObjects::validate()
{
}

web::json::value ColumnProcessObjects::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectSourceNamesIsSet_) {
        val[utility::conversions::to_string_t("object_source_names")] = ModelBase::toJson(objectSourceNames_);
    }
    if(objectAliasNameIsSet_) {
        val[utility::conversions::to_string_t("object_alias_name")] = ModelBase::toJson(objectAliasName_);
    }
    if(isSentIsSet_) {
        val[utility::conversions::to_string_t("is_sent")] = ModelBase::toJson(isSent_);
    }
    if(extraColumnInfosIsSet_) {
        val[utility::conversions::to_string_t("extra_column_infos")] = ModelBase::toJson(extraColumnInfos_);
    }

    return val;
}
bool ColumnProcessObjects::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_source_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_source_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectSourceNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_column_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_column_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<AddColumnInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraColumnInfos(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ColumnProcessObjects::getObjectSourceNames()
{
    return objectSourceNames_;
}

void ColumnProcessObjects::setObjectSourceNames(const std::vector<std::string>& value)
{
    objectSourceNames_ = value;
    objectSourceNamesIsSet_ = true;
}

bool ColumnProcessObjects::objectSourceNamesIsSet() const
{
    return objectSourceNamesIsSet_;
}

void ColumnProcessObjects::unsetobjectSourceNames()
{
    objectSourceNamesIsSet_ = false;
}

std::string ColumnProcessObjects::getObjectAliasName() const
{
    return objectAliasName_;
}

void ColumnProcessObjects::setObjectAliasName(const std::string& value)
{
    objectAliasName_ = value;
    objectAliasNameIsSet_ = true;
}

bool ColumnProcessObjects::objectAliasNameIsSet() const
{
    return objectAliasNameIsSet_;
}

void ColumnProcessObjects::unsetobjectAliasName()
{
    objectAliasNameIsSet_ = false;
}

bool ColumnProcessObjects::isIsSent() const
{
    return isSent_;
}

void ColumnProcessObjects::setIsSent(bool value)
{
    isSent_ = value;
    isSentIsSet_ = true;
}

bool ColumnProcessObjects::isSentIsSet() const
{
    return isSentIsSet_;
}

void ColumnProcessObjects::unsetisSent()
{
    isSentIsSet_ = false;
}

std::vector<AddColumnInfo>& ColumnProcessObjects::getExtraColumnInfos()
{
    return extraColumnInfos_;
}

void ColumnProcessObjects::setExtraColumnInfos(const std::vector<AddColumnInfo>& value)
{
    extraColumnInfos_ = value;
    extraColumnInfosIsSet_ = true;
}

bool ColumnProcessObjects::extraColumnInfosIsSet() const
{
    return extraColumnInfosIsSet_;
}

void ColumnProcessObjects::unsetextraColumnInfos()
{
    extraColumnInfosIsSet_ = false;
}

}
}
}
}
}


