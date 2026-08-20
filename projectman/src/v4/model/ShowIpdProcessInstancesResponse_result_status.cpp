

#include "huaweicloud/projectman/v4/model/ShowIpdProcessInstancesResponse_result_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdProcessInstancesResponse_result_status::ShowIpdProcessInstancesResponse_result_status()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ShowIpdProcessInstancesResponse_result_status::~ShowIpdProcessInstancesResponse_result_status() = default;

void ShowIpdProcessInstancesResponse_result_status::validate()
{
}

web::json::value ShowIpdProcessInstancesResponse_result_status::toJson() const
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
bool ShowIpdProcessInstancesResponse_result_status::fromJson(const web::json::value& val)
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


std::string ShowIpdProcessInstancesResponse_result_status::getCode() const
{
    return code_;
}

void ShowIpdProcessInstancesResponse_result_status::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_status::codeIsSet() const
{
    return codeIsSet_;
}

void ShowIpdProcessInstancesResponse_result_status::unsetcode()
{
    codeIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_status::getName() const
{
    return name_;
}

void ShowIpdProcessInstancesResponse_result_status::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_status::nameIsSet() const
{
    return nameIsSet_;
}

void ShowIpdProcessInstancesResponse_result_status::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


