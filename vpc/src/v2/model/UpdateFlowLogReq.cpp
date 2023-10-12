

#include "huaweicloud/vpc/v2/model/UpdateFlowLogReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateFlowLogReq::UpdateFlowLogReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    adminState_ = false;
    adminStateIsSet_ = false;
}

UpdateFlowLogReq::~UpdateFlowLogReq() = default;

void UpdateFlowLogReq::validate()
{
}

web::json::value UpdateFlowLogReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(adminStateIsSet_) {
        val[utility::conversions::to_string_t("admin_state")] = ModelBase::toJson(adminState_);
    }

    return val;
}
bool UpdateFlowLogReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminState(refVal);
        }
    }
    return ok;
}


std::string UpdateFlowLogReq::getName() const
{
    return name_;
}

void UpdateFlowLogReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateFlowLogReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateFlowLogReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateFlowLogReq::getDescription() const
{
    return description_;
}

void UpdateFlowLogReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateFlowLogReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateFlowLogReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool UpdateFlowLogReq::isAdminState() const
{
    return adminState_;
}

void UpdateFlowLogReq::setAdminState(bool value)
{
    adminState_ = value;
    adminStateIsSet_ = true;
}

bool UpdateFlowLogReq::adminStateIsSet() const
{
    return adminStateIsSet_;
}

void UpdateFlowLogReq::unsetadminState()
{
    adminStateIsSet_ = false;
}

}
}
}
}
}


