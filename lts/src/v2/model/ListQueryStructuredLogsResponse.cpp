

#include "huaweicloud/lts/v2/model/ListQueryStructuredLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListQueryStructuredLogsResponse::ListQueryStructuredLogsResponse()
{
    structLogsIsSet_ = false;
}

ListQueryStructuredLogsResponse::~ListQueryStructuredLogsResponse() = default;

void ListQueryStructuredLogsResponse::validate()
{
}

web::json::value ListQueryStructuredLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(structLogsIsSet_) {
        val[utility::conversions::to_string_t("struct_logs")] = ModelBase::toJson(structLogs_);
    }

    return val;
}
bool ListQueryStructuredLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("struct_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("struct_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<StructLogContents> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStructLogs(refVal);
        }
    }
    return ok;
}


std::vector<StructLogContents>& ListQueryStructuredLogsResponse::getStructLogs()
{
    return structLogs_;
}

void ListQueryStructuredLogsResponse::setStructLogs(const std::vector<StructLogContents>& value)
{
    structLogs_ = value;
    structLogsIsSet_ = true;
}

bool ListQueryStructuredLogsResponse::structLogsIsSet() const
{
    return structLogsIsSet_;
}

void ListQueryStructuredLogsResponse::unsetstructLogs()
{
    structLogsIsSet_ = false;
}

}
}
}
}
}


