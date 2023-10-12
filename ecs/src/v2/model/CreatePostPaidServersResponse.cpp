

#include "huaweicloud/ecs/v2/model/CreatePostPaidServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreatePostPaidServersResponse::CreatePostPaidServersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    serverIdsIsSet_ = false;
}

CreatePostPaidServersResponse::~CreatePostPaidServersResponse() = default;

void CreatePostPaidServersResponse::validate()
{
}

web::json::value CreatePostPaidServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(serverIdsIsSet_) {
        val[utility::conversions::to_string_t("serverIds")] = ModelBase::toJson(serverIds_);
    }

    return val;
}
bool CreatePostPaidServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serverIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIds(refVal);
        }
    }
    return ok;
}


std::string CreatePostPaidServersResponse::getJobId() const
{
    return jobId_;
}

void CreatePostPaidServersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreatePostPaidServersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreatePostPaidServersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<std::string>& CreatePostPaidServersResponse::getServerIds()
{
    return serverIds_;
}

void CreatePostPaidServersResponse::setServerIds(const std::vector<std::string>& value)
{
    serverIds_ = value;
    serverIdsIsSet_ = true;
}

bool CreatePostPaidServersResponse::serverIdsIsSet() const
{
    return serverIdsIsSet_;
}

void CreatePostPaidServersResponse::unsetserverIds()
{
    serverIdsIsSet_ = false;
}

}
}
}
}
}


