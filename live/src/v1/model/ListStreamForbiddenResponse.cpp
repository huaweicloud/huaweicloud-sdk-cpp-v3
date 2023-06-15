

#include "huaweicloud/live/v1/model/ListStreamForbiddenResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListStreamForbiddenResponse::ListStreamForbiddenResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    blocksIsSet_ = false;
}

ListStreamForbiddenResponse::~ListStreamForbiddenResponse() = default;

void ListStreamForbiddenResponse::validate()
{
}

web::json::value ListStreamForbiddenResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(blocksIsSet_) {
        val[utility::conversions::to_string_t("blocks")] = ModelBase::toJson(blocks_);
    }

    return val;
}

bool ListStreamForbiddenResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("blocks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocks"));
        if(!fieldValue.is_null())
        {
            std::vector<StreamForbiddenList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlocks(refVal);
        }
    }
    return ok;
}


int32_t ListStreamForbiddenResponse::getTotal() const
{
    return total_;
}

void ListStreamForbiddenResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListStreamForbiddenResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListStreamForbiddenResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<StreamForbiddenList>& ListStreamForbiddenResponse::getBlocks()
{
    return blocks_;
}

void ListStreamForbiddenResponse::setBlocks(const std::vector<StreamForbiddenList>& value)
{
    blocks_ = value;
    blocksIsSet_ = true;
}

bool ListStreamForbiddenResponse::blocksIsSet() const
{
    return blocksIsSet_;
}

void ListStreamForbiddenResponse::unsetblocks()
{
    blocksIsSet_ = false;
}

}
}
}
}
}


