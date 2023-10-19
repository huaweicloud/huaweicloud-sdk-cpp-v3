

#include "huaweicloud/lts/v2/model/ListStructuredLogsWithTimeRangeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListStructuredLogsWithTimeRangeResponse::ListStructuredLogsWithTimeRangeResponse()
{
    resultIsSet_ = false;
}

ListStructuredLogsWithTimeRangeResponse::~ListStructuredLogsWithTimeRangeResponse() = default;

void ListStructuredLogsWithTimeRangeResponse::validate()
{
}

web::json::value ListStructuredLogsWithTimeRangeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListStructuredLogsWithTimeRangeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<Object>& ListStructuredLogsWithTimeRangeResponse::getResult()
{
    return result_;
}

void ListStructuredLogsWithTimeRangeResponse::setResult(const std::vector<Object>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListStructuredLogsWithTimeRangeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListStructuredLogsWithTimeRangeResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


