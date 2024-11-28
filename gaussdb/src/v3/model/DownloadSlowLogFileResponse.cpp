

#include "huaweicloud/gaussdb/v3/model/DownloadSlowLogFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadSlowLogFileResponse::DownloadSlowLogFileResponse()
{
    listIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

DownloadSlowLogFileResponse::~DownloadSlowLogFileResponse() = default;

void DownloadSlowLogFileResponse::validate()
{
}

web::json::value DownloadSlowLogFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool DownloadSlowLogFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<DownloadSlowLogFileItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
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


std::vector<DownloadSlowLogFileItem>& DownloadSlowLogFileResponse::getList()
{
    return list_;
}

void DownloadSlowLogFileResponse::setList(const std::vector<DownloadSlowLogFileItem>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool DownloadSlowLogFileResponse::listIsSet() const
{
    return listIsSet_;
}

void DownloadSlowLogFileResponse::unsetlist()
{
    listIsSet_ = false;
}

int32_t DownloadSlowLogFileResponse::getCount() const
{
    return count_;
}

void DownloadSlowLogFileResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool DownloadSlowLogFileResponse::countIsSet() const
{
    return countIsSet_;
}

void DownloadSlowLogFileResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


