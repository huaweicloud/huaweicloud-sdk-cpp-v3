

#include "huaweicloud/modelarts/v1/model/ServerVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerVolume::ServerVolume()
{
    size_ = 0;
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    evsType_ = "";
    evsTypeIsSet_ = false;
    evsId_ = "";
    evsIdIsSet_ = false;
}

ServerVolume::~ServerVolume() = default;

void ServerVolume::validate()
{
}

web::json::value ServerVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(evsTypeIsSet_) {
        val[utility::conversions::to_string_t("evs_type")] = ModelBase::toJson(evsType_);
    }
    if(evsIdIsSet_) {
        val[utility::conversions::to_string_t("evs_id")] = ModelBase::toJson(evsId_);
    }

    return val;
}
bool ServerVolume::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("evs_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evs_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evs_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evs_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvsId(refVal);
        }
    }
    return ok;
}


int32_t ServerVolume::getSize() const
{
    return size_;
}

void ServerVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ServerVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void ServerVolume::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ServerVolume::getType() const
{
    return type_;
}

void ServerVolume::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ServerVolume::typeIsSet() const
{
    return typeIsSet_;
}

void ServerVolume::unsettype()
{
    typeIsSet_ = false;
}

std::string ServerVolume::getEvsType() const
{
    return evsType_;
}

void ServerVolume::setEvsType(const std::string& value)
{
    evsType_ = value;
    evsTypeIsSet_ = true;
}

bool ServerVolume::evsTypeIsSet() const
{
    return evsTypeIsSet_;
}

void ServerVolume::unsetevsType()
{
    evsTypeIsSet_ = false;
}

std::string ServerVolume::getEvsId() const
{
    return evsId_;
}

void ServerVolume::setEvsId(const std::string& value)
{
    evsId_ = value;
    evsIdIsSet_ = true;
}

bool ServerVolume::evsIdIsSet() const
{
    return evsIdIsSet_;
}

void ServerVolume::unsetevsId()
{
    evsIdIsSet_ = false;
}

}
}
}
}
}


