

#include "huaweicloud/gaussdb/v3/model/ShowStarRocksDatabaseUsers_user_details.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarRocksDatabaseUsers_user_details::ShowStarRocksDatabaseUsers_user_details()
{
    userName_ = "";
    userNameIsSet_ = false;
    dataBasesIsSet_ = false;
    dml_ = 0;
    dmlIsSet_ = false;
    ddl_ = 0;
    ddlIsSet_ = false;
}

ShowStarRocksDatabaseUsers_user_details::~ShowStarRocksDatabaseUsers_user_details() = default;

void ShowStarRocksDatabaseUsers_user_details::validate()
{
}

web::json::value ShowStarRocksDatabaseUsers_user_details::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(dataBasesIsSet_) {
        val[utility::conversions::to_string_t("data_bases")] = ModelBase::toJson(dataBases_);
    }
    if(dmlIsSet_) {
        val[utility::conversions::to_string_t("dml")] = ModelBase::toJson(dml_);
    }
    if(ddlIsSet_) {
        val[utility::conversions::to_string_t("ddl")] = ModelBase::toJson(ddl_);
    }

    return val;
}
bool ShowStarRocksDatabaseUsers_user_details::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_bases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_bases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataBases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dml"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dml"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDml(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdl(refVal);
        }
    }
    return ok;
}


std::string ShowStarRocksDatabaseUsers_user_details::getUserName() const
{
    return userName_;
}

void ShowStarRocksDatabaseUsers_user_details::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowStarRocksDatabaseUsers_user_details::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowStarRocksDatabaseUsers_user_details::unsetuserName()
{
    userNameIsSet_ = false;
}

std::vector<std::string>& ShowStarRocksDatabaseUsers_user_details::getDataBases()
{
    return dataBases_;
}

void ShowStarRocksDatabaseUsers_user_details::setDataBases(const std::vector<std::string>& value)
{
    dataBases_ = value;
    dataBasesIsSet_ = true;
}

bool ShowStarRocksDatabaseUsers_user_details::dataBasesIsSet() const
{
    return dataBasesIsSet_;
}

void ShowStarRocksDatabaseUsers_user_details::unsetdataBases()
{
    dataBasesIsSet_ = false;
}

int32_t ShowStarRocksDatabaseUsers_user_details::getDml() const
{
    return dml_;
}

void ShowStarRocksDatabaseUsers_user_details::setDml(int32_t value)
{
    dml_ = value;
    dmlIsSet_ = true;
}

bool ShowStarRocksDatabaseUsers_user_details::dmlIsSet() const
{
    return dmlIsSet_;
}

void ShowStarRocksDatabaseUsers_user_details::unsetdml()
{
    dmlIsSet_ = false;
}

int32_t ShowStarRocksDatabaseUsers_user_details::getDdl() const
{
    return ddl_;
}

void ShowStarRocksDatabaseUsers_user_details::setDdl(int32_t value)
{
    ddl_ = value;
    ddlIsSet_ = true;
}

bool ShowStarRocksDatabaseUsers_user_details::ddlIsSet() const
{
    return ddlIsSet_;
}

void ShowStarRocksDatabaseUsers_user_details::unsetddl()
{
    ddlIsSet_ = false;
}

}
}
}
}
}


