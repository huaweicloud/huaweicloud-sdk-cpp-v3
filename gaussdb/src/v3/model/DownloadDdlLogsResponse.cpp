

#include "huaweicloud/gaussdb/v3/model/DownloadDdlLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadDdlLogsResponse::DownloadDdlLogsResponse()
{
    listIsSet_ = false;
}

DownloadDdlLogsResponse::~DownloadDdlLogsResponse() = default;

void DownloadDdlLogsResponse::validate()
{
}

web::json::value DownloadDdlLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool DownloadDdlLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<DownLoadFileInfoItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


std::vector<DownLoadFileInfoItem>& DownloadDdlLogsResponse::getList()
{
    return list_;
}

void DownloadDdlLogsResponse::setList(const std::vector<DownLoadFileInfoItem>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool DownloadDdlLogsResponse::listIsSet() const
{
    return listIsSet_;
}

void DownloadDdlLogsResponse::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


