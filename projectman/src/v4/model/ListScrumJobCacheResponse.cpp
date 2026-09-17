

#include "huaweicloud/projectman/v4/model/ListScrumJobCacheResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListScrumJobCacheResponse::ListScrumJobCacheResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListScrumJobCacheResponse::~ListScrumJobCacheResponse() = default;

void ListScrumJobCacheResponse::validate()
{
}

web::json::value ListScrumJobCacheResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListScrumJobCacheResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListCacheDatasRespose_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    return ok;
}


ListCacheDatasRespose_result ListScrumJobCacheResponse::getResult() const
{
    return result_;
}

void ListScrumJobCacheResponse::setResult(const ListCacheDatasRespose_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListScrumJobCacheResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListScrumJobCacheResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListScrumJobCacheResponse::getStatus() const
{
    return status_;
}

void ListScrumJobCacheResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListScrumJobCacheResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListScrumJobCacheResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


