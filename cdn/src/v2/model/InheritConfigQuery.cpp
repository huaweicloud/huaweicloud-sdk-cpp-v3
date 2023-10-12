

#include "huaweicloud/cdn/v2/model/InheritConfigQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




InheritConfigQuery::InheritConfigQuery()
{
    status_ = "";
    statusIsSet_ = false;
    inheritType_ = "";
    inheritTypeIsSet_ = false;
    inheritTimeType_ = "";
    inheritTimeTypeIsSet_ = false;
}

InheritConfigQuery::~InheritConfigQuery() = default;

void InheritConfigQuery::validate()
{
}

web::json::value InheritConfigQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(inheritTypeIsSet_) {
        val[utility::conversions::to_string_t("inherit_type")] = ModelBase::toJson(inheritType_);
    }
    if(inheritTimeTypeIsSet_) {
        val[utility::conversions::to_string_t("inherit_time_type")] = ModelBase::toJson(inheritTimeType_);
    }

    return val;
}
bool InheritConfigQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inherit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inherit_time_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_time_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritTimeType(refVal);
        }
    }
    return ok;
}


std::string InheritConfigQuery::getStatus() const
{
    return status_;
}

void InheritConfigQuery::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InheritConfigQuery::statusIsSet() const
{
    return statusIsSet_;
}

void InheritConfigQuery::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InheritConfigQuery::getInheritType() const
{
    return inheritType_;
}

void InheritConfigQuery::setInheritType(const std::string& value)
{
    inheritType_ = value;
    inheritTypeIsSet_ = true;
}

bool InheritConfigQuery::inheritTypeIsSet() const
{
    return inheritTypeIsSet_;
}

void InheritConfigQuery::unsetinheritType()
{
    inheritTypeIsSet_ = false;
}

std::string InheritConfigQuery::getInheritTimeType() const
{
    return inheritTimeType_;
}

void InheritConfigQuery::setInheritTimeType(const std::string& value)
{
    inheritTimeType_ = value;
    inheritTimeTypeIsSet_ = true;
}

bool InheritConfigQuery::inheritTimeTypeIsSet() const
{
    return inheritTimeTypeIsSet_;
}

void InheritConfigQuery::unsetinheritTimeType()
{
    inheritTimeTypeIsSet_ = false;
}

}
}
}
}
}


