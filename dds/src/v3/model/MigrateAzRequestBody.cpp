

#include "huaweicloud/dds/v3/model/MigrateAzRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




MigrateAzRequestBody::MigrateAzRequestBody()
{
    targetAzs_ = "";
    targetAzsIsSet_ = false;
}

MigrateAzRequestBody::~MigrateAzRequestBody() = default;

void MigrateAzRequestBody::validate()
{
}

web::json::value MigrateAzRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetAzsIsSet_) {
        val[utility::conversions::to_string_t("target_azs")] = ModelBase::toJson(targetAzs_);
    }

    return val;
}
bool MigrateAzRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_azs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_azs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetAzs(refVal);
        }
    }
    return ok;
}


std::string MigrateAzRequestBody::getTargetAzs() const
{
    return targetAzs_;
}

void MigrateAzRequestBody::setTargetAzs(const std::string& value)
{
    targetAzs_ = value;
    targetAzsIsSet_ = true;
}

bool MigrateAzRequestBody::targetAzsIsSet() const
{
    return targetAzsIsSet_;
}

void MigrateAzRequestBody::unsettargetAzs()
{
    targetAzsIsSet_ = false;
}

}
}
}
}
}


