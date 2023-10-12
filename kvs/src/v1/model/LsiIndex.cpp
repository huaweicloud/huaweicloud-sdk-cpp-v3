

#include "huaweicloud/kvs/v1/model/LsiIndex.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




LsiIndex::LsiIndex()
{
    indexName_ = "";
    indexNameIsSet_ = false;
    sortKeyFieldsIsSet_ = false;
    abstractFieldsIsSet_ = false;
}

LsiIndex::~LsiIndex() = default;

void LsiIndex::validate()
{
}

bool LsiIndex::toBson(Builder &builder) const
{

    if (indexNameIsSet_ && !bson_append(builder, "IndexName", indexName_)) {
        return false;
    }
    if (sortKeyFieldsIsSet_ && !bson_append(builder, "SortKeyFields", sortKeyFields_)) {
        return false;
    }
    if (abstractFieldsIsSet_ && !bson_append(builder, "AbstractFields", abstractFields_)) {
        return false;
    }

    return true;
}

bool LsiIndex::fromBson(const Viewer &viewer)
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
        
        if (key == "SortKeyFields") {
            if (!bson_get(it, sortKeyFields_)) {
                return false;
            }
            sortKeyFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "AbstractFields") {
            if (!bson_get(it, abstractFields_)) {
                return false;
            }
            abstractFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string LsiIndex::getIndexName() const
{
    return indexName_;
}

void LsiIndex::setIndexName(const std::string& value)
{
    indexName_ = value;
    indexNameIsSet_ = true;
}

bool LsiIndex::indexNameIsSet() const
{
    return indexNameIsSet_;
}

void LsiIndex::unsetindexName()
{
    indexNameIsSet_ = false;
}

std::vector<Field>& LsiIndex::getSortKeyFields()
{
    return sortKeyFields_;
}

void LsiIndex::setSortKeyFields(const std::vector<Field>& value)
{
    sortKeyFields_ = value;
    sortKeyFieldsIsSet_ = true;
}

bool LsiIndex::sortKeyFieldsIsSet() const
{
    return sortKeyFieldsIsSet_;
}

void LsiIndex::unsetsortKeyFields()
{
    sortKeyFieldsIsSet_ = false;
}

std::vector<std::string>& LsiIndex::getAbstractFields()
{
    return abstractFields_;
}

void LsiIndex::setAbstractFields(const std::vector<std::string>& value)
{
    abstractFields_ = value;
    abstractFieldsIsSet_ = true;
}

bool LsiIndex::abstractFieldsIsSet() const
{
    return abstractFieldsIsSet_;
}

void LsiIndex::unsetabstractFields()
{
    abstractFieldsIsSet_ = false;
}

}
}
}
}
}


