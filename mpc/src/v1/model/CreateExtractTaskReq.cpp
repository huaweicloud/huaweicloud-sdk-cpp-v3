

#include "huaweicloud/mpc/v1/model/CreateExtractTaskReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateExtractTaskReq::CreateExtractTaskReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    sync_ = 0;
    syncIsSet_ = false;
}

CreateExtractTaskReq::~CreateExtractTaskReq() = default;

void CreateExtractTaskReq::validate()
{
}

web::json::value CreateExtractTaskReq::toJson() const
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
    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }

    return val;
}

bool CreateExtractTaskReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    return ok;
}

ObsObjInfo CreateExtractTaskReq::getInput() const
{
    return input_;
}

void CreateExtractTaskReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateExtractTaskReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateExtractTaskReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CreateExtractTaskReq::getOutput() const
{
    return output_;
}

void CreateExtractTaskReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateExtractTaskReq::outputIsSet() const
{
    return outputIsSet_;
}

void CreateExtractTaskReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CreateExtractTaskReq::getUserData() const
{
    return userData_;
}

void CreateExtractTaskReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateExtractTaskReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateExtractTaskReq::unsetuserData()
{
    userDataIsSet_ = false;
}

int32_t CreateExtractTaskReq::getSync() const
{
    return sync_;
}

void CreateExtractTaskReq::setSync(int32_t value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool CreateExtractTaskReq::syncIsSet() const
{
    return syncIsSet_;
}

void CreateExtractTaskReq::unsetsync()
{
    syncIsSet_ = false;
}

}
}
}
}
}


