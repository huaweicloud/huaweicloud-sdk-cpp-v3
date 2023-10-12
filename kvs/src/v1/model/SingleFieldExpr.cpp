

#include "huaweicloud/kvs/v1/model/SingleFieldExpr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




SingleFieldExpr::SingleFieldExpr()
{
    field_ = "";
    fieldIsSet_ = false;
    func_ = "";
    funcIsSet_ = false;
    valueIsSet_ = false;
    valueArrayIsSet_ = false;
}

SingleFieldExpr::~SingleFieldExpr() = default;

void SingleFieldExpr::validate()
{
}

bool SingleFieldExpr::toBson(Builder &builder) const
{

    if (fieldIsSet_ && !bson_append(builder, "Field", field_)) {
        return false;
    }
    if (funcIsSet_ && !bson_append(builder, "Func", func_)) {
        return false;
    }
    if (valueIsSet_ && !bson_append(builder, "Value", value_)) {
        return false;
    }
    if (valueArrayIsSet_ && !bson_append(builder, "ValueArray", valueArray_)) {
        return false;
    }

    return true;
}

bool SingleFieldExpr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "Field") {
            if (!bson_get(it, field_)) {
                return false;
            }
            fieldIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Func") {
            if (!bson_get(it, func_)) {
                return false;
            }
            funcIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Value") {
            if (!bson_get(it, value_)) {
                return false;
            }
            valueIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ValueArray") {
            if (!bson_get(it, valueArray_)) {
                return false;
            }
            valueArrayIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string SingleFieldExpr::getField() const
{
    return field_;
}

void SingleFieldExpr::setField(const std::string& value)
{
    field_ = value;
    fieldIsSet_ = true;
}

bool SingleFieldExpr::fieldIsSet() const
{
    return fieldIsSet_;
}

void SingleFieldExpr::unsetfield()
{
    fieldIsSet_ = false;
}

std::string SingleFieldExpr::getFunc() const
{
    return func_;
}

void SingleFieldExpr::setFunc(const std::string& value)
{
    func_ = value;
    funcIsSet_ = true;
}

bool SingleFieldExpr::funcIsSet() const
{
    return funcIsSet_;
}

void SingleFieldExpr::unsetfunc()
{
    funcIsSet_ = false;
}

Document SingleFieldExpr::getValue() const
{
    return value_;
}

void SingleFieldExpr::setValue(const Document& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SingleFieldExpr::valueIsSet() const
{
    return valueIsSet_;
}

void SingleFieldExpr::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<Document>& SingleFieldExpr::getValueArray()
{
    return valueArray_;
}

void SingleFieldExpr::setValueArray(const std::vector<Document>& value)
{
    valueArray_ = value;
    valueArrayIsSet_ = true;
}

bool SingleFieldExpr::valueArrayIsSet() const
{
    return valueArrayIsSet_;
}

void SingleFieldExpr::unsetvalueArray()
{
    valueArrayIsSet_ = false;
}

}
}
}
}
}


