

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_status::ProcessInstanceResponse_result_status()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ProcessInstanceResponse_result_status::~ProcessInstanceResponse_result_status() = default;

void ProcessInstanceResponse_result_status::validate()
{
}

web::json::value ProcessInstanceResponse_result_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ProcessInstanceResponse_result_status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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
    return ok;
}


std::string ProcessInstanceResponse_result_status::getCode() const
{
    return code_;
}

void ProcessInstanceResponse_result_status::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProcessInstanceResponse_result_status::codeIsSet() const
{
    return codeIsSet_;
}

void ProcessInstanceResponse_result_status::unsetcode()
{
    codeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_status::getName() const
{
    return name_;
}

void ProcessInstanceResponse_result_status::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProcessInstanceResponse_result_status::nameIsSet() const
{
    return nameIsSet_;
}

void ProcessInstanceResponse_result_status::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


