

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateSlowLogDownloadResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateSlowLogDownloadResponse::CreateSlowLogDownloadResponse()
{
    listIsSet_ = false;
}

CreateSlowLogDownloadResponse::~CreateSlowLogDownloadResponse() = default;

void CreateSlowLogDownloadResponse::validate()
{
}

web::json::value CreateSlowLogDownloadResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool CreateSlowLogDownloadResponse::fromJson(const web::json::value& val)
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


std::vector<SlowLogDownloadInfo>& CreateSlowLogDownloadResponse::getList()
{
    return list_;
}

void CreateSlowLogDownloadResponse::setList(const std::vector<SlowLogDownloadInfo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool CreateSlowLogDownloadResponse::listIsSet() const
{
    return listIsSet_;
}

void CreateSlowLogDownloadResponse::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


