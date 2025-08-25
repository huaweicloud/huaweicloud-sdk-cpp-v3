

#include "huaweicloud/cce/v3/model/NodeNicSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeNicSpec::NodeNicSpec()
{
    primaryNicIsSet_ = false;
    extNicsIsSet_ = false;
}

NodeNicSpec::~NodeNicSpec() = default;

void NodeNicSpec::validate()
{
}

web::json::value NodeNicSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(primaryNicIsSet_) {
        val[utility::conversions::to_string_t("primaryNic")] = ModelBase::toJson(primaryNic_);
    }
    if(extNicsIsSet_) {
        val[utility::conversions::to_string_t("extNics")] = ModelBase::toJson(extNics_);
    }

    return val;
}
bool NodeNicSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("primaryNic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primaryNic"));
        if(!fieldValue.is_null())
        {
            NicSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryNic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extNics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extNics"));
        if(!fieldValue.is_null())
        {
            std::vector<NicSpec> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtNics(refVal);
        }
    }
    return ok;
}


NicSpec NodeNicSpec::getPrimaryNic() const
{
    return primaryNic_;
}

void NodeNicSpec::setPrimaryNic(const NicSpec& value)
{
    primaryNic_ = value;
    primaryNicIsSet_ = true;
}

bool NodeNicSpec::primaryNicIsSet() const
{
    return primaryNicIsSet_;
}

void NodeNicSpec::unsetprimaryNic()
{
    primaryNicIsSet_ = false;
}

std::vector<NicSpec>& NodeNicSpec::getExtNics()
{
    return extNics_;
}

void NodeNicSpec::setExtNics(const std::vector<NicSpec>& value)
{
    extNics_ = value;
    extNicsIsSet_ = true;
}

bool NodeNicSpec::extNicsIsSet() const
{
    return extNicsIsSet_;
}

void NodeNicSpec::unsetextNics()
{
    extNicsIsSet_ = false;
}

}
}
}
}
}


