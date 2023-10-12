

#include "huaweicloud/drs/v3/model/CompareTableInfoWithToken.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CompareTableInfoWithToken::CompareTableInfoWithToken()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    minToken_ = "";
    minTokenIsSet_ = false;
    maxToken_ = "";
    maxTokenIsSet_ = false;
}

CompareTableInfoWithToken::~CompareTableInfoWithToken() = default;

void CompareTableInfoWithToken::validate()
{
}

web::json::value CompareTableInfoWithToken::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(minTokenIsSet_) {
        val[utility::conversions::to_string_t("min_token")] = ModelBase::toJson(minToken_);
    }
    if(maxTokenIsSet_) {
        val[utility::conversions::to_string_t("max_token")] = ModelBase::toJson(maxToken_);
    }

    return val;
}
bool CompareTableInfoWithToken::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxToken(refVal);
        }
    }
    return ok;
}


std::string CompareTableInfoWithToken::getTableName() const
{
    return tableName_;
}

void CompareTableInfoWithToken::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool CompareTableInfoWithToken::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void CompareTableInfoWithToken::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string CompareTableInfoWithToken::getMinToken() const
{
    return minToken_;
}

void CompareTableInfoWithToken::setMinToken(const std::string& value)
{
    minToken_ = value;
    minTokenIsSet_ = true;
}

bool CompareTableInfoWithToken::minTokenIsSet() const
{
    return minTokenIsSet_;
}

void CompareTableInfoWithToken::unsetminToken()
{
    minTokenIsSet_ = false;
}

std::string CompareTableInfoWithToken::getMaxToken() const
{
    return maxToken_;
}

void CompareTableInfoWithToken::setMaxToken(const std::string& value)
{
    maxToken_ = value;
    maxTokenIsSet_ = true;
}

bool CompareTableInfoWithToken::maxTokenIsSet() const
{
    return maxTokenIsSet_;
}

void CompareTableInfoWithToken::unsetmaxToken()
{
    maxTokenIsSet_ = false;
}

}
}
}
}
}


