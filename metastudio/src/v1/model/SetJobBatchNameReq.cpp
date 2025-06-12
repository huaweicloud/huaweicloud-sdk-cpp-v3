

#include "huaweicloud/metastudio/v1/model/SetJobBatchNameReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetJobBatchNameReq::SetJobBatchNameReq()
{
    batchName_ = "";
    batchNameIsSet_ = false;
    jobIdsIsSet_ = false;
}

SetJobBatchNameReq::~SetJobBatchNameReq() = default;

void SetJobBatchNameReq::validate()
{
}

web::json::value SetJobBatchNameReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}
bool SetJobBatchNameReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("batch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobIds(refVal);
        }
    }
    return ok;
}


std::string SetJobBatchNameReq::getBatchName() const
{
    return batchName_;
}

void SetJobBatchNameReq::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool SetJobBatchNameReq::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void SetJobBatchNameReq::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::vector<std::string>& SetJobBatchNameReq::getJobIds()
{
    return jobIds_;
}

void SetJobBatchNameReq::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool SetJobBatchNameReq::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void SetJobBatchNameReq::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


