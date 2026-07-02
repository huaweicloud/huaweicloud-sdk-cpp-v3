

#include "huaweicloud/gaussdb/v3/model/DownloadDdlLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadDdlLogsRequestBody::DownloadDdlLogsRequestBody()
{
    logIdsIsSet_ = false;
}

DownloadDdlLogsRequestBody::~DownloadDdlLogsRequestBody() = default;

void DownloadDdlLogsRequestBody::validate()
{
}

web::json::value DownloadDdlLogsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logIdsIsSet_) {
        val[utility::conversions::to_string_t("log_ids")] = ModelBase::toJson(logIds_);
    }

    return val;
}
bool DownloadDdlLogsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DownloadDdlLogsRequestBody::getLogIds()
{
    return logIds_;
}

void DownloadDdlLogsRequestBody::setLogIds(const std::vector<std::string>& value)
{
    logIds_ = value;
    logIdsIsSet_ = true;
}

bool DownloadDdlLogsRequestBody::logIdsIsSet() const
{
    return logIdsIsSet_;
}

void DownloadDdlLogsRequestBody::unsetlogIds()
{
    logIdsIsSet_ = false;
}

}
}
}
}
}


