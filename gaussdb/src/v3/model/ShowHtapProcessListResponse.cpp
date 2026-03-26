

#include "huaweicloud/gaussdb/v3/model/ShowHtapProcessListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHtapProcessListResponse::ShowHtapProcessListResponse()
{
    processListIsSet_ = false;
}

ShowHtapProcessListResponse::~ShowHtapProcessListResponse() = default;

void ShowHtapProcessListResponse::validate()
{
}

web::json::value ShowHtapProcessListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processListIsSet_) {
        val[utility::conversions::to_string_t("process_list")] = ModelBase::toJson(processList_);
    }

    return val;
}
bool ShowHtapProcessListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("process_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_list"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapProcessInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessList(refVal);
        }
    }
    return ok;
}


std::vector<HtapProcessInfo>& ShowHtapProcessListResponse::getProcessList()
{
    return processList_;
}

void ShowHtapProcessListResponse::setProcessList(const std::vector<HtapProcessInfo>& value)
{
    processList_ = value;
    processListIsSet_ = true;
}

bool ShowHtapProcessListResponse::processListIsSet() const
{
    return processListIsSet_;
}

void ShowHtapProcessListResponse::unsetprocessList()
{
    processListIsSet_ = false;
}

}
}
}
}
}


