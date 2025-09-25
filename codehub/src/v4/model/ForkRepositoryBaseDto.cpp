

#include "huaweicloud/codehub/v4/model/ForkRepositoryBaseDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ForkRepositoryBaseDto::ForkRepositoryBaseDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
}

ForkRepositoryBaseDto::~ForkRepositoryBaseDto() = default;

void ForkRepositoryBaseDto::validate()
{
}

web::json::value ForkRepositoryBaseDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }

    return val;
}
bool ForkRepositoryBaseDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
        }
    }
    return ok;
}


int32_t ForkRepositoryBaseDto::getId() const
{
    return id_;
}

void ForkRepositoryBaseDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ForkRepositoryBaseDto::idIsSet() const
{
    return idIsSet_;
}

void ForkRepositoryBaseDto::unsetid()
{
    idIsSet_ = false;
}

std::string ForkRepositoryBaseDto::getName() const
{
    return name_;
}

void ForkRepositoryBaseDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ForkRepositoryBaseDto::nameIsSet() const
{
    return nameIsSet_;
}

void ForkRepositoryBaseDto::unsetname()
{
    nameIsSet_ = false;
}

bool ForkRepositoryBaseDto::isArchived() const
{
    return archived_;
}

void ForkRepositoryBaseDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool ForkRepositoryBaseDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void ForkRepositoryBaseDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string ForkRepositoryBaseDto::getProductId() const
{
    return productId_;
}

void ForkRepositoryBaseDto::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ForkRepositoryBaseDto::productIdIsSet() const
{
    return productIdIsSet_;
}

void ForkRepositoryBaseDto::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ForkRepositoryBaseDto::getProductName() const
{
    return productName_;
}

void ForkRepositoryBaseDto::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool ForkRepositoryBaseDto::productNameIsSet() const
{
    return productNameIsSet_;
}

void ForkRepositoryBaseDto::unsetproductName()
{
    productNameIsSet_ = false;
}

}
}
}
}
}


