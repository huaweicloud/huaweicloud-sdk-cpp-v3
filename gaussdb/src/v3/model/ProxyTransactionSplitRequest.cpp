

#include "huaweicloud/gaussdb/v3/model/ProxyTransactionSplitRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyTransactionSplitRequest::ProxyTransactionSplitRequest()
{
    transactionSplit_ = "";
    transactionSplitIsSet_ = false;
    proxyIdListIsSet_ = false;
}

ProxyTransactionSplitRequest::~ProxyTransactionSplitRequest() = default;

void ProxyTransactionSplitRequest::validate()
{
}

web::json::value ProxyTransactionSplitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transactionSplitIsSet_) {
        val[utility::conversions::to_string_t("transaction_split")] = ModelBase::toJson(transactionSplit_);
    }
    if(proxyIdListIsSet_) {
        val[utility::conversions::to_string_t("proxy_id_list")] = ModelBase::toJson(proxyIdList_);
    }

    return val;
}

bool ProxyTransactionSplitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transaction_split"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_split"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionSplit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyIdList(refVal);
        }
    }
    return ok;
}

std::string ProxyTransactionSplitRequest::getTransactionSplit() const
{
    return transactionSplit_;
}

void ProxyTransactionSplitRequest::setTransactionSplit(const std::string& value)
{
    transactionSplit_ = value;
    transactionSplitIsSet_ = true;
}

bool ProxyTransactionSplitRequest::transactionSplitIsSet() const
{
    return transactionSplitIsSet_;
}

void ProxyTransactionSplitRequest::unsettransactionSplit()
{
    transactionSplitIsSet_ = false;
}

std::vector<std::string>& ProxyTransactionSplitRequest::getProxyIdList()
{
    return proxyIdList_;
}

void ProxyTransactionSplitRequest::setProxyIdList(const std::vector<std::string>& value)
{
    proxyIdList_ = value;
    proxyIdListIsSet_ = true;
}

bool ProxyTransactionSplitRequest::proxyIdListIsSet() const
{
    return proxyIdListIsSet_;
}

void ProxyTransactionSplitRequest::unsetproxyIdList()
{
    proxyIdListIsSet_ = false;
}

}
}
}
}
}


