

#include "huaweicloud/modelarts/v1/model/CustomMetrics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CustomMetrics::CustomMetrics()
{
    execIsSet_ = false;
    httpGetIsSet_ = false;
}

CustomMetrics::~CustomMetrics() = default;

void CustomMetrics::validate()
{
}

web::json::value CustomMetrics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(execIsSet_) {
        val[utility::conversions::to_string_t("exec")] = ModelBase::toJson(exec_);
    }
    if(httpGetIsSet_) {
        val[utility::conversions::to_string_t("http_get")] = ModelBase::toJson(httpGet_);
    }

    return val;
}
bool CustomMetrics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec"));
        if(!fieldValue.is_null())
        {
            Exec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_get"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_get"));
        if(!fieldValue.is_null())
        {
            HttpGet refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpGet(refVal);
        }
    }
    return ok;
}


Exec CustomMetrics::getExec() const
{
    return exec_;
}

void CustomMetrics::setExec(const Exec& value)
{
    exec_ = value;
    execIsSet_ = true;
}

bool CustomMetrics::execIsSet() const
{
    return execIsSet_;
}

void CustomMetrics::unsetexec()
{
    execIsSet_ = false;
}

HttpGet CustomMetrics::getHttpGet() const
{
    return httpGet_;
}

void CustomMetrics::setHttpGet(const HttpGet& value)
{
    httpGet_ = value;
    httpGetIsSet_ = true;
}

bool CustomMetrics::httpGetIsSet() const
{
    return httpGetIsSet_;
}

void CustomMetrics::unsethttpGet()
{
    httpGetIsSet_ = false;
}

}
}
}
}
}


