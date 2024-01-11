

#include "huaweicloud/kvs/v1/model/Single_field_expression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Single_field_expression::Single_field_expression()
{
    field_ = "";
    fieldIsSet_ = false;
    func_ = "";
    funcIsSet_ = false;
    valueIsSet_ = false;
    valueArrayIsSet_ = false;
}

Single_field_expression::~Single_field_expression() = default;

void Single_field_expression::validate()
{
}

bool Single_field_expression::toBson(Builder &builder) const
{

    if (fieldIsSet_ && !bson_append(builder, "field", field_)) {
        return false;
    }
    if (funcIsSet_ && !bson_append(builder, "func", func_)) {
        return false;
    }
    if (valueIsSet_ && !bson_append(builder, "value", value_)) {
        return false;
    }
    if (valueArrayIsSet_ && !bson_append(builder, "value_array", valueArray_)) {
        return false;
    }

    return true;
}

bool Single_field_expression::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "field") {
            if (!bson_get(it, field_)) {
                return false;
            }
            fieldIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "func") {
            if (!bson_get(it, func_)) {
                return false;
            }
            funcIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "value") {
            if (!bson_get(it, value_)) {
                return false;
            }
            valueIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "value_array") {
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

std::string Single_field_expression::getField() const
{
    return field_;
}

void Single_field_expression::setField(const std::string& value)
{
    field_ = value;
    fieldIsSet_ = true;
}

bool Single_field_expression::fieldIsSet() const
{
    return fieldIsSet_;
}

void Single_field_expression::unsetfield()
{
    fieldIsSet_ = false;
}

std::string Single_field_expression::getFunc() const
{
    return func_;
}

void Single_field_expression::setFunc(const std::string& value)
{
    func_ = value;
    funcIsSet_ = true;
}

bool Single_field_expression::funcIsSet() const
{
    return funcIsSet_;
}

void Single_field_expression::unsetfunc()
{
    funcIsSet_ = false;
}

Document Single_field_expression::getValue() const
{
    return value_;
}

void Single_field_expression::setValue(const Document& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Single_field_expression::valueIsSet() const
{
    return valueIsSet_;
}

void Single_field_expression::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<Document>& Single_field_expression::getValueArray()
{
    return valueArray_;
}

void Single_field_expression::setValueArray(const std::vector<Document>& value)
{
    valueArray_ = value;
    valueArrayIsSet_ = true;
}

bool Single_field_expression::valueArrayIsSet() const
{
    return valueArrayIsSet_;
}

void Single_field_expression::unsetvalueArray()
{
    valueArrayIsSet_ = false;
}

}
}
}
}
}


