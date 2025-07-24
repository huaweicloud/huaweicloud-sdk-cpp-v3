

#include "huaweicloud/drs/v5/model/ShowExportProgressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowExportProgressResponse::ShowExportProgressResponse()
{
    processStatus_ = "";
    processStatusIsSet_ = false;
}

ShowExportProgressResponse::~ShowExportProgressResponse() = default;

void ShowExportProgressResponse::validate()
{
}

web::json::value ShowExportProgressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processStatusIsSet_) {
        val[utility::conversions::to_string_t("process_status")] = ModelBase::toJson(processStatus_);
    }

    return val;
}
bool ShowExportProgressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("process_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessStatus(refVal);
        }
    }
    return ok;
}


std::string ShowExportProgressResponse::getProcessStatus() const
{
    return processStatus_;
}

void ShowExportProgressResponse::setProcessStatus(const std::string& value)
{
    processStatus_ = value;
    processStatusIsSet_ = true;
}

bool ShowExportProgressResponse::processStatusIsSet() const
{
    return processStatusIsSet_;
}

void ShowExportProgressResponse::unsetprocessStatus()
{
    processStatusIsSet_ = false;
}

}
}
}
}
}


