

#include "huaweicloud/gaussdbforopengauss/v3/model/SessionMemoryContextInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SessionMemoryContextInfoResult::SessionMemoryContextInfoResult()
{
    contextName_ = "";
    contextNameIsSet_ = false;
    amount_ = 0;
    amountIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
}

SessionMemoryContextInfoResult::~SessionMemoryContextInfoResult() = default;

void SessionMemoryContextInfoResult::validate()
{
}

web::json::value SessionMemoryContextInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contextNameIsSet_) {
        val[utility::conversions::to_string_t("context_name")] = ModelBase::toJson(contextName_);
    }
    if(amountIsSet_) {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(amount_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool SessionMemoryContextInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("context_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("context_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContextName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string SessionMemoryContextInfoResult::getContextName() const
{
    return contextName_;
}

void SessionMemoryContextInfoResult::setContextName(const std::string& value)
{
    contextName_ = value;
    contextNameIsSet_ = true;
}

bool SessionMemoryContextInfoResult::contextNameIsSet() const
{
    return contextNameIsSet_;
}

void SessionMemoryContextInfoResult::unsetcontextName()
{
    contextNameIsSet_ = false;
}

int32_t SessionMemoryContextInfoResult::getAmount() const
{
    return amount_;
}

void SessionMemoryContextInfoResult::setAmount(int32_t value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool SessionMemoryContextInfoResult::amountIsSet() const
{
    return amountIsSet_;
}

void SessionMemoryContextInfoResult::unsetamount()
{
    amountIsSet_ = false;
}

double SessionMemoryContextInfoResult::getSize() const
{
    return size_;
}

void SessionMemoryContextInfoResult::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SessionMemoryContextInfoResult::sizeIsSet() const
{
    return sizeIsSet_;
}

void SessionMemoryContextInfoResult::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


