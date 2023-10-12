

#include "huaweicloud/kvs/v1/model/LsiIndexInfo.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




LsiIndexInfo::LsiIndexInfo()
{
    indexName_ = "";
    indexNameIsSet_ = false;
    indexStatus_ = "";
    indexStatusIsSet_ = false;
}

LsiIndexInfo::~LsiIndexInfo() = default;

void LsiIndexInfo::validate()
{
}

bool LsiIndexInfo::toBson(Builder &builder) const
{

    if (indexNameIsSet_ && !bson_append(builder, "IndexName", indexName_)) {
        return false;
    }
    if (indexStatusIsSet_ && !bson_append(builder, "IndexStatus", indexStatus_)) {
        return false;
    }

    return true;
}

bool LsiIndexInfo::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "IndexName") {
            if (!bson_get(it, indexName_)) {
                return false;
            }
            indexNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "IndexStatus") {
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

std::string LsiIndexInfo::getIndexName() const
{
    return indexName_;
}

void LsiIndexInfo::setIndexName(const std::string& value)
{
    indexName_ = value;
    indexNameIsSet_ = true;
}

bool LsiIndexInfo::indexNameIsSet() const
{
    return indexNameIsSet_;
}

void LsiIndexInfo::unsetindexName()
{
    indexNameIsSet_ = false;
}

std::string LsiIndexInfo::getIndexStatus() const
{
    return indexStatus_;
}

void LsiIndexInfo::setIndexStatus(const std::string& value)
{
    indexStatus_ = value;
    indexStatusIsSet_ = true;
}

bool LsiIndexInfo::indexStatusIsSet() const
{
    return indexStatusIsSet_;
}

void LsiIndexInfo::unsetindexStatus()
{
    indexStatusIsSet_ = false;
}

}
}
}
}
}


