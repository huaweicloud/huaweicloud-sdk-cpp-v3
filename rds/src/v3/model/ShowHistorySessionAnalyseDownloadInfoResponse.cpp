

#include "huaweicloud/rds/v3/model/ShowHistorySessionAnalyseDownloadInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowHistorySessionAnalyseDownloadInfoResponse::ShowHistorySessionAnalyseDownloadInfoResponse()
{
    count_ = 0;
    countIsSet_ = false;
    listIsSet_ = false;
}

ShowHistorySessionAnalyseDownloadInfoResponse::~ShowHistorySessionAnalyseDownloadInfoResponse() = default;

void ShowHistorySessionAnalyseDownloadInfoResponse::validate()
{
}

web::json::value ShowHistorySessionAnalyseDownloadInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool ShowHistorySessionAnalyseDownloadInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<DownloadInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int32_t ShowHistorySessionAnalyseDownloadInfoResponse::getCount() const
{
    return count_;
}

void ShowHistorySessionAnalyseDownloadInfoResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowHistorySessionAnalyseDownloadInfoResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowHistorySessionAnalyseDownloadInfoResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DownloadInfo>& ShowHistorySessionAnalyseDownloadInfoResponse::getList()
{
    return list_;
}

void ShowHistorySessionAnalyseDownloadInfoResponse::setList(const std::vector<DownloadInfo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ShowHistorySessionAnalyseDownloadInfoResponse::listIsSet() const
{
    return listIsSet_;
}

void ShowHistorySessionAnalyseDownloadInfoResponse::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


