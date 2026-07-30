

#include "huaweicloud/modelarts/v1/model/ShowObsUrlOfTrainingJobLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowObsUrlOfTrainingJobLogsResponse::ShowObsUrlOfTrainingJobLogsResponse()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
    shardsIsSet_ = false;
}

ShowObsUrlOfTrainingJobLogsResponse::~ShowObsUrlOfTrainingJobLogsResponse() = default;

void ShowObsUrlOfTrainingJobLogsResponse::validate()
{
}

web::json::value ShowObsUrlOfTrainingJobLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }
    if(shardsIsSet_) {
        val[utility::conversions::to_string_t("shards")] = ModelBase::toJson(shards_);
    }

    return val;
}
bool ShowObsUrlOfTrainingJobLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shards"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shards"));
        if(!fieldValue.is_null())
        {
            Shards refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShards(refVal);
        }
    }
    return ok;
}


std::string ShowObsUrlOfTrainingJobLogsResponse::getObsUrl() const
{
    return obsUrl_;
}

void ShowObsUrlOfTrainingJobLogsResponse::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool ShowObsUrlOfTrainingJobLogsResponse::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void ShowObsUrlOfTrainingJobLogsResponse::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

Shards ShowObsUrlOfTrainingJobLogsResponse::getShards() const
{
    return shards_;
}

void ShowObsUrlOfTrainingJobLogsResponse::setShards(const Shards& value)
{
    shards_ = value;
    shardsIsSet_ = true;
}

bool ShowObsUrlOfTrainingJobLogsResponse::shardsIsSet() const
{
    return shardsIsSet_;
}

void ShowObsUrlOfTrainingJobLogsResponse::unsetshards()
{
    shardsIsSet_ = false;
}

}
}
}
}
}


