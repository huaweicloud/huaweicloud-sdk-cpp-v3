

#include "huaweicloud/gaussdb/v3/model/ChInstanceLtsConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChInstanceLtsConfigs::ChInstanceLtsConfigs()
{
    ltsConfigsIsSet_ = false;
    instanceIsSet_ = false;
}

ChInstanceLtsConfigs::~ChInstanceLtsConfigs() = default;

void ChInstanceLtsConfigs::validate()
{
}

web::json::value ChInstanceLtsConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ltsConfigsIsSet_) {
        val[utility::conversions::to_string_t("lts_configs")] = ModelBase::toJson(ltsConfigs_);
    }
    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }

    return val;
}
bool ChInstanceLtsConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ChLtsConfigs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            ChInstanceLtsConfigs_instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}


std::vector<ChLtsConfigs>& ChInstanceLtsConfigs::getLtsConfigs()
{
    return ltsConfigs_;
}

void ChInstanceLtsConfigs::setLtsConfigs(const std::vector<ChLtsConfigs>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool ChInstanceLtsConfigs::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void ChInstanceLtsConfigs::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

ChInstanceLtsConfigs_instance ChInstanceLtsConfigs::getInstance() const
{
    return instance_;
}

void ChInstanceLtsConfigs::setInstance(const ChInstanceLtsConfigs_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool ChInstanceLtsConfigs::instanceIsSet() const
{
    return instanceIsSet_;
}

void ChInstanceLtsConfigs::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


