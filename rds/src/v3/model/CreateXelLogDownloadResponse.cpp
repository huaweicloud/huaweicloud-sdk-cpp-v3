

#include "huaweicloud/rds/v3/model/CreateXelLogDownloadResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateXelLogDownloadResponse::CreateXelLogDownloadResponse()
{
    listIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

CreateXelLogDownloadResponse::~CreateXelLogDownloadResponse() = default;

void CreateXelLogDownloadResponse::validate()
{
}

web::json::value CreateXelLogDownloadResponse::toJson() const
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

bool CreateXelLogDownloadResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateXelLogDownloadResult> refVal;
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

std::vector<CreateXelLogDownloadResult>& CreateXelLogDownloadResponse::getList()
{
    return list_;
}

void CreateXelLogDownloadResponse::setList(const std::vector<CreateXelLogDownloadResult>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool CreateXelLogDownloadResponse::listIsSet() const
{
    return listIsSet_;
}

void CreateXelLogDownloadResponse::unsetlist()
{
    listIsSet_ = false;
}

int32_t CreateXelLogDownloadResponse::getCount() const
{
    return count_;
}

void CreateXelLogDownloadResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CreateXelLogDownloadResponse::countIsSet() const
{
    return countIsSet_;
}

void CreateXelLogDownloadResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


