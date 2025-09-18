

#include "huaweicloud/projectman/v4/model/BatchDeleteIterationsV4RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteIterationsV4RequestBody::BatchDeleteIterationsV4RequestBody()
{
    iterationIdsIsSet_ = false;
}

BatchDeleteIterationsV4RequestBody::~BatchDeleteIterationsV4RequestBody() = default;

void BatchDeleteIterationsV4RequestBody::validate()
{
}

web::json::value BatchDeleteIterationsV4RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iterationIdsIsSet_) {
        val[utility::conversions::to_string_t("iteration_ids")] = ModelBase::toJson(iterationIds_);
    }

    return val;
}
bool BatchDeleteIterationsV4RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iteration_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationIds(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& BatchDeleteIterationsV4RequestBody::getIterationIds()
{
    return iterationIds_;
}

void BatchDeleteIterationsV4RequestBody::setIterationIds(std::vector<int32_t> value)
{
    iterationIds_ = value;
    iterationIdsIsSet_ = true;
}

bool BatchDeleteIterationsV4RequestBody::iterationIdsIsSet() const
{
    return iterationIdsIsSet_;
}

void BatchDeleteIterationsV4RequestBody::unsetiterationIds()
{
    iterationIdsIsSet_ = false;
}

}
}
}
}
}


