

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSessionMemoryContextResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSessionMemoryContextResponse::ListSessionMemoryContextResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    memoryContextInfoIsSet_ = false;
}

ListSessionMemoryContextResponse::~ListSessionMemoryContextResponse() = default;

void ListSessionMemoryContextResponse::validate()
{
}

web::json::value ListSessionMemoryContextResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(memoryContextInfoIsSet_) {
        val[utility::conversions::to_string_t("memory_context_info")] = ModelBase::toJson(memoryContextInfo_);
    }

    return val;
}
bool ListSessionMemoryContextResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_context_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_context_info"));
        if(!fieldValue.is_null())
        {
            std::vector<SessionMemoryContextInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemoryContextInfo(refVal);
        }
    }
    return ok;
}


int32_t ListSessionMemoryContextResponse::getTotal() const
{
    return total_;
}

void ListSessionMemoryContextResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSessionMemoryContextResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSessionMemoryContextResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SessionMemoryContextInfoResult>& ListSessionMemoryContextResponse::getMemoryContextInfo()
{
    return memoryContextInfo_;
}

void ListSessionMemoryContextResponse::setMemoryContextInfo(const std::vector<SessionMemoryContextInfoResult>& value)
{
    memoryContextInfo_ = value;
    memoryContextInfoIsSet_ = true;
}

bool ListSessionMemoryContextResponse::memoryContextInfoIsSet() const
{
    return memoryContextInfoIsSet_;
}

void ListSessionMemoryContextResponse::unsetmemoryContextInfo()
{
    memoryContextInfoIsSet_ = false;
}

}
}
}
}
}


