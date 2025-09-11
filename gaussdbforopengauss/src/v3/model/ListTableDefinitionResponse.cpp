

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTableDefinitionResponse::ListTableDefinitionResponse()
{
    tableDefinition_ = "";
    tableDefinitionIsSet_ = false;
}

ListTableDefinitionResponse::~ListTableDefinitionResponse() = default;

void ListTableDefinitionResponse::validate()
{
}

web::json::value ListTableDefinitionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableDefinitionIsSet_) {
        val[utility::conversions::to_string_t("table_definition")] = ModelBase::toJson(tableDefinition_);
    }

    return val;
}
bool ListTableDefinitionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_definition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableDefinition(refVal);
        }
    }
    return ok;
}


std::string ListTableDefinitionResponse::getTableDefinition() const
{
    return tableDefinition_;
}

void ListTableDefinitionResponse::setTableDefinition(const std::string& value)
{
    tableDefinition_ = value;
    tableDefinitionIsSet_ = true;
}

bool ListTableDefinitionResponse::tableDefinitionIsSet() const
{
    return tableDefinitionIsSet_;
}

void ListTableDefinitionResponse::unsettableDefinition()
{
    tableDefinitionIsSet_ = false;
}

}
}
}
}
}


