

#include "huaweicloud/kvs/v1/model/Secondary_index.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Secondary_index::Secondary_index()
{
    indexName_ = "";
    indexNameIsSet_ = false;
    sortKeyFieldsIsSet_ = false;
    abstractFieldsIsSet_ = false;
}

Secondary_index::~Secondary_index() = default;

void Secondary_index::validate()
{
}

bool Secondary_index::toBson(Builder &builder) const
{

    if (indexNameIsSet_ && !bson_append(builder, "index_name", indexName_)) {
        return false;
    }
    if (sortKeyFieldsIsSet_ && !bson_append(builder, "sort_key_fields", sortKeyFields_)) {
        return false;
    }
    if (abstractFieldsIsSet_ && !bson_append(builder, "abstract_fields", abstractFields_)) {
        return false;
    }

    return true;
}

bool Secondary_index::fromBson(const Viewer &viewer)
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
        
        if (key == "sort_key_fields") {
            if (!bson_get(it, sortKeyFields_)) {
                return false;
            }
            sortKeyFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "abstract_fields") {
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

std::string Secondary_index::getIndexName() const
{
    return indexName_;
}

void Secondary_index::setIndexName(const std::string& value)
{
    indexName_ = value;
    indexNameIsSet_ = true;
}

bool Secondary_index::indexNameIsSet() const
{
    return indexNameIsSet_;
}

void Secondary_index::unsetindexName()
{
    indexNameIsSet_ = false;
}

std::vector<Field>& Secondary_index::getSortKeyFields()
{
    return sortKeyFields_;
}

void Secondary_index::setSortKeyFields(const std::vector<Field>& value)
{
    sortKeyFields_ = value;
    sortKeyFieldsIsSet_ = true;
}

bool Secondary_index::sortKeyFieldsIsSet() const
{
    return sortKeyFieldsIsSet_;
}

void Secondary_index::unsetsortKeyFields()
{
    sortKeyFieldsIsSet_ = false;
}

std::vector<std::string>& Secondary_index::getAbstractFields()
{
    return abstractFields_;
}

void Secondary_index::setAbstractFields(const std::vector<std::string>& value)
{
    abstractFields_ = value;
    abstractFieldsIsSet_ = true;
}

bool Secondary_index::abstractFieldsIsSet() const
{
    return abstractFieldsIsSet_;
}

void Secondary_index::unsetabstractFields()
{
    abstractFieldsIsSet_ = false;
}

}
}
}
}
}


