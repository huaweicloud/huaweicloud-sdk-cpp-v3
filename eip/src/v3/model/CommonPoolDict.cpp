

#include "huaweicloud/eip/v3/model/CommonPoolDict.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CommonPoolDict::CommonPoolDict()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    allowShareBandwidthTypesIsSet_ = false;
}

CommonPoolDict::~CommonPoolDict() = default;

void CommonPoolDict::validate()
{
}

web::json::value CommonPoolDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(allowShareBandwidthTypesIsSet_) {
        val[utility::conversions::to_string_t("allow_share_bandwidth_types")] = ModelBase::toJson(allowShareBandwidthTypes_);
    }

    return val;
}

bool CommonPoolDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_share_bandwidth_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_share_bandwidth_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowShareBandwidthTypes(refVal);
        }
    }
    return ok;
}


std::string CommonPoolDict::getName() const
{
    return name_;
}

void CommonPoolDict::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CommonPoolDict::nameIsSet() const
{
    return nameIsSet_;
}

void CommonPoolDict::unsetname()
{
    nameIsSet_ = false;
}

std::string CommonPoolDict::getStatus() const
{
    return status_;
}

void CommonPoolDict::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CommonPoolDict::statusIsSet() const
{
    return statusIsSet_;
}

void CommonPoolDict::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CommonPoolDict::getType() const
{
    return type_;
}

void CommonPoolDict::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CommonPoolDict::typeIsSet() const
{
    return typeIsSet_;
}

void CommonPoolDict::unsettype()
{
    typeIsSet_ = false;
}

int32_t CommonPoolDict::getUsed() const
{
    return used_;
}

void CommonPoolDict::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool CommonPoolDict::usedIsSet() const
{
    return usedIsSet_;
}

void CommonPoolDict::unsetused()
{
    usedIsSet_ = false;
}

std::string CommonPoolDict::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void CommonPoolDict::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool CommonPoolDict::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void CommonPoolDict::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string CommonPoolDict::getId() const
{
    return id_;
}

void CommonPoolDict::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommonPoolDict::idIsSet() const
{
    return idIsSet_;
}

void CommonPoolDict::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& CommonPoolDict::getAllowShareBandwidthTypes()
{
    return allowShareBandwidthTypes_;
}

void CommonPoolDict::setAllowShareBandwidthTypes(const std::vector<std::string>& value)
{
    allowShareBandwidthTypes_ = value;
    allowShareBandwidthTypesIsSet_ = true;
}

bool CommonPoolDict::allowShareBandwidthTypesIsSet() const
{
    return allowShareBandwidthTypesIsSet_;
}

void CommonPoolDict::unsetallowShareBandwidthTypes()
{
    allowShareBandwidthTypesIsSet_ = false;
}

}
}
}
}
}


