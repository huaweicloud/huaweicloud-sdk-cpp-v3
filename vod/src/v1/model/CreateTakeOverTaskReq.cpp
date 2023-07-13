

#include "huaweicloud/vod/v1/model/CreateTakeOverTaskReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTakeOverTaskReq::CreateTakeOverTaskReq()
{
    bucket_ = "";
    bucketIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    suffixIsSet_ = false;
    templateGroupName_ = "";
    templateGroupNameIsSet_ = false;
    workflowName_ = "";
    workflowNameIsSet_ = false;
    hostType_ = 0;
    hostTypeIsSet_ = false;
    outputBucket_ = "";
    outputBucketIsSet_ = false;
    outputPath_ = "";
    outputPathIsSet_ = false;
}

CreateTakeOverTaskReq::~CreateTakeOverTaskReq() = default;

void CreateTakeOverTaskReq::validate()
{
}

web::json::value CreateTakeOverTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(suffixIsSet_) {
        val[utility::conversions::to_string_t("suffix")] = ModelBase::toJson(suffix_);
    }
    if(templateGroupNameIsSet_) {
        val[utility::conversions::to_string_t("template_group_name")] = ModelBase::toJson(templateGroupName_);
    }
    if(workflowNameIsSet_) {
        val[utility::conversions::to_string_t("workflow_name")] = ModelBase::toJson(workflowName_);
    }
    if(hostTypeIsSet_) {
        val[utility::conversions::to_string_t("host_type")] = ModelBase::toJson(hostType_);
    }
    if(outputBucketIsSet_) {
        val[utility::conversions::to_string_t("output_bucket")] = ModelBase::toJson(outputBucket_);
    }
    if(outputPathIsSet_) {
        val[utility::conversions::to_string_t("output_path")] = ModelBase::toJson(outputPath_);
    }

    return val;
}

bool CreateTakeOverTaskReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suffix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suffix"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuffix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputPath(refVal);
        }
    }
    return ok;
}

std::string CreateTakeOverTaskReq::getBucket() const
{
    return bucket_;
}

void CreateTakeOverTaskReq::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool CreateTakeOverTaskReq::bucketIsSet() const
{
    return bucketIsSet_;
}

void CreateTakeOverTaskReq::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string CreateTakeOverTaskReq::getObject() const
{
    return object_;
}

void CreateTakeOverTaskReq::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool CreateTakeOverTaskReq::objectIsSet() const
{
    return objectIsSet_;
}

void CreateTakeOverTaskReq::unsetobject()
{
    objectIsSet_ = false;
}

std::vector<std::string>& CreateTakeOverTaskReq::getSuffix()
{
    return suffix_;
}

void CreateTakeOverTaskReq::setSuffix(const std::vector<std::string>& value)
{
    suffix_ = value;
    suffixIsSet_ = true;
}

bool CreateTakeOverTaskReq::suffixIsSet() const
{
    return suffixIsSet_;
}

void CreateTakeOverTaskReq::unsetsuffix()
{
    suffixIsSet_ = false;
}

std::string CreateTakeOverTaskReq::getTemplateGroupName() const
{
    return templateGroupName_;
}

void CreateTakeOverTaskReq::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool CreateTakeOverTaskReq::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void CreateTakeOverTaskReq::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

std::string CreateTakeOverTaskReq::getWorkflowName() const
{
    return workflowName_;
}

void CreateTakeOverTaskReq::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool CreateTakeOverTaskReq::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void CreateTakeOverTaskReq::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

int32_t CreateTakeOverTaskReq::getHostType() const
{
    return hostType_;
}

void CreateTakeOverTaskReq::setHostType(int32_t value)
{
    hostType_ = value;
    hostTypeIsSet_ = true;
}

bool CreateTakeOverTaskReq::hostTypeIsSet() const
{
    return hostTypeIsSet_;
}

void CreateTakeOverTaskReq::unsethostType()
{
    hostTypeIsSet_ = false;
}

std::string CreateTakeOverTaskReq::getOutputBucket() const
{
    return outputBucket_;
}

void CreateTakeOverTaskReq::setOutputBucket(const std::string& value)
{
    outputBucket_ = value;
    outputBucketIsSet_ = true;
}

bool CreateTakeOverTaskReq::outputBucketIsSet() const
{
    return outputBucketIsSet_;
}

void CreateTakeOverTaskReq::unsetoutputBucket()
{
    outputBucketIsSet_ = false;
}

std::string CreateTakeOverTaskReq::getOutputPath() const
{
    return outputPath_;
}

void CreateTakeOverTaskReq::setOutputPath(const std::string& value)
{
    outputPath_ = value;
    outputPathIsSet_ = true;
}

bool CreateTakeOverTaskReq::outputPathIsSet() const
{
    return outputPathIsSet_;
}

void CreateTakeOverTaskReq::unsetoutputPath()
{
    outputPathIsSet_ = false;
}

}
}
}
}
}


