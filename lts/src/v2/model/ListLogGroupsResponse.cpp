

#include "huaweicloud/lts/v2/model/ListLogGroupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogGroupsResponse::ListLogGroupsResponse()
{
    logGroupsIsSet_ = false;
}

ListLogGroupsResponse::~ListLogGroupsResponse() = default;

void ListLogGroupsResponse::validate()
{
}

web::json::value ListLogGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupsIsSet_) {
        val[utility::conversions::to_string_t("log_groups")] = ModelBase::toJson(logGroups_);
    }

    return val;
}

bool ListLogGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<LogGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroups(refVal);
        }
    }
    return ok;
}


std::vector<LogGroup>& ListLogGroupsResponse::getLogGroups()
{
    return logGroups_;
}

void ListLogGroupsResponse::setLogGroups(const std::vector<LogGroup>& value)
{
    logGroups_ = value;
    logGroupsIsSet_ = true;
}

bool ListLogGroupsResponse::logGroupsIsSet() const
{
    return logGroupsIsSet_;
}

void ListLogGroupsResponse::unsetlogGroups()
{
    logGroupsIsSet_ = false;
}

}
}
}
}
}


