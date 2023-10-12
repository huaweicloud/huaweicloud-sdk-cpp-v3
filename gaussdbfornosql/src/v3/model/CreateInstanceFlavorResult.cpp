

#include "huaweicloud/gaussdbfornosql/v3/model/CreateInstanceFlavorResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateInstanceFlavorResult::CreateInstanceFlavorResult()
{
    num_ = "";
    numIsSet_ = false;
    storage_ = "";
    storageIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
}

CreateInstanceFlavorResult::~CreateInstanceFlavorResult() = default;

void CreateInstanceFlavorResult::validate()
{
}

web::json::value CreateInstanceFlavorResult::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool CreateInstanceFlavorResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateInstanceFlavorResult::getNum() const
{
    return num_;
}

void CreateInstanceFlavorResult::setNum(const std::string& value)
{
    num_ = value;
    numIsSet_ = true;
}

bool CreateInstanceFlavorResult::numIsSet() const
{
    return numIsSet_;
}

void CreateInstanceFlavorResult::unsetnum()
{
    numIsSet_ = false;
}

std::string CreateInstanceFlavorResult::getStorage() const
{
    return storage_;
}

void CreateInstanceFlavorResult::setStorage(const std::string& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool CreateInstanceFlavorResult::storageIsSet() const
{
    return storageIsSet_;
}

void CreateInstanceFlavorResult::unsetstorage()
{
    storageIsSet_ = false;
}

std::string CreateInstanceFlavorResult::getSize() const
{
    return size_;
}

void CreateInstanceFlavorResult::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreateInstanceFlavorResult::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreateInstanceFlavorResult::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CreateInstanceFlavorResult::getSpecCode() const
{
    return specCode_;
}

void CreateInstanceFlavorResult::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool CreateInstanceFlavorResult::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void CreateInstanceFlavorResult::unsetspecCode()
{
    specCodeIsSet_ = false;
}

}
}
}
}
}


