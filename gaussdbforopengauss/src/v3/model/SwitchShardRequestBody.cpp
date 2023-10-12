

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchShardRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchShardRequestBody::SwitchShardRequestBody()
{
    shardsIsSet_ = false;
}

SwitchShardRequestBody::~SwitchShardRequestBody() = default;

void SwitchShardRequestBody::validate()
{
}

web::json::value SwitchShardRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shardsIsSet_) {
        val[utility::conversions::to_string_t("shards")] = ModelBase::toJson(shards_);
    }

    return val;
}
bool SwitchShardRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shards"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shards"));
        if(!fieldValue.is_null())
        {
            std::vector<Shards> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShards(refVal);
        }
    }
    return ok;
}


std::vector<Shards>& SwitchShardRequestBody::getShards()
{
    return shards_;
}

void SwitchShardRequestBody::setShards(const std::vector<Shards>& value)
{
    shards_ = value;
    shardsIsSet_ = true;
}

bool SwitchShardRequestBody::shardsIsSet() const
{
    return shardsIsSet_;
}

void SwitchShardRequestBody::unsetshards()
{
    shardsIsSet_ = false;
}

}
}
}
}
}


