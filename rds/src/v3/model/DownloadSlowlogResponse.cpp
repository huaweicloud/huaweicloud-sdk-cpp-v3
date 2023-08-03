

#include "huaweicloud/rds/v3/model/DownloadSlowlogResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DownloadSlowlogResponse::DownloadSlowlogResponse()
{
    listIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

DownloadSlowlogResponse::~DownloadSlowlogResponse() = default;

void DownloadSlowlogResponse::validate()
{
}

web::json::value DownloadSlowlogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool DownloadSlowlogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowlogDownloadInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}

std::vector<SlowlogDownloadInfo>& DownloadSlowlogResponse::getList()
{
    return list_;
}

void DownloadSlowlogResponse::setList(const std::vector<SlowlogDownloadInfo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool DownloadSlowlogResponse::listIsSet() const
{
    return listIsSet_;
}

void DownloadSlowlogResponse::unsetlist()
{
    listIsSet_ = false;
}

std::string DownloadSlowlogResponse::getStatus() const
{
    return status_;
}

void DownloadSlowlogResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DownloadSlowlogResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DownloadSlowlogResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t DownloadSlowlogResponse::getCount() const
{
    return count_;
}

void DownloadSlowlogResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool DownloadSlowlogResponse::countIsSet() const
{
    return countIsSet_;
}

void DownloadSlowlogResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


