

#include "huaweicloud/vod/v1/model/QueryCategoryRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




QueryCategoryRsp::QueryCategoryRsp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    childrenIsSet_ = false;
}

QueryCategoryRsp::~QueryCategoryRsp() = default;

void QueryCategoryRsp::validate()
{
}

web::json::value QueryCategoryRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }

    return val;
}

bool QueryCategoryRsp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryCategoryRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}

std::string QueryCategoryRsp::getId() const
{
    return id_;
}

void QueryCategoryRsp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryCategoryRsp::idIsSet() const
{
    return idIsSet_;
}

void QueryCategoryRsp::unsetid()
{
    idIsSet_ = false;
}

std::string QueryCategoryRsp::getName() const
{
    return name_;
}

void QueryCategoryRsp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryCategoryRsp::nameIsSet() const
{
    return nameIsSet_;
}

void QueryCategoryRsp::unsetname()
{
    nameIsSet_ = false;
}

std::vector<QueryCategoryRsp>& QueryCategoryRsp::getChildren()
{
    return children_;
}

void QueryCategoryRsp::setChildren(const std::vector<QueryCategoryRsp>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool QueryCategoryRsp::childrenIsSet() const
{
    return childrenIsSet_;
}

void QueryCategoryRsp::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


