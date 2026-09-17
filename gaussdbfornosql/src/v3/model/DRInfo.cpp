

#include "huaweicloud/gaussdbfornosql/v3/model/DRInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DRInfo::DRInfo()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
}

DRInfo::~DRInfo() = default;

void DRInfo::validate()
{
}

web::json::value DRInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }

    return val;
}
bool DRInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    return ok;
}


std::string DRInfo::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void DRInfo::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool DRInfo::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void DRInfo::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

}
}
}
}
}


