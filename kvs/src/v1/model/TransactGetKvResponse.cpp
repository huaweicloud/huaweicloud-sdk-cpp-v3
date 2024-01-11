

#include "huaweicloud/kvs/v1/model/TransactGetKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TransactGetKvResponse::TransactGetKvResponse()
{
    returnedKvItemsOfAllIsSet_ = false;
}

TransactGetKvResponse::~TransactGetKvResponse() = default;

void TransactGetKvResponse::validate()
{
}

bool TransactGetKvResponse::toBson(Builder &builder) const
{

    if (returnedKvItemsOfAllIsSet_ && !bson_append(builder, "returned_kv_items_of_all", returnedKvItemsOfAll_)) {
        return false;
    }

    return true;
}

bool TransactGetKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "returned_kv_items_of_all") {
            if (!bson_get(it, returnedKvItemsOfAll_)) {
                return false;
            }
            returnedKvItemsOfAllIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::vector<Returned_kv_items_of_table>& TransactGetKvResponse::getReturnedKvItemsOfAll()
{
    return returnedKvItemsOfAll_;
}

void TransactGetKvResponse::setReturnedKvItemsOfAll(const std::vector<Returned_kv_items_of_table>& value)
{
    returnedKvItemsOfAll_ = value;
    returnedKvItemsOfAllIsSet_ = true;
}

bool TransactGetKvResponse::returnedKvItemsOfAllIsSet() const
{
    return returnedKvItemsOfAllIsSet_;
}

void TransactGetKvResponse::unsetreturnedKvItemsOfAll()
{
    returnedKvItemsOfAllIsSet_ = false;
}

}
}
}
}
}


