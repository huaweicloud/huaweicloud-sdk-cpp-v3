

#include "huaweicloud/lts/v2/model/ListStructuredLogsWithTimeRangeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListStructuredLogsWithTimeRangeResponse::ListStructuredLogsWithTimeRangeResponse()
{
    contextIsSet_ = false;
}

ListStructuredLogsWithTimeRangeResponse::~ListStructuredLogsWithTimeRangeResponse() = default;

void ListStructuredLogsWithTimeRangeResponse::validate()
{
}

web::json::value ListStructuredLogsWithTimeRangeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contextIsSet_) {
        val[utility::conversions::to_string_t("context")] = ModelBase::toJson(context_);
    }

    return val;
}
bool ListStructuredLogsWithTimeRangeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("context"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContext(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListStructuredLogsWithTimeRangeResponse::getContext()
{
    return context_;
}

void ListStructuredLogsWithTimeRangeResponse::setContext(const std::vector<std::string>& value)
{
    context_ = value;
    contextIsSet_ = true;
}

bool ListStructuredLogsWithTimeRangeResponse::contextIsSet() const
{
    return contextIsSet_;
}

void ListStructuredLogsWithTimeRangeResponse::unsetcontext()
{
    contextIsSet_ = false;
}

}
}
}
}
}


