

#include "huaweicloud/functiongraph/v2/model/ListFunctionAsyncInvokeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionAsyncInvokeConfigResponse::ListFunctionAsyncInvokeConfigResponse()
{
    asyncInvokeConfigsIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListFunctionAsyncInvokeConfigResponse::~ListFunctionAsyncInvokeConfigResponse() = default;

void ListFunctionAsyncInvokeConfigResponse::validate()
{
}

web::json::value ListFunctionAsyncInvokeConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asyncInvokeConfigsIsSet_) {
        val[utility::conversions::to_string_t("async_invoke_configs")] = ModelBase::toJson(asyncInvokeConfigs_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListFunctionAsyncInvokeConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("async_invoke_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_invoke_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFunctionAsyncInvokeConfigResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncInvokeConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ListFunctionAsyncInvokeConfigResult>& ListFunctionAsyncInvokeConfigResponse::getAsyncInvokeConfigs()
{
    return asyncInvokeConfigs_;
}

void ListFunctionAsyncInvokeConfigResponse::setAsyncInvokeConfigs(const std::vector<ListFunctionAsyncInvokeConfigResult>& value)
{
    asyncInvokeConfigs_ = value;
    asyncInvokeConfigsIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResponse::asyncInvokeConfigsIsSet() const
{
    return asyncInvokeConfigsIsSet_;
}

void ListFunctionAsyncInvokeConfigResponse::unsetasyncInvokeConfigs()
{
    asyncInvokeConfigsIsSet_ = false;
}

int64_t ListFunctionAsyncInvokeConfigResponse::getCount() const
{
    return count_;
}

void ListFunctionAsyncInvokeConfigResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionAsyncInvokeConfigResponse::unsetcount()
{
    countIsSet_ = false;
}

PageInfo ListFunctionAsyncInvokeConfigResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListFunctionAsyncInvokeConfigResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListFunctionAsyncInvokeConfigResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


