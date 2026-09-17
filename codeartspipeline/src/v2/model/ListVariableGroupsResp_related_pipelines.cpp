

#include "huaweicloud/codeartspipeline/v2/model/ListVariableGroupsResp_related_pipelines.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListVariableGroupsResp_related_pipelines::ListVariableGroupsResp_related_pipelines()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListVariableGroupsResp_related_pipelines::~ListVariableGroupsResp_related_pipelines() = default;

void ListVariableGroupsResp_related_pipelines::validate()
{
}

web::json::value ListVariableGroupsResp_related_pipelines::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListVariableGroupsResp_related_pipelines::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListVariableGroupsResp_related_pipelines::getId() const
{
    return id_;
}

void ListVariableGroupsResp_related_pipelines::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListVariableGroupsResp_related_pipelines::idIsSet() const
{
    return idIsSet_;
}

void ListVariableGroupsResp_related_pipelines::unsetid()
{
    idIsSet_ = false;
}

std::string ListVariableGroupsResp_related_pipelines::getName() const
{
    return name_;
}

void ListVariableGroupsResp_related_pipelines::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVariableGroupsResp_related_pipelines::nameIsSet() const
{
    return nameIsSet_;
}

void ListVariableGroupsResp_related_pipelines::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


