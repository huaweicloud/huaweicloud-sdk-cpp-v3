

#include "huaweicloud/kvs/v1/model/Global_secondary_index_info.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Global_secondary_index_info::Global_secondary_index_info()
{
    indexName_ = "";
    indexNameIsSet_ = false;
    indexStatus_ = "";
    indexStatusIsSet_ = false;
}

Global_secondary_index_info::~Global_secondary_index_info() = default;

void Global_secondary_index_info::validate()
{
}

bool Global_secondary_index_info::toBson(Builder &builder) const
{

    if (indexNameIsSet_ && !bson_append(builder, "index_name", indexName_)) {
        return false;
    }
    if (indexStatusIsSet_ && !bson_append(builder, "index_status", indexStatus_)) {
        return false;
    }

    return true;
}

bool Global_secondary_index_info::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "index_name") {
            if (!bson_get(it, indexName_)) {
                return false;
            }
            indexNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "index_status") {
            if (!bson_get(it, indexStatus_)) {
                return false;
            }
            indexStatusIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string Global_secondary_index_info::getIndexName() const
{
    return indexName_;
}

void Global_secondary_index_info::setIndexName(const std::string& value)
{
    indexName_ = value;
    indexNameIsSet_ = true;
}

bool Global_secondary_index_info::indexNameIsSet() const
{
    return indexNameIsSet_;
}

void Global_secondary_index_info::unsetindexName()
{
    indexNameIsSet_ = false;
}

std::string Global_secondary_index_info::getIndexStatus() const
{
    return indexStatus_;
}

void Global_secondary_index_info::setIndexStatus(const std::string& value)
{
    indexStatus_ = value;
    indexStatusIsSet_ = true;
}

bool Global_secondary_index_info::indexStatusIsSet() const
{
    return indexStatusIsSet_;
}

void Global_secondary_index_info::unsetindexStatus()
{
    indexStatusIsSet_ = false;
}

}
}
}
}
}


