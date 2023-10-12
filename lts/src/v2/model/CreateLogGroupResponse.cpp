

#include "huaweicloud/lts/v2/model/CreateLogGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogGroupResponse::CreateLogGroupResponse()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
}

CreateLogGroupResponse::~CreateLogGroupResponse() = default;

void CreateLogGroupResponse::validate()
{
}

web::json::value CreateLogGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }

    return val;
}
bool CreateLogGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    return ok;
}


std::string CreateLogGroupResponse::getLogGroupId() const
{
    return logGroupId_;
}

void CreateLogGroupResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateLogGroupResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateLogGroupResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

}
}
}
}
}


