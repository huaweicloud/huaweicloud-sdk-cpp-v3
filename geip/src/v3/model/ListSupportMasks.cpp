

#include "huaweicloud/geip/v3/model/ListSupportMasks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListSupportMasks::ListSupportMasks()
{
    id_ = "";
    idIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    mask_ = 0;
    maskIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ListSupportMasks::~ListSupportMasks() = default;

void ListSupportMasks::validate()
{
}

web::json::value ListSupportMasks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(maskIsSet_) {
        val[utility::conversions::to_string_t("mask")] = ModelBase::toJson(mask_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ListSupportMasks::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string ListSupportMasks::getId() const
{
    return id_;
}

void ListSupportMasks::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSupportMasks::idIsSet() const
{
    return idIsSet_;
}

void ListSupportMasks::unsetid()
{
    idIsSet_ = false;
}

int32_t ListSupportMasks::getIpVersion() const
{
    return ipVersion_;
}

void ListSupportMasks::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListSupportMasks::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListSupportMasks::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

int32_t ListSupportMasks::getMask() const
{
    return mask_;
}

void ListSupportMasks::setMask(int32_t value)
{
    mask_ = value;
    maskIsSet_ = true;
}

bool ListSupportMasks::maskIsSet() const
{
    return maskIsSet_;
}

void ListSupportMasks::unsetmask()
{
    maskIsSet_ = false;
}

utility::datetime ListSupportMasks::getCreatedAt() const
{
    return createdAt_;
}

void ListSupportMasks::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListSupportMasks::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListSupportMasks::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ListSupportMasks::getUpdatedAt() const
{
    return updatedAt_;
}

void ListSupportMasks::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListSupportMasks::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListSupportMasks::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


