

#include "huaweicloud/lts/v2/model/CreateLogStreamParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogStreamParams::CreateLogStreamParams()
{
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

CreateLogStreamParams::~CreateLogStreamParams() = default;

void CreateLogStreamParams::validate()
{
}

web::json::value CreateLogStreamParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}

bool CreateLogStreamParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    return ok;
}


std::string CreateLogStreamParams::getLogStreamName() const
{
    return logStreamName_;
}

void CreateLogStreamParams::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool CreateLogStreamParams::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void CreateLogStreamParams::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


