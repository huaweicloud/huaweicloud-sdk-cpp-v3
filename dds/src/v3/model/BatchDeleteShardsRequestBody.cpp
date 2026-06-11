

#include "huaweicloud/dds/v3/model/BatchDeleteShardsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BatchDeleteShardsRequestBody::BatchDeleteShardsRequestBody()
{
    idsIsSet_ = false;
}

BatchDeleteShardsRequestBody::~BatchDeleteShardsRequestBody() = default;

void BatchDeleteShardsRequestBody::validate()
{
}

web::json::value BatchDeleteShardsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool BatchDeleteShardsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteShardsRequestBody::getIds()
{
    return ids_;
}

void BatchDeleteShardsRequestBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchDeleteShardsRequestBody::idsIsSet() const
{
    return idsIsSet_;
}

void BatchDeleteShardsRequestBody::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


