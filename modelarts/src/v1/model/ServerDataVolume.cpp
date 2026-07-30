

#include "huaweicloud/modelarts/v1/model/ServerDataVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerDataVolume::ServerDataVolume()
{
    size_ = 0;
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ServerDataVolume::~ServerDataVolume() = default;

void ServerDataVolume::validate()
{
}

web::json::value ServerDataVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ServerDataVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t ServerDataVolume::getSize() const
{
    return size_;
}

void ServerDataVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ServerDataVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void ServerDataVolume::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ServerDataVolume::getType() const
{
    return type_;
}

void ServerDataVolume::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ServerDataVolume::typeIsSet() const
{
    return typeIsSet_;
}

void ServerDataVolume::unsettype()
{
    typeIsSet_ = false;
}

int32_t ServerDataVolume::getCount() const
{
    return count_;
}

void ServerDataVolume::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ServerDataVolume::countIsSet() const
{
    return countIsSet_;
}

void ServerDataVolume::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


