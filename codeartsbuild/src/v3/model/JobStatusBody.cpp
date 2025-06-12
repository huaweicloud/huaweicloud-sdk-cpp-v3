

#include "huaweicloud/codeartsbuild/v3/model/JobStatusBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobStatusBody::JobStatusBody()
{
    status_ = "";
    statusIsSet_ = false;
    abortStatus_ = "";
    abortStatusIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
}

JobStatusBody::~JobStatusBody() = default;

void JobStatusBody::validate()
{
}

web::json::value JobStatusBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(abortStatusIsSet_) {
        val[utility::conversions::to_string_t("abort_status")] = ModelBase::toJson(abortStatus_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }

    return val;
}
bool JobStatusBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abort_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abort_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbortStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    return ok;
}


std::string JobStatusBody::getStatus() const
{
    return status_;
}

void JobStatusBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobStatusBody::statusIsSet() const
{
    return statusIsSet_;
}

void JobStatusBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobStatusBody::getAbortStatus() const
{
    return abortStatus_;
}

void JobStatusBody::setAbortStatus(const std::string& value)
{
    abortStatus_ = value;
    abortStatusIsSet_ = true;
}

bool JobStatusBody::abortStatusIsSet() const
{
    return abortStatusIsSet_;
}

void JobStatusBody::unsetabortStatus()
{
    abortStatusIsSet_ = false;
}

std::string JobStatusBody::getLabel() const
{
    return label_;
}

void JobStatusBody::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool JobStatusBody::labelIsSet() const
{
    return labelIsSet_;
}

void JobStatusBody::unsetlabel()
{
    labelIsSet_ = false;
}

}
}
}
}
}


