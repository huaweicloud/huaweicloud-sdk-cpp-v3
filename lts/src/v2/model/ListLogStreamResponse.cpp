

#include "huaweicloud/lts/v2/model/ListLogStreamResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogStreamResponse::ListLogStreamResponse()
{
    logStreamsIsSet_ = false;
}

ListLogStreamResponse::~ListLogStreamResponse() = default;

void ListLogStreamResponse::validate()
{
}

web::json::value ListLogStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamsIsSet_) {
        val[utility::conversions::to_string_t("log_streams")] = ModelBase::toJson(logStreams_);
    }

    return val;
}
bool ListLogStreamResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_streams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_streams"));
        if(!fieldValue.is_null())
        {
            std::vector<LogStreamResBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreams(refVal);
        }
    }
    return ok;
}


std::vector<LogStreamResBody>& ListLogStreamResponse::getLogStreams()
{
    return logStreams_;
}

void ListLogStreamResponse::setLogStreams(const std::vector<LogStreamResBody>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool ListLogStreamResponse::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void ListLogStreamResponse::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

}
}
}
}
}


