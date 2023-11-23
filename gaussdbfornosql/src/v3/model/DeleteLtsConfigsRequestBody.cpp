

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteLtsConfigsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteLtsConfigsRequestBody::DeleteLtsConfigsRequestBody()
{
    instanceIdsIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
}

DeleteLtsConfigsRequestBody::~DeleteLtsConfigsRequestBody() = default;

void DeleteLtsConfigsRequestBody::validate()
{
}

web::json::value DeleteLtsConfigsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }

    return val;
}
bool DeleteLtsConfigsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteLtsConfigsRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void DeleteLtsConfigsRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool DeleteLtsConfigsRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void DeleteLtsConfigsRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string DeleteLtsConfigsRequestBody::getLogType() const
{
    return logType_;
}

void DeleteLtsConfigsRequestBody::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool DeleteLtsConfigsRequestBody::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void DeleteLtsConfigsRequestBody::unsetlogType()
{
    logTypeIsSet_ = false;
}

}
}
}
}
}


