

#include "huaweicloud/cbr/v1/model/AgentRemovePathReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AgentRemovePathReq::AgentRemovePathReq()
{
    removePathIsSet_ = false;
}

AgentRemovePathReq::~AgentRemovePathReq() = default;

void AgentRemovePathReq::validate()
{
}

web::json::value AgentRemovePathReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(removePathIsSet_) {
        val[utility::conversions::to_string_t("remove_path")] = ModelBase::toJson(removePath_);
    }

    return val;
}
bool AgentRemovePathReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remove_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remove_path"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemovePath(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AgentRemovePathReq::getRemovePath()
{
    return removePath_;
}

void AgentRemovePathReq::setRemovePath(const std::vector<std::string>& value)
{
    removePath_ = value;
    removePathIsSet_ = true;
}

bool AgentRemovePathReq::removePathIsSet() const
{
    return removePathIsSet_;
}

void AgentRemovePathReq::unsetremovePath()
{
    removePathIsSet_ = false;
}

}
}
}
}
}


