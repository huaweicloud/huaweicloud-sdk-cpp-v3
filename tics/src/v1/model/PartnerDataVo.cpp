

#include "huaweicloud/tics/v1/model/PartnerDataVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




PartnerDataVo::PartnerDataVo()
{
    columnListIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    partnerDomainName_ = "";
    partnerDomainNameIsSet_ = false;
}

PartnerDataVo::~PartnerDataVo() = default;

void PartnerDataVo::validate()
{
}

web::json::value PartnerDataVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnListIsSet_) {
        val[utility::conversions::to_string_t("column_list")] = ModelBase::toJson(columnList_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(partnerDomainNameIsSet_) {
        val[utility::conversions::to_string_t("partner_domain_name")] = ModelBase::toJson(partnerDomainName_);
    }

    return val;
}
bool PartnerDataVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsDatasetColumn> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerDomainName(refVal);
        }
    }
    return ok;
}


std::vector<TicsDatasetColumn>& PartnerDataVo::getColumnList()
{
    return columnList_;
}

void PartnerDataVo::setColumnList(const std::vector<TicsDatasetColumn>& value)
{
    columnList_ = value;
    columnListIsSet_ = true;
}

bool PartnerDataVo::columnListIsSet() const
{
    return columnListIsSet_;
}

void PartnerDataVo::unsetcolumnList()
{
    columnListIsSet_ = false;
}

utility::datetime PartnerDataVo::getCreateTime() const
{
    return createTime_;
}

void PartnerDataVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PartnerDataVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PartnerDataVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PartnerDataVo::getDataType() const
{
    return dataType_;
}

void PartnerDataVo::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool PartnerDataVo::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void PartnerDataVo::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string PartnerDataVo::getDescription() const
{
    return description_;
}

void PartnerDataVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PartnerDataVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PartnerDataVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PartnerDataVo::getId() const
{
    return id_;
}

void PartnerDataVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PartnerDataVo::idIsSet() const
{
    return idIsSet_;
}

void PartnerDataVo::unsetid()
{
    idIsSet_ = false;
}

std::string PartnerDataVo::getName() const
{
    return name_;
}

void PartnerDataVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PartnerDataVo::nameIsSet() const
{
    return nameIsSet_;
}

void PartnerDataVo::unsetname()
{
    nameIsSet_ = false;
}

std::string PartnerDataVo::getPartnerDomainName() const
{
    return partnerDomainName_;
}

void PartnerDataVo::setPartnerDomainName(const std::string& value)
{
    partnerDomainName_ = value;
    partnerDomainNameIsSet_ = true;
}

bool PartnerDataVo::partnerDomainNameIsSet() const
{
    return partnerDomainNameIsSet_;
}

void PartnerDataVo::unsetpartnerDomainName()
{
    partnerDomainNameIsSet_ = false;
}

}
}
}
}
}


