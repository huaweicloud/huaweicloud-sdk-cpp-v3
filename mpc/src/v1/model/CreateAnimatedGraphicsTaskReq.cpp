

#include "huaweicloud/mpc/v1/model/CreateAnimatedGraphicsTaskReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateAnimatedGraphicsTaskReq::CreateAnimatedGraphicsTaskReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    outputParamIsSet_ = false;
}

CreateAnimatedGraphicsTaskReq::~CreateAnimatedGraphicsTaskReq() = default;

void CreateAnimatedGraphicsTaskReq::validate()
{
}

web::json::value CreateAnimatedGraphicsTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(outputParamIsSet_) {
        val[utility::conversions::to_string_t("output_param")] = ModelBase::toJson(outputParam_);
    }

    return val;
}

bool CreateAnimatedGraphicsTaskReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_param"));
        if(!fieldValue.is_null())
        {
            AnimatedGraphicsOutputParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputParam(refVal);
        }
    }
    return ok;
}


ObsObjInfo CreateAnimatedGraphicsTaskReq::getInput() const
{
    return input_;
}

void CreateAnimatedGraphicsTaskReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateAnimatedGraphicsTaskReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateAnimatedGraphicsTaskReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CreateAnimatedGraphicsTaskReq::getOutput() const
{
    return output_;
}

void CreateAnimatedGraphicsTaskReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateAnimatedGraphicsTaskReq::outputIsSet() const
{
    return outputIsSet_;
}

void CreateAnimatedGraphicsTaskReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CreateAnimatedGraphicsTaskReq::getUserData() const
{
    return userData_;
}

void CreateAnimatedGraphicsTaskReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateAnimatedGraphicsTaskReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateAnimatedGraphicsTaskReq::unsetuserData()
{
    userDataIsSet_ = false;
}

AnimatedGraphicsOutputParam CreateAnimatedGraphicsTaskReq::getOutputParam() const
{
    return outputParam_;
}

void CreateAnimatedGraphicsTaskReq::setOutputParam(const AnimatedGraphicsOutputParam& value)
{
    outputParam_ = value;
    outputParamIsSet_ = true;
}

bool CreateAnimatedGraphicsTaskReq::outputParamIsSet() const
{
    return outputParamIsSet_;
}

void CreateAnimatedGraphicsTaskReq::unsetoutputParam()
{
    outputParamIsSet_ = false;
}

}
}
}
}
}


