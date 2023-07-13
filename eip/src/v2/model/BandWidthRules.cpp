

#include "huaweicloud/eip/v2/model/BandWidthRules.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BandWidthRules::BandWidthRules()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    egressSize_ = 0;
    egressSizeIsSet_ = false;
    egressGuarentedSize_ = 0;
    egressGuarentedSizeIsSet_ = false;
    publicipInfoIsSet_ = false;
}

BandWidthRules::~BandWidthRules() = default;

void BandWidthRules::validate()
{
}

web::json::value BandWidthRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(egressSizeIsSet_) {
        val[utility::conversions::to_string_t("egress_size")] = ModelBase::toJson(egressSize_);
    }
    if(egressGuarentedSizeIsSet_) {
        val[utility::conversions::to_string_t("egress_guarented_size")] = ModelBase::toJson(egressGuarentedSize_);
    }
    if(publicipInfoIsSet_) {
        val[utility::conversions::to_string_t("publicip_info")] = ModelBase::toJson(publicipInfo_);
    }

    return val;
}

bool BandWidthRules::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("egress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("egress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEgressSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("egress_guarented_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("egress_guarented_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEgressGuarentedSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicipInfoResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipInfo(refVal);
        }
    }
    return ok;
}

std::string BandWidthRules::getId() const
{
    return id_;
}

void BandWidthRules::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BandWidthRules::idIsSet() const
{
    return idIsSet_;
}

void BandWidthRules::unsetid()
{
    idIsSet_ = false;
}

std::string BandWidthRules::getName() const
{
    return name_;
}

void BandWidthRules::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BandWidthRules::nameIsSet() const
{
    return nameIsSet_;
}

void BandWidthRules::unsetname()
{
    nameIsSet_ = false;
}

bool BandWidthRules::isAdminStateUp() const
{
    return adminStateUp_;
}

void BandWidthRules::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool BandWidthRules::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void BandWidthRules::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

int32_t BandWidthRules::getEgressSize() const
{
    return egressSize_;
}

void BandWidthRules::setEgressSize(int32_t value)
{
    egressSize_ = value;
    egressSizeIsSet_ = true;
}

bool BandWidthRules::egressSizeIsSet() const
{
    return egressSizeIsSet_;
}

void BandWidthRules::unsetegressSize()
{
    egressSizeIsSet_ = false;
}

int32_t BandWidthRules::getEgressGuarentedSize() const
{
    return egressGuarentedSize_;
}

void BandWidthRules::setEgressGuarentedSize(int32_t value)
{
    egressGuarentedSize_ = value;
    egressGuarentedSizeIsSet_ = true;
}

bool BandWidthRules::egressGuarentedSizeIsSet() const
{
    return egressGuarentedSizeIsSet_;
}

void BandWidthRules::unsetegressGuarentedSize()
{
    egressGuarentedSizeIsSet_ = false;
}

std::vector<PublicipInfoResp>& BandWidthRules::getPublicipInfo()
{
    return publicipInfo_;
}

void BandWidthRules::setPublicipInfo(const std::vector<PublicipInfoResp>& value)
{
    publicipInfo_ = value;
    publicipInfoIsSet_ = true;
}

bool BandWidthRules::publicipInfoIsSet() const
{
    return publicipInfoIsSet_;
}

void BandWidthRules::unsetpublicipInfo()
{
    publicipInfoIsSet_ = false;
}

}
}
}
}
}


