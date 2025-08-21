

#include "huaweicloud/live/v1/model/ShowOutputInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowOutputInfoRequest::ShowOutputInfoRequest()
{
    dataDisplay_ = "";
    dataDisplayIsSet_ = false;
    flowId_ = "";
    flowIdIsSet_ = false;
    outputName_ = "";
    outputNameIsSet_ = false;
}

ShowOutputInfoRequest::~ShowOutputInfoRequest() = default;

void ShowOutputInfoRequest::validate()
{
}

web::json::value ShowOutputInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataDisplayIsSet_) {
        val[utility::conversions::to_string_t("data_display")] = ModelBase::toJson(dataDisplay_);
    }
    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(outputNameIsSet_) {
        val[utility::conversions::to_string_t("output_name")] = ModelBase::toJson(outputName_);
    }

    return val;
}
bool ShowOutputInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_display"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputName(refVal);
        }
    }
    return ok;
}


std::string ShowOutputInfoRequest::getDataDisplay() const
{
    return dataDisplay_;
}

void ShowOutputInfoRequest::setDataDisplay(const std::string& value)
{
    dataDisplay_ = value;
    dataDisplayIsSet_ = true;
}

bool ShowOutputInfoRequest::dataDisplayIsSet() const
{
    return dataDisplayIsSet_;
}

void ShowOutputInfoRequest::unsetdataDisplay()
{
    dataDisplayIsSet_ = false;
}

std::string ShowOutputInfoRequest::getFlowId() const
{
    return flowId_;
}

void ShowOutputInfoRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ShowOutputInfoRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ShowOutputInfoRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::string ShowOutputInfoRequest::getOutputName() const
{
    return outputName_;
}

void ShowOutputInfoRequest::setOutputName(const std::string& value)
{
    outputName_ = value;
    outputNameIsSet_ = true;
}

bool ShowOutputInfoRequest::outputNameIsSet() const
{
    return outputNameIsSet_;
}

void ShowOutputInfoRequest::unsetoutputName()
{
    outputNameIsSet_ = false;
}

}
}
}
}
}


