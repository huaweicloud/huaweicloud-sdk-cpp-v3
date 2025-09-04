

#include "huaweicloud/gaussdb/v3/model/QueryDataBaseRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




QueryDataBaseRequestV3::QueryDataBaseRequestV3()
{
    databasesIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
}

QueryDataBaseRequestV3::~QueryDataBaseRequestV3() = default;

void QueryDataBaseRequestV3::validate()
{
}

web::json::value QueryDataBaseRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }

    return val;
}
bool QueryDataBaseRequestV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& QueryDataBaseRequestV3::getDatabases()
{
    return databases_;
}

void QueryDataBaseRequestV3::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool QueryDataBaseRequestV3::databasesIsSet() const
{
    return databasesIsSet_;
}

void QueryDataBaseRequestV3::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string QueryDataBaseRequestV3::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void QueryDataBaseRequestV3::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool QueryDataBaseRequestV3::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void QueryDataBaseRequestV3::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

}
}
}
}
}


