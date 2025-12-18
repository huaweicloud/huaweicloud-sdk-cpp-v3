

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVolumesRequest::ListDatabaseVolumesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableSpaceName_ = "";
    tableSpaceNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDatabaseVolumesRequest::~ListDatabaseVolumesRequest() = default;

void ListDatabaseVolumesRequest::validate()
{
}

web::json::value ListDatabaseVolumesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableSpaceNameIsSet_) {
        val[utility::conversions::to_string_t("table_space_name")] = ModelBase::toJson(tableSpaceName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDatabaseVolumesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_space_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_space_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableSpaceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListDatabaseVolumesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatabaseVolumesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatabaseVolumesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatabaseVolumesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDatabaseVolumesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDatabaseVolumesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDatabaseVolumesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDatabaseVolumesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDatabaseVolumesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListDatabaseVolumesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListDatabaseVolumesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListDatabaseVolumesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListDatabaseVolumesRequest::getTableSpaceName() const
{
    return tableSpaceName_;
}

void ListDatabaseVolumesRequest::setTableSpaceName(const std::string& value)
{
    tableSpaceName_ = value;
    tableSpaceNameIsSet_ = true;
}

bool ListDatabaseVolumesRequest::tableSpaceNameIsSet() const
{
    return tableSpaceNameIsSet_;
}

void ListDatabaseVolumesRequest::unsettableSpaceName()
{
    tableSpaceNameIsSet_ = false;
}

std::string ListDatabaseVolumesRequest::getUserName() const
{
    return userName_;
}

void ListDatabaseVolumesRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListDatabaseVolumesRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListDatabaseVolumesRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t ListDatabaseVolumesRequest::getOffset() const
{
    return offset_;
}

void ListDatabaseVolumesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDatabaseVolumesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDatabaseVolumesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDatabaseVolumesRequest::getLimit() const
{
    return limit_;
}

void ListDatabaseVolumesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDatabaseVolumesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDatabaseVolumesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


