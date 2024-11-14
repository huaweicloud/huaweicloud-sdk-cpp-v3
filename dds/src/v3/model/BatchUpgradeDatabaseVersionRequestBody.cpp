

#include "huaweicloud/dds/v3/model/BatchUpgradeDatabaseVersionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BatchUpgradeDatabaseVersionRequestBody::BatchUpgradeDatabaseVersionRequestBody()
{
    instanceIdsIsSet_ = false;
}

BatchUpgradeDatabaseVersionRequestBody::~BatchUpgradeDatabaseVersionRequestBody() = default;

void BatchUpgradeDatabaseVersionRequestBody::validate()
{
}

web::json::value BatchUpgradeDatabaseVersionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}
bool BatchUpgradeDatabaseVersionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpgradeDatabaseVersionRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void BatchUpgradeDatabaseVersionRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool BatchUpgradeDatabaseVersionRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void BatchUpgradeDatabaseVersionRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


