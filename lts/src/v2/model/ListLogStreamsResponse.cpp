

#include "huaweicloud/lts/v2/model/ListLogStreamsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogStreamsResponse::ListLogStreamsResponse()
{
    logStreamsIsSet_ = false;
}

ListLogStreamsResponse::~ListLogStreamsResponse() = default;

void ListLogStreamsResponse::validate()
{
}

web::json::value ListLogStreamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamsIsSet_) {
        val[utility::conversions::to_string_t("log_streams")] = ModelBase::toJson(logStreams_);
    }

    return val;
}

bool ListLogStreamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_streams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_streams"));
        if(!fieldValue.is_null())
        {
            std::vector<ListLogStreamsResponseBody1_log_streams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreams(refVal);
        }
    }
    return ok;
}


std::vector<ListLogStreamsResponseBody1_log_streams>& ListLogStreamsResponse::getLogStreams()
{
    return logStreams_;
}

void ListLogStreamsResponse::setLogStreams(const std::vector<ListLogStreamsResponseBody1_log_streams>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool ListLogStreamsResponse::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void ListLogStreamsResponse::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

}
}
}
}
}


