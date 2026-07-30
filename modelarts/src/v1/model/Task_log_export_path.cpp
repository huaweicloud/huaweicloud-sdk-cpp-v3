

#include "huaweicloud/modelarts/v1/model/Task_log_export_path.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_log_export_path::Task_log_export_path()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
}

Task_log_export_path::~Task_log_export_path() = default;

void Task_log_export_path::validate()
{
}

web::json::value Task_log_export_path::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }

    return val;
}
bool Task_log_export_path::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUrl(refVal);
        }
    }
    return ok;
}


std::string Task_log_export_path::getObsUrl() const
{
    return obsUrl_;
}

void Task_log_export_path::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool Task_log_export_path::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void Task_log_export_path::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

}
}
}
}
}


