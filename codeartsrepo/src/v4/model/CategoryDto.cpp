

#include "huaweicloud/codeartsrepo/v4/model/CategoryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CategoryDto::CategoryDto()
{
    key_ = "";
    keyIsSet_ = false;
    nameZh_ = "";
    nameZhIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    subCategoriesIsSet_ = false;
}

CategoryDto::~CategoryDto() = default;

void CategoryDto::validate()
{
}

web::json::value CategoryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(nameZhIsSet_) {
        val[utility::conversions::to_string_t("name_zh")] = ModelBase::toJson(nameZh_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(subCategoriesIsSet_) {
        val[utility::conversions::to_string_t("sub_categories")] = ModelBase::toJson(*subCategories_);
    }

    return val;
}
bool CategoryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_zh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_zh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameZh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubCategories(refVal);
        }
    }
    return ok;
}


std::string CategoryDto::getKey() const
{
    return key_;
}

void CategoryDto::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CategoryDto::keyIsSet() const
{
    return keyIsSet_;
}

void CategoryDto::unsetkey()
{
    keyIsSet_ = false;
}

std::string CategoryDto::getNameZh() const
{
    return nameZh_;
}

void CategoryDto::setNameZh(const std::string& value)
{
    nameZh_ = value;
    nameZhIsSet_ = true;
}

bool CategoryDto::nameZhIsSet() const
{
    return nameZhIsSet_;
}

void CategoryDto::unsetnameZh()
{
    nameZhIsSet_ = false;
}

std::string CategoryDto::getNameEn() const
{
    return nameEn_;
}

void CategoryDto::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool CategoryDto::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void CategoryDto::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::vector<CategoryDto>& CategoryDto::getSubCategories()
{
    return *subCategories_;
}

void CategoryDto::setSubCategories(const std::vector<CategoryDto>& value)
{
    *subCategories_ = value;
    subCategoriesIsSet_ = true;
}

bool CategoryDto::subCategoriesIsSet() const
{
    return subCategoriesIsSet_;
}

void CategoryDto::unsetsubCategories()
{
    subCategoriesIsSet_ = false;
}

}
}
}
}
}


