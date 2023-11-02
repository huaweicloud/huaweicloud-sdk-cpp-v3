

#include "huaweicloud/dbss/v1/model/RdsNoAgentDbRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RdsNoAgentDbRequest::RdsNoAgentDbRequest()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

RdsNoAgentDbRequest::~RdsNoAgentDbRequest() = default;

void RdsNoAgentDbRequest::validate()
{
}

web::json::value RdsNoAgentDbRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool RdsNoAgentDbRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<RdsNoAgentDbRequest_databases> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<RdsNoAgentDbRequest_databases>& RdsNoAgentDbRequest::getDatabases()
{
    return databases_;
}

void RdsNoAgentDbRequest::setDatabases(const std::vector<RdsNoAgentDbRequest_databases>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool RdsNoAgentDbRequest::databasesIsSet() const
{
    return databasesIsSet_;
}

void RdsNoAgentDbRequest::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t RdsNoAgentDbRequest::getTotalCount() const
{
    return totalCount_;
}

void RdsNoAgentDbRequest::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool RdsNoAgentDbRequest::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void RdsNoAgentDbRequest::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


