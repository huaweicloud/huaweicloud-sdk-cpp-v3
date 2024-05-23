

#include "huaweicloud/rds/v3/model/DownloadErrorlogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DownloadErrorlogResponse::DownloadErrorlogResponse()
{
    listIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

DownloadErrorlogResponse::~DownloadErrorlogResponse() = default;

void DownloadErrorlogResponse::validate()
{
}

web::json::value DownloadErrorlogResponse::toJson() const
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
bool DownloadErrorlogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorlogDownloadInfo> refVal;
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


std::vector<ErrorlogDownloadInfo>& DownloadErrorlogResponse::getList()
{
    return list_;
}

void DownloadErrorlogResponse::setList(const std::vector<ErrorlogDownloadInfo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool DownloadErrorlogResponse::listIsSet() const
{
    return listIsSet_;
}

void DownloadErrorlogResponse::unsetlist()
{
    listIsSet_ = false;
}

std::string DownloadErrorlogResponse::getStatus() const
{
    return status_;
}

void DownloadErrorlogResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DownloadErrorlogResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DownloadErrorlogResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t DownloadErrorlogResponse::getCount() const
{
    return count_;
}

void DownloadErrorlogResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool DownloadErrorlogResponse::countIsSet() const
{
    return countIsSet_;
}

void DownloadErrorlogResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


