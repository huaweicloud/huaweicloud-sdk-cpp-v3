

#include "huaweicloud/gaussdbforopengauss/v3/model/ParamGroupDiffRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ParamGroupDiffRequestBody::ParamGroupDiffRequestBody()
{
    sourceId_ = "";
    sourceIdIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
}

ParamGroupDiffRequestBody::~ParamGroupDiffRequestBody() = default;

void ParamGroupDiffRequestBody::validate()
{
}

web::json::value ParamGroupDiffRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }

    return val;
}

bool ParamGroupDiffRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    return ok;
}

std::string ParamGroupDiffRequestBody::getSourceId() const
{
    return sourceId_;
}

void ParamGroupDiffRequestBody::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool ParamGroupDiffRequestBody::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void ParamGroupDiffRequestBody::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string ParamGroupDiffRequestBody::getTargetId() const
{
    return targetId_;
}

void ParamGroupDiffRequestBody::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool ParamGroupDiffRequestBody::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void ParamGroupDiffRequestBody::unsettargetId()
{
    targetIdIsSet_ = false;
}

}
}
}
}
}


