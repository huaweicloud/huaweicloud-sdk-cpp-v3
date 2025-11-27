

#include "huaweicloud/rds/v3/model/BatchModifyPublicationsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchModifyPublicationsRequestBody::BatchModifyPublicationsRequestBody()
{
    publicationIdsIsSet_ = false;
    jobScheduleIsSet_ = false;
}

BatchModifyPublicationsRequestBody::~BatchModifyPublicationsRequestBody() = default;

void BatchModifyPublicationsRequestBody::validate()
{
}

web::json::value BatchModifyPublicationsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationIdsIsSet_) {
        val[utility::conversions::to_string_t("publication_ids")] = ModelBase::toJson(publicationIds_);
    }
    if(jobScheduleIsSet_) {
        val[utility::conversions::to_string_t("job_schedule")] = ModelBase::toJson(jobSchedule_);
    }

    return val;
}
bool BatchModifyPublicationsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publication_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule"));
        if(!fieldValue.is_null())
        {
            OperateUsedJobSchedule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobSchedule(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchModifyPublicationsRequestBody::getPublicationIds()
{
    return publicationIds_;
}

void BatchModifyPublicationsRequestBody::setPublicationIds(const std::vector<std::string>& value)
{
    publicationIds_ = value;
    publicationIdsIsSet_ = true;
}

bool BatchModifyPublicationsRequestBody::publicationIdsIsSet() const
{
    return publicationIdsIsSet_;
}

void BatchModifyPublicationsRequestBody::unsetpublicationIds()
{
    publicationIdsIsSet_ = false;
}

OperateUsedJobSchedule BatchModifyPublicationsRequestBody::getJobSchedule() const
{
    return jobSchedule_;
}

void BatchModifyPublicationsRequestBody::setJobSchedule(const OperateUsedJobSchedule& value)
{
    jobSchedule_ = value;
    jobScheduleIsSet_ = true;
}

bool BatchModifyPublicationsRequestBody::jobScheduleIsSet() const
{
    return jobScheduleIsSet_;
}

void BatchModifyPublicationsRequestBody::unsetjobSchedule()
{
    jobScheduleIsSet_ = false;
}

}
}
}
}
}


