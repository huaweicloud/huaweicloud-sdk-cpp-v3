

#include "huaweicloud/aad/v1/model/ListBlockIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListBlockIpsResponse::ListBlockIpsResponse()
{
    blockingListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListBlockIpsResponse::~ListBlockIpsResponse() = default;

void ListBlockIpsResponse::validate()
{
}

web::json::value ListBlockIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blockingListIsSet_) {
        val[utility::conversions::to_string_t("blocking_list")] = ModelBase::toJson(blockingList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListBlockIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blocking_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocking_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BlockList_blocking_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockingList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<BlockList_blocking_list>& ListBlockIpsResponse::getBlockingList()
{
    return blockingList_;
}

void ListBlockIpsResponse::setBlockingList(const std::vector<BlockList_blocking_list>& value)
{
    blockingList_ = value;
    blockingListIsSet_ = true;
}

bool ListBlockIpsResponse::blockingListIsSet() const
{
    return blockingListIsSet_;
}

void ListBlockIpsResponse::unsetblockingList()
{
    blockingListIsSet_ = false;
}

int32_t ListBlockIpsResponse::getTotal() const
{
    return total_;
}

void ListBlockIpsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListBlockIpsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListBlockIpsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


