

#include "huaweicloud/projectman/v4/model/ScrumStatusFlowVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ScrumStatusFlowVo::ScrumStatusFlowVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    statusId_ = 0;
    statusIdIsSet_ = false;
    directToIsSet_ = false;
}

ScrumStatusFlowVo::~ScrumStatusFlowVo() = default;

void ScrumStatusFlowVo::validate()
{
}

web::json::value ScrumStatusFlowVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(directToIsSet_) {
        val[utility::conversions::to_string_t("direct_to")] = ModelBase::toJson(directTo_);
    }

    return val;
}
bool ScrumStatusFlowVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direct_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direct_to"));
        if(!fieldValue.is_null())
        {
            std::vector<ScrumStatusFlowDirectToVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirectTo(refVal);
        }
    }
    return ok;
}


std::string ScrumStatusFlowVo::getId() const
{
    return id_;
}

void ScrumStatusFlowVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScrumStatusFlowVo::idIsSet() const
{
    return idIsSet_;
}

void ScrumStatusFlowVo::unsetid()
{
    idIsSet_ = false;
}

std::string ScrumStatusFlowVo::getName() const
{
    return name_;
}

void ScrumStatusFlowVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScrumStatusFlowVo::nameIsSet() const
{
    return nameIsSet_;
}

void ScrumStatusFlowVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t ScrumStatusFlowVo::getStatusId() const
{
    return statusId_;
}

void ScrumStatusFlowVo::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool ScrumStatusFlowVo::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void ScrumStatusFlowVo::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::vector<ScrumStatusFlowDirectToVo>& ScrumStatusFlowVo::getDirectTo()
{
    return directTo_;
}

void ScrumStatusFlowVo::setDirectTo(const std::vector<ScrumStatusFlowDirectToVo>& value)
{
    directTo_ = value;
    directToIsSet_ = true;
}

bool ScrumStatusFlowVo::directToIsSet() const
{
    return directToIsSet_;
}

void ScrumStatusFlowVo::unsetdirectTo()
{
    directToIsSet_ = false;
}

}
}
}
}
}


