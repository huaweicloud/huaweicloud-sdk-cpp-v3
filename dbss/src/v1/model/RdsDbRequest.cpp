

#include "huaweicloud/dbss/v1/model/RdsDbRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RdsDbRequest::RdsDbRequest()
{
    databasesIsSet_ = false;
}

RdsDbRequest::~RdsDbRequest() = default;

void RdsDbRequest::validate()
{
}

web::json::value RdsDbRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool RdsDbRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<RdsDbRequest_databases> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::vector<RdsDbRequest_databases>& RdsDbRequest::getDatabases()
{
    return databases_;
}

void RdsDbRequest::setDatabases(const std::vector<RdsDbRequest_databases>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool RdsDbRequest::databasesIsSet() const
{
    return databasesIsSet_;
}

void RdsDbRequest::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


