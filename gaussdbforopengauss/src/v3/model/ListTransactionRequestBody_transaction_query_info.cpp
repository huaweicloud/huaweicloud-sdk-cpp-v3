

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTransactionRequestBody_transaction_query_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTransactionRequestBody_transaction_query_info::ListTransactionRequestBody_transaction_query_info()
{
    execTime_ = "";
    execTimeIsSet_ = false;
    xlogQuantity_ = "";
    xlogQuantityIsSet_ = false;
    datnamesIsSet_ = false;
    usenamesIsSet_ = false;
    clientAddrsIsSet_ = false;
}

ListTransactionRequestBody_transaction_query_info::~ListTransactionRequestBody_transaction_query_info() = default;

void ListTransactionRequestBody_transaction_query_info::validate()
{
}

web::json::value ListTransactionRequestBody_transaction_query_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(execTimeIsSet_) {
        val[utility::conversions::to_string_t("exec_time")] = ModelBase::toJson(execTime_);
    }
    if(xlogQuantityIsSet_) {
        val[utility::conversions::to_string_t("xlog_quantity")] = ModelBase::toJson(xlogQuantity_);
    }
    if(datnamesIsSet_) {
        val[utility::conversions::to_string_t("datnames")] = ModelBase::toJson(datnames_);
    }
    if(usenamesIsSet_) {
        val[utility::conversions::to_string_t("usenames")] = ModelBase::toJson(usenames_);
    }
    if(clientAddrsIsSet_) {
        val[utility::conversions::to_string_t("client_addrs")] = ModelBase::toJson(clientAddrs_);
    }

    return val;
}
bool ListTransactionRequestBody_transaction_query_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xlog_quantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xlog_quantity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXlogQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datnames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datnames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatnames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usenames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usenames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsenames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_addrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_addrs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientAddrs(refVal);
        }
    }
    return ok;
}


std::string ListTransactionRequestBody_transaction_query_info::getExecTime() const
{
    return execTime_;
}

void ListTransactionRequestBody_transaction_query_info::setExecTime(const std::string& value)
{
    execTime_ = value;
    execTimeIsSet_ = true;
}

bool ListTransactionRequestBody_transaction_query_info::execTimeIsSet() const
{
    return execTimeIsSet_;
}

void ListTransactionRequestBody_transaction_query_info::unsetexecTime()
{
    execTimeIsSet_ = false;
}

std::string ListTransactionRequestBody_transaction_query_info::getXlogQuantity() const
{
    return xlogQuantity_;
}

void ListTransactionRequestBody_transaction_query_info::setXlogQuantity(const std::string& value)
{
    xlogQuantity_ = value;
    xlogQuantityIsSet_ = true;
}

bool ListTransactionRequestBody_transaction_query_info::xlogQuantityIsSet() const
{
    return xlogQuantityIsSet_;
}

void ListTransactionRequestBody_transaction_query_info::unsetxlogQuantity()
{
    xlogQuantityIsSet_ = false;
}

std::vector<std::string>& ListTransactionRequestBody_transaction_query_info::getDatnames()
{
    return datnames_;
}

void ListTransactionRequestBody_transaction_query_info::setDatnames(const std::vector<std::string>& value)
{
    datnames_ = value;
    datnamesIsSet_ = true;
}

bool ListTransactionRequestBody_transaction_query_info::datnamesIsSet() const
{
    return datnamesIsSet_;
}

void ListTransactionRequestBody_transaction_query_info::unsetdatnames()
{
    datnamesIsSet_ = false;
}

std::vector<std::string>& ListTransactionRequestBody_transaction_query_info::getUsenames()
{
    return usenames_;
}

void ListTransactionRequestBody_transaction_query_info::setUsenames(const std::vector<std::string>& value)
{
    usenames_ = value;
    usenamesIsSet_ = true;
}

bool ListTransactionRequestBody_transaction_query_info::usenamesIsSet() const
{
    return usenamesIsSet_;
}

void ListTransactionRequestBody_transaction_query_info::unsetusenames()
{
    usenamesIsSet_ = false;
}

std::vector<std::string>& ListTransactionRequestBody_transaction_query_info::getClientAddrs()
{
    return clientAddrs_;
}

void ListTransactionRequestBody_transaction_query_info::setClientAddrs(const std::vector<std::string>& value)
{
    clientAddrs_ = value;
    clientAddrsIsSet_ = true;
}

bool ListTransactionRequestBody_transaction_query_info::clientAddrsIsSet() const
{
    return clientAddrsIsSet_;
}

void ListTransactionRequestBody_transaction_query_info::unsetclientAddrs()
{
    clientAddrsIsSet_ = false;
}

}
}
}
}
}


