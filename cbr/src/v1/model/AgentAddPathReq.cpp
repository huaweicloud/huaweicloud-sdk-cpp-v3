

#include "huaweicloud/cbr/v1/model/AgentAddPathReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AgentAddPathReq::AgentAddPathReq()
{
    addPathIsSet_ = false;
}

AgentAddPathReq::~AgentAddPathReq() = default;

void AgentAddPathReq::validate()
{
}

web::json::value AgentAddPathReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addPathIsSet_) {
        val[utility::conversions::to_string_t("add_path")] = ModelBase::toJson(addPath_);
    }

    return val;
}
bool AgentAddPathReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("add_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_path"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddPath(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AgentAddPathReq::getAddPath()
{
    return addPath_;
}

void AgentAddPathReq::setAddPath(const std::vector<std::string>& value)
{
    addPath_ = value;
    addPathIsSet_ = true;
}

bool AgentAddPathReq::addPathIsSet() const
{
    return addPathIsSet_;
}

void AgentAddPathReq::unsetaddPath()
{
    addPathIsSet_ = false;
}

}
}
}
}
}


