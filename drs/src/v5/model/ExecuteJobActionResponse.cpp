

#include "huaweicloud/drs/v5/model/ExecuteJobActionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExecuteJobActionResponse::ExecuteJobActionResponse()
{
    queryId_ = "";
    queryIdIsSet_ = false;
}

ExecuteJobActionResponse::~ExecuteJobActionResponse() = default;

void ExecuteJobActionResponse::validate()
{
}

web::json::value ExecuteJobActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }

    return val;
}

bool ExecuteJobActionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    return ok;
}

std::string ExecuteJobActionResponse::getQueryId() const
{
    return queryId_;
}

void ExecuteJobActionResponse::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ExecuteJobActionResponse::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ExecuteJobActionResponse::unsetqueryId()
{
    queryIdIsSet_ = false;
}

}
}
}
}
}


