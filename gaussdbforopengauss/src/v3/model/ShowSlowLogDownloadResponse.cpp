

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSlowLogDownloadResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSlowLogDownloadResponse::ShowSlowLogDownloadResponse()
{
    listIsSet_ = false;
}

ShowSlowLogDownloadResponse::~ShowSlowLogDownloadResponse() = default;

void ShowSlowLogDownloadResponse::validate()
{
}

web::json::value ShowSlowLogDownloadResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool ShowSlowLogDownloadResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowLogDownloadInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


std::vector<SlowLogDownloadInfo>& ShowSlowLogDownloadResponse::getList()
{
    return list_;
}

void ShowSlowLogDownloadResponse::setList(const std::vector<SlowLogDownloadInfo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ShowSlowLogDownloadResponse::listIsSet() const
{
    return listIsSet_;
}

void ShowSlowLogDownloadResponse::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


