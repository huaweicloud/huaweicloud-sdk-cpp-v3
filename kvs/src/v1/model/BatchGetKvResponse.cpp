

#include "huaweicloud/kvs/v1/model/BatchGetKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchGetKvResponse::BatchGetKvResponse()
{
    exceptionOpersIsSet_ = false;
    returnedKvItemsOfAllIsSet_ = false;
}

BatchGetKvResponse::~BatchGetKvResponse() = default;

void BatchGetKvResponse::validate()
{
}

bool BatchGetKvResponse::toBson(Builder &builder) const
{

    if (exceptionOpersIsSet_ && !bson_append(builder, "exception_opers", exceptionOpers_)) {
        return false;
    }
    if (returnedKvItemsOfAllIsSet_ && !bson_append(builder, "returned_kv_items_of_all", returnedKvItemsOfAll_)) {
        return false;
    }

    return true;
}

bool BatchGetKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "exception_opers") {
            if (!bson_get(it, exceptionOpers_)) {
                return false;
            }
            exceptionOpersIsSet_ = true;
            ++it;
            continue;
        }
        
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

std::vector<Exception_opers_of_table>& BatchGetKvResponse::getExceptionOpers()
{
    return exceptionOpers_;
}

void BatchGetKvResponse::setExceptionOpers(const std::vector<Exception_opers_of_table>& value)
{
    exceptionOpers_ = value;
    exceptionOpersIsSet_ = true;
}

bool BatchGetKvResponse::exceptionOpersIsSet() const
{
    return exceptionOpersIsSet_;
}

void BatchGetKvResponse::unsetexceptionOpers()
{
    exceptionOpersIsSet_ = false;
}

std::vector<Returned_kv_items_of_table>& BatchGetKvResponse::getReturnedKvItemsOfAll()
{
    return returnedKvItemsOfAll_;
}

void BatchGetKvResponse::setReturnedKvItemsOfAll(const std::vector<Returned_kv_items_of_table>& value)
{
    returnedKvItemsOfAll_ = value;
    returnedKvItemsOfAllIsSet_ = true;
}

bool BatchGetKvResponse::returnedKvItemsOfAllIsSet() const
{
    return returnedKvItemsOfAllIsSet_;
}

void BatchGetKvResponse::unsetreturnedKvItemsOfAll()
{
    returnedKvItemsOfAllIsSet_ = false;
}

}
}
}
}
}


