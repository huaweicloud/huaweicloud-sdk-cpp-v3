

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVolumeRequest::ListDatabaseVolumeRequest()
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

ListDatabaseVolumeRequest::~ListDatabaseVolumeRequest() = default;

void ListDatabaseVolumeRequest::validate()
{
}

web::json::value ListDatabaseVolumeRequest::toJson() const
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
bool ListDatabaseVolumeRequest::fromJson(const web::json::value& val)
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


std::string ListDatabaseVolumeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatabaseVolumeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatabaseVolumeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatabaseVolumeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDatabaseVolumeRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDatabaseVolumeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDatabaseVolumeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDatabaseVolumeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDatabaseVolumeRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListDatabaseVolumeRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListDatabaseVolumeRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListDatabaseVolumeRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListDatabaseVolumeRequest::getTableSpaceName() const
{
    return tableSpaceName_;
}

void ListDatabaseVolumeRequest::setTableSpaceName(const std::string& value)
{
    tableSpaceName_ = value;
    tableSpaceNameIsSet_ = true;
}

bool ListDatabaseVolumeRequest::tableSpaceNameIsSet() const
{
    return tableSpaceNameIsSet_;
}

void ListDatabaseVolumeRequest::unsettableSpaceName()
{
    tableSpaceNameIsSet_ = false;
}

std::string ListDatabaseVolumeRequest::getUserName() const
{
    return userName_;
}

void ListDatabaseVolumeRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListDatabaseVolumeRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListDatabaseVolumeRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t ListDatabaseVolumeRequest::getOffset() const
{
    return offset_;
}

void ListDatabaseVolumeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDatabaseVolumeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDatabaseVolumeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDatabaseVolumeRequest::getLimit() const
{
    return limit_;
}

void ListDatabaseVolumeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDatabaseVolumeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDatabaseVolumeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


