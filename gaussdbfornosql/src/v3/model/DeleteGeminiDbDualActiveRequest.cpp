

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteGeminiDbDualActiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteGeminiDbDualActiveRequest::DeleteGeminiDbDualActiveRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteGeminiDbDualActiveRequest::~DeleteGeminiDbDualActiveRequest() = default;

void DeleteGeminiDbDualActiveRequest::validate()
{
}

web::json::value DeleteGeminiDbDualActiveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DeleteGeminiDbDualActiveRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string DeleteGeminiDbDualActiveRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteGeminiDbDualActiveRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteGeminiDbDualActiveRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteGeminiDbDualActiveRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


