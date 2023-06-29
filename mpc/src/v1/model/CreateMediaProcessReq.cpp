

#include "huaweicloud/mpc/v1/model/CreateMediaProcessReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMediaProcessReq::CreateMediaProcessReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

CreateMediaProcessReq::~CreateMediaProcessReq() = default;

void CreateMediaProcessReq::validate()
{
}

web::json::value CreateMediaProcessReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}

bool CreateMediaProcessReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


ObsObjInfo CreateMediaProcessReq::getInput() const
{
    return input_;
}

void CreateMediaProcessReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateMediaProcessReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateMediaProcessReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CreateMediaProcessReq::getOutput() const
{
    return output_;
}

void CreateMediaProcessReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateMediaProcessReq::outputIsSet() const
{
    return outputIsSet_;
}

void CreateMediaProcessReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CreateMediaProcessReq::getTemplateId() const
{
    return templateId_;
}

void CreateMediaProcessReq::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateMediaProcessReq::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateMediaProcessReq::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


