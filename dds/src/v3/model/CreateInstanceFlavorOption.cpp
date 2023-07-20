

#include "huaweicloud/dds/v3/model/CreateInstanceFlavorOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateInstanceFlavorOption::CreateInstanceFlavorOption()
{
    type_ = "";
    typeIsSet_ = false;
    num_ = "";
    numIsSet_ = false;
    storage_ = "";
    storageIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
}

CreateInstanceFlavorOption::~CreateInstanceFlavorOption() = default;

void CreateInstanceFlavorOption::validate()
{
}

web::json::value CreateInstanceFlavorOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }

    return val;
}

bool CreateInstanceFlavorOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    return ok;
}

std::string CreateInstanceFlavorOption::getType() const
{
    return type_;
}

void CreateInstanceFlavorOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateInstanceFlavorOption::typeIsSet() const
{
    return typeIsSet_;
}

void CreateInstanceFlavorOption::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateInstanceFlavorOption::getNum() const
{
    return num_;
}

void CreateInstanceFlavorOption::setNum(const std::string& value)
{
    num_ = value;
    numIsSet_ = true;
}

bool CreateInstanceFlavorOption::numIsSet() const
{
    return numIsSet_;
}

void CreateInstanceFlavorOption::unsetnum()
{
    numIsSet_ = false;
}

std::string CreateInstanceFlavorOption::getStorage() const
{
    return storage_;
}

void CreateInstanceFlavorOption::setStorage(const std::string& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool CreateInstanceFlavorOption::storageIsSet() const
{
    return storageIsSet_;
}

void CreateInstanceFlavorOption::unsetstorage()
{
    storageIsSet_ = false;
}

std::string CreateInstanceFlavorOption::getSize() const
{
    return size_;
}

void CreateInstanceFlavorOption::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreateInstanceFlavorOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreateInstanceFlavorOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CreateInstanceFlavorOption::getSpecCode() const
{
    return specCode_;
}

void CreateInstanceFlavorOption::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool CreateInstanceFlavorOption::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void CreateInstanceFlavorOption::unsetspecCode()
{
    specCodeIsSet_ = false;
}

}
}
}
}
}


