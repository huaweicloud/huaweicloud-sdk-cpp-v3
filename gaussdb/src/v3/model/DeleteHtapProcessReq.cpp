

#include "huaweicloud/gaussdb/v3/model/DeleteHtapProcessReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteHtapProcessReq::DeleteHtapProcessReq()
{
    processListIsSet_ = false;
}

DeleteHtapProcessReq::~DeleteHtapProcessReq() = default;

void DeleteHtapProcessReq::validate()
{
}

web::json::value DeleteHtapProcessReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processListIsSet_) {
        val[utility::conversions::to_string_t("process_list")] = ModelBase::toJson(processList_);
    }

    return val;
}
bool DeleteHtapProcessReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("process_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteHtapProcessReq::getProcessList()
{
    return processList_;
}

void DeleteHtapProcessReq::setProcessList(const std::vector<std::string>& value)
{
    processList_ = value;
    processListIsSet_ = true;
}

bool DeleteHtapProcessReq::processListIsSet() const
{
    return processListIsSet_;
}

void DeleteHtapProcessReq::unsetprocessList()
{
    processListIsSet_ = false;
}

}
}
}
}
}


