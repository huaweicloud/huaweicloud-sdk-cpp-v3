

#include "huaweicloud/kvs/v1/model/GsiIndexInfo.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




GsiIndexInfo::GsiIndexInfo()
{
    indexName_ = "";
    indexNameIsSet_ = false;
    indexStatus_ = "";
    indexStatusIsSet_ = false;
}

GsiIndexInfo::~GsiIndexInfo() = default;

void GsiIndexInfo::validate()
{
}

bool GsiIndexInfo::toBson(Builder &builder) const
{

    if (indexNameIsSet_ && !bson_append(builder, "IndexName", indexName_)) {
        return false;
    }
    if (indexStatusIsSet_ && !bson_append(builder, "IndexStatus", indexStatus_)) {
        return false;
    }

    return true;
}

bool GsiIndexInfo::fromBson(const Viewer &viewer)
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

std::string GsiIndexInfo::getIndexName() const
{
    return indexName_;
}

void GsiIndexInfo::setIndexName(const std::string& value)
{
    indexName_ = value;
    indexNameIsSet_ = true;
}

bool GsiIndexInfo::indexNameIsSet() const
{
    return indexNameIsSet_;
}

void GsiIndexInfo::unsetindexName()
{
    indexNameIsSet_ = false;
}

std::string GsiIndexInfo::getIndexStatus() const
{
    return indexStatus_;
}

void GsiIndexInfo::setIndexStatus(const std::string& value)
{
    indexStatus_ = value;
    indexStatusIsSet_ = true;
}

bool GsiIndexInfo::indexStatusIsSet() const
{
    return indexStatusIsSet_;
}

void GsiIndexInfo::unsetindexStatus()
{
    indexStatusIsSet_ = false;
}

}
}
}
}
}


