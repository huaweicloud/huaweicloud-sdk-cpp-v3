

#include "huaweicloud/kvs/v1/model/PutKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




PutKvRequestBody::PutKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    conditionExpressionIsSet_ = false;
    kvDocIsSet_ = false;
}

PutKvRequestBody::~PutKvRequestBody() = default;

void PutKvRequestBody::validate()
{
}

bool PutKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (conditionExpressionIsSet_ && !bson_append(builder, "condition_expression", conditionExpression_)) {
        return false;
    }
    if (kvDocIsSet_ && !bson_append(builder, "kv_doc", kvDoc_)) {
        return false;
    }

    return true;
}

bool PutKvRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "table_name") {
            if (!bson_get(it, tableName_)) {
                return false;
            }
            tableNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "condition_expression") {
            if (!bson_get(it, conditionExpression_)) {
                return false;
            }
            conditionExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "kv_doc") {
            if (!bson_get(it, kvDoc_)) {
                return false;
            }
            kvDocIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string PutKvRequestBody::getTableName() const
{
    return tableName_;
}

void PutKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool PutKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void PutKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

Condition_expression PutKvRequestBody::getConditionExpression() const
{
    return conditionExpression_;
}

void PutKvRequestBody::setConditionExpression(const Condition_expression& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool PutKvRequestBody::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void PutKvRequestBody::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

Document PutKvRequestBody::getKvDoc() const
{
    return kvDoc_;
}

void PutKvRequestBody::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool PutKvRequestBody::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void PutKvRequestBody::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

}
}
}
}
}


