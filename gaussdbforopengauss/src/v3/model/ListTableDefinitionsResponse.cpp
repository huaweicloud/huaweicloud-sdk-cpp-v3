

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTableDefinitionsResponse::ListTableDefinitionsResponse()
{
    tableDefinitionsIsSet_ = false;
}

ListTableDefinitionsResponse::~ListTableDefinitionsResponse() = default;

void ListTableDefinitionsResponse::validate()
{
}

web::json::value ListTableDefinitionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableDefinitionsIsSet_) {
        val[utility::conversions::to_string_t("table_definitions")] = ModelBase::toJson(tableDefinitions_);
    }

    return val;
}
bool ListTableDefinitionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_definitions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_definitions"));
        if(!fieldValue.is_null())
        {
            std::vector<SchemaTableDefinitionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableDefinitions(refVal);
        }
    }
    return ok;
}


std::vector<SchemaTableDefinitionResult>& ListTableDefinitionsResponse::getTableDefinitions()
{
    return tableDefinitions_;
}

void ListTableDefinitionsResponse::setTableDefinitions(const std::vector<SchemaTableDefinitionResult>& value)
{
    tableDefinitions_ = value;
    tableDefinitionsIsSet_ = true;
}

bool ListTableDefinitionsResponse::tableDefinitionsIsSet() const
{
    return tableDefinitionsIsSet_;
}

void ListTableDefinitionsResponse::unsettableDefinitions()
{
    tableDefinitionsIsSet_ = false;
}

}
}
}
}
}


