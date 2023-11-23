

#include "huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_instance_lts_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsLogPolicyRespondBody_instance_lts_configs::ListLtsLogPolicyRespondBody_instance_lts_configs()
{
    instanceIsSet_ = false;
    ltsConfigsIsSet_ = false;
}

ListLtsLogPolicyRespondBody_instance_lts_configs::~ListLtsLogPolicyRespondBody_instance_lts_configs() = default;

void ListLtsLogPolicyRespondBody_instance_lts_configs::validate()
{
}

web::json::value ListLtsLogPolicyRespondBody_instance_lts_configs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(ltsConfigsIsSet_) {
        val[utility::conversions::to_string_t("lts_configs")] = ModelBase::toJson(ltsConfigs_);
    }

    return val;
}
bool ListLtsLogPolicyRespondBody_instance_lts_configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            ListLtsLogPolicyRespondBody_instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ListLtsLogPolicyRespondBody_lts_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    return ok;
}


ListLtsLogPolicyRespondBody_instance ListLtsLogPolicyRespondBody_instance_lts_configs::getInstance() const
{
    return instance_;
}

void ListLtsLogPolicyRespondBody_instance_lts_configs::setInstance(const ListLtsLogPolicyRespondBody_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance_lts_configs::instanceIsSet() const
{
    return instanceIsSet_;
}

void ListLtsLogPolicyRespondBody_instance_lts_configs::unsetinstance()
{
    instanceIsSet_ = false;
}

std::vector<ListLtsLogPolicyRespondBody_lts_configs>& ListLtsLogPolicyRespondBody_instance_lts_configs::getLtsConfigs()
{
    return ltsConfigs_;
}

void ListLtsLogPolicyRespondBody_instance_lts_configs::setLtsConfigs(const std::vector<ListLtsLogPolicyRespondBody_lts_configs>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance_lts_configs::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void ListLtsLogPolicyRespondBody_instance_lts_configs::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

}
}
}
}
}


