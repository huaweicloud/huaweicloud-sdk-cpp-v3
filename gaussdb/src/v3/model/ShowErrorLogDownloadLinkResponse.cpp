

#include "huaweicloud/gaussdb/v3/model/ShowErrorLogDownloadLinkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowErrorLogDownloadLinkResponse::ShowErrorLogDownloadLinkResponse()
{
    count_ = 0;
    countIsSet_ = false;
    listIsSet_ = false;
}

ShowErrorLogDownloadLinkResponse::~ShowErrorLogDownloadLinkResponse() = default;

void ShowErrorLogDownloadLinkResponse::validate()
{
}

web::json::value ShowErrorLogDownloadLinkResponse::toJson() const
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
bool ShowErrorLogDownloadLinkResponse::fromJson(const web::json::value& val)
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
            std::vector<RDSErrorLogDownload> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int32_t ShowErrorLogDownloadLinkResponse::getCount() const
{
    return count_;
}

void ShowErrorLogDownloadLinkResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowErrorLogDownloadLinkResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowErrorLogDownloadLinkResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<RDSErrorLogDownload>& ShowErrorLogDownloadLinkResponse::getList()
{
    return list_;
}

void ShowErrorLogDownloadLinkResponse::setList(const std::vector<RDSErrorLogDownload>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ShowErrorLogDownloadLinkResponse::listIsSet() const
{
    return listIsSet_;
}

void ShowErrorLogDownloadLinkResponse::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


