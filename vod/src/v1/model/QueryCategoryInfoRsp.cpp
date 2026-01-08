

#include "huaweicloud/vod/v1/model/QueryCategoryInfoRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




QueryCategoryInfoRsp::QueryCategoryInfoRsp()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    subCategoriesIsSet_ = false;
}

QueryCategoryInfoRsp::~QueryCategoryInfoRsp() = default;

void QueryCategoryInfoRsp::validate()
{
}

web::json::value QueryCategoryInfoRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(subCategoriesIsSet_) {
        val[utility::conversions::to_string_t("sub_categories")] = ModelBase::toJson(subCategories_);
    }

    return val;
}
bool QueryCategoryInfoRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("sub_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubCategories(refVal);
        }
    }
    return ok;
}


int32_t QueryCategoryInfoRsp::getId() const
{
    return id_;
}

void QueryCategoryInfoRsp::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryCategoryInfoRsp::idIsSet() const
{
    return idIsSet_;
}

void QueryCategoryInfoRsp::unsetid()
{
    idIsSet_ = false;
}

std::string QueryCategoryInfoRsp::getName() const
{
    return name_;
}

void QueryCategoryInfoRsp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryCategoryInfoRsp::nameIsSet() const
{
    return nameIsSet_;
}

void QueryCategoryInfoRsp::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CategoryInfo>& QueryCategoryInfoRsp::getSubCategories()
{
    return subCategories_;
}

void QueryCategoryInfoRsp::setSubCategories(const std::vector<CategoryInfo>& value)
{
    subCategories_ = value;
    subCategoriesIsSet_ = true;
}

bool QueryCategoryInfoRsp::subCategoriesIsSet() const
{
    return subCategoriesIsSet_;
}

void QueryCategoryInfoRsp::unsetsubCategories()
{
    subCategoriesIsSet_ = false;
}

}
}
}
}
}


