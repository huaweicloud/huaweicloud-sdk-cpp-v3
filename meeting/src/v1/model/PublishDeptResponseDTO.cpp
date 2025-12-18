

#include "huaweicloud/meeting/v1/model/PublishDeptResponseDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PublishDeptResponseDTO::PublishDeptResponseDTO()
{
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
}

PublishDeptResponseDTO::~PublishDeptResponseDTO() = default;

void PublishDeptResponseDTO::validate()
{
}

web::json::value PublishDeptResponseDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }

    return val;
}
bool PublishDeptResponseDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    return ok;
}


std::string PublishDeptResponseDTO::getDeptCode() const
{
    return deptCode_;
}

void PublishDeptResponseDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool PublishDeptResponseDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void PublishDeptResponseDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string PublishDeptResponseDTO::getDeptName() const
{
    return deptName_;
}

void PublishDeptResponseDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool PublishDeptResponseDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void PublishDeptResponseDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

}
}
}
}
}


