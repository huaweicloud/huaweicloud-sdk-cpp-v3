

#include "huaweicloud/codeartspipeline/v2/model/ActionsPipelineRunsQueryDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ActionsPipelineRunsQueryDTO::ActionsPipelineRunsQueryDTO()
{
    page_ = 0L;
    pageIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
    httpsUrl_ = "";
    httpsUrlIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    pipelineRunName_ = "";
    pipelineRunNameIsSet_ = false;
    event_ = "";
    eventIsSet_ = false;
    actor_ = "";
    actorIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ActionsPipelineRunsQueryDTO::~ActionsPipelineRunsQueryDTO() = default;

void ActionsPipelineRunsQueryDTO::validate()
{
}

web::json::value ActionsPipelineRunsQueryDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(httpsUrlIsSet_) {
        val[utility::conversions::to_string_t("https_url")] = ModelBase::toJson(httpsUrl_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(pipelineRunNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_name")] = ModelBase::toJson(pipelineRunName_);
    }
    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }
    if(actorIsSet_) {
        val[utility::conversions::to_string_t("actor")] = ModelBase::toJson(actor_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ActionsPipelineRunsQueryDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_run_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_run_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRunName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int64_t ActionsPipelineRunsQueryDTO::getPage() const
{
    return page_;
}

void ActionsPipelineRunsQueryDTO::setPage(int64_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::pageIsSet() const
{
    return pageIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetpage()
{
    pageIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getPageSize() const
{
    return pageSize_;
}

void ActionsPipelineRunsQueryDTO::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getHttpsUrl() const
{
    return httpsUrl_;
}

void ActionsPipelineRunsQueryDTO::setHttpsUrl(const std::string& value)
{
    httpsUrl_ = value;
    httpsUrlIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::httpsUrlIsSet() const
{
    return httpsUrlIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsethttpsUrl()
{
    httpsUrlIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getPipelineName() const
{
    return pipelineName_;
}

void ActionsPipelineRunsQueryDTO::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getFilePath() const
{
    return filePath_;
}

void ActionsPipelineRunsQueryDTO::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::filePathIsSet() const
{
    return filePathIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getPipelineRunName() const
{
    return pipelineRunName_;
}

void ActionsPipelineRunsQueryDTO::setPipelineRunName(const std::string& value)
{
    pipelineRunName_ = value;
    pipelineRunNameIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::pipelineRunNameIsSet() const
{
    return pipelineRunNameIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetpipelineRunName()
{
    pipelineRunNameIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getEvent() const
{
    return event_;
}

void ActionsPipelineRunsQueryDTO::setEvent(const std::string& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::eventIsSet() const
{
    return eventIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetevent()
{
    eventIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getActor() const
{
    return actor_;
}

void ActionsPipelineRunsQueryDTO::setActor(const std::string& value)
{
    actor_ = value;
    actorIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::actorIsSet() const
{
    return actorIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetactor()
{
    actorIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getBranch() const
{
    return branch_;
}

void ActionsPipelineRunsQueryDTO::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::branchIsSet() const
{
    return branchIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetbranch()
{
    branchIsSet_ = false;
}

std::string ActionsPipelineRunsQueryDTO::getStatus() const
{
    return status_;
}

void ActionsPipelineRunsQueryDTO::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ActionsPipelineRunsQueryDTO::statusIsSet() const
{
    return statusIsSet_;
}

void ActionsPipelineRunsQueryDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


