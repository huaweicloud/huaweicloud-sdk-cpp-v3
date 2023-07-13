

#include "huaweicloud/mpc/v1/model/MultiTaskInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MultiTaskInfo::MultiTaskInfo()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
    errorIsSet_ = false;
    outputFileIsSet_ = false;
}

MultiTaskInfo::~MultiTaskInfo() = default;

void MultiTaskInfo::validate()
{
}

web::json::value MultiTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(outputFileIsSet_) {
        val[utility::conversions::to_string_t("output_file")] = ModelBase::toJson(outputFile_);
    }

    return val;
}

bool MultiTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_file"));
        if(!fieldValue.is_null())
        {
            SourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFile(refVal);
        }
    }
    return ok;
}

int32_t MultiTaskInfo::getTemplateId() const
{
    return templateId_;
}

void MultiTaskInfo::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool MultiTaskInfo::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void MultiTaskInfo::unsettemplateId()
{
    templateIdIsSet_ = false;
}

ErrorResponse MultiTaskInfo::getError() const
{
    return error_;
}

void MultiTaskInfo::setError(const ErrorResponse& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool MultiTaskInfo::errorIsSet() const
{
    return errorIsSet_;
}

void MultiTaskInfo::unseterror()
{
    errorIsSet_ = false;
}

SourceInfo MultiTaskInfo::getOutputFile() const
{
    return outputFile_;
}

void MultiTaskInfo::setOutputFile(const SourceInfo& value)
{
    outputFile_ = value;
    outputFileIsSet_ = true;
}

bool MultiTaskInfo::outputFileIsSet() const
{
    return outputFileIsSet_;
}

void MultiTaskInfo::unsetoutputFile()
{
    outputFileIsSet_ = false;
}

}
}
}
}
}


