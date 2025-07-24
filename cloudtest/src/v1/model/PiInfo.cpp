

#include "huaweicloud/cloudtest/v1/model/PiInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PiInfo::PiInfo()
{
    sprintsIsSet_ = false;
    piId_ = "";
    piIdIsSet_ = false;
}

PiInfo::~PiInfo() = default;

void PiInfo::validate()
{
}

web::json::value PiInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sprintsIsSet_) {
        val[utility::conversions::to_string_t("sprints")] = ModelBase::toJson(sprints_);
    }
    if(piIdIsSet_) {
        val[utility::conversions::to_string_t("pi_id")] = ModelBase::toJson(piId_);
    }

    return val;
}
bool PiInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sprints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sprints"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSprints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PiInfo::getSprints()
{
    return sprints_;
}

void PiInfo::setSprints(const std::vector<std::string>& value)
{
    sprints_ = value;
    sprintsIsSet_ = true;
}

bool PiInfo::sprintsIsSet() const
{
    return sprintsIsSet_;
}

void PiInfo::unsetsprints()
{
    sprintsIsSet_ = false;
}

std::string PiInfo::getPiId() const
{
    return piId_;
}

void PiInfo::setPiId(const std::string& value)
{
    piId_ = value;
    piIdIsSet_ = true;
}

bool PiInfo::piIdIsSet() const
{
    return piIdIsSet_;
}

void PiInfo::unsetpiId()
{
    piIdIsSet_ = false;
}

}
}
}
}
}


