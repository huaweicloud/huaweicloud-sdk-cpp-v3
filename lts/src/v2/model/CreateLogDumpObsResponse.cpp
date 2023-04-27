

#include "huaweicloud/lts/v2/model/CreateLogDumpObsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogDumpObsResponse::CreateLogDumpObsResponse()
{
    logDumpObsId_ = "";
    logDumpObsIdIsSet_ = false;
}

CreateLogDumpObsResponse::~CreateLogDumpObsResponse() = default;

void CreateLogDumpObsResponse::validate()
{
}

web::json::value CreateLogDumpObsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logDumpObsIdIsSet_) {
        val[utility::conversions::to_string_t("log_dump_obs_id")] = ModelBase::toJson(logDumpObsId_);
    }

    return val;
}

bool CreateLogDumpObsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_dump_obs_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_dump_obs_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogDumpObsId(refVal);
        }
    }
    return ok;
}


std::string CreateLogDumpObsResponse::getLogDumpObsId() const
{
    return logDumpObsId_;
}

void CreateLogDumpObsResponse::setLogDumpObsId(const std::string& value)
{
    logDumpObsId_ = value;
    logDumpObsIdIsSet_ = true;
}

bool CreateLogDumpObsResponse::logDumpObsIdIsSet() const
{
    return logDumpObsIdIsSet_;
}

void CreateLogDumpObsResponse::unsetlogDumpObsId()
{
    logDumpObsIdIsSet_ = false;
}

}
}
}
}
}


