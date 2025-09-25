

#include "huaweicloud/gaussdbforopengauss/v3/model/LtsInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




LtsInfoOption::LtsInfoOption()
{
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

LtsInfoOption::~LtsInfoOption() = default;

void LtsInfoOption::validate()
{
}

web::json::value LtsInfoOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}
bool LtsInfoOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    return ok;
}


std::string LtsInfoOption::getLogGroupName() const
{
    return logGroupName_;
}

void LtsInfoOption::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool LtsInfoOption::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void LtsInfoOption::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string LtsInfoOption::getLogStreamName() const
{
    return logStreamName_;
}

void LtsInfoOption::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool LtsInfoOption::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void LtsInfoOption::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


