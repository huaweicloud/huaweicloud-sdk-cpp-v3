

#include "huaweicloud/mpc/v1/model/CreateThumbReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateThumbReq::CreateThumbReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    thumbnailParaIsSet_ = false;
    tar_ = 0;
    tarIsSet_ = false;
    sync_ = 0;
    syncIsSet_ = false;
    originalDir_ = 0;
    originalDirIsSet_ = false;
}

CreateThumbReq::~CreateThumbReq() = default;

void CreateThumbReq::validate()
{
}

web::json::value CreateThumbReq::toJson() const
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
    if(thumbnailParaIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_para")] = ModelBase::toJson(thumbnailPara_);
    }
    if(tarIsSet_) {
        val[utility::conversions::to_string_t("tar")] = ModelBase::toJson(tar_);
    }
    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }
    if(originalDirIsSet_) {
        val[utility::conversions::to_string_t("original_dir")] = ModelBase::toJson(originalDir_);
    }

    return val;
}

bool CreateThumbReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail_para"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_para"));
        if(!fieldValue.is_null())
        {
            ThumbnailPara refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailPara(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tar"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTar(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("original_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_dir"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalDir(refVal);
        }
    }
    return ok;
}

ObsObjInfo CreateThumbReq::getInput() const
{
    return input_;
}

void CreateThumbReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateThumbReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateThumbReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CreateThumbReq::getOutput() const
{
    return output_;
}

void CreateThumbReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateThumbReq::outputIsSet() const
{
    return outputIsSet_;
}

void CreateThumbReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CreateThumbReq::getUserData() const
{
    return userData_;
}

void CreateThumbReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateThumbReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateThumbReq::unsetuserData()
{
    userDataIsSet_ = false;
}

ThumbnailPara CreateThumbReq::getThumbnailPara() const
{
    return thumbnailPara_;
}

void CreateThumbReq::setThumbnailPara(const ThumbnailPara& value)
{
    thumbnailPara_ = value;
    thumbnailParaIsSet_ = true;
}

bool CreateThumbReq::thumbnailParaIsSet() const
{
    return thumbnailParaIsSet_;
}

void CreateThumbReq::unsetthumbnailPara()
{
    thumbnailParaIsSet_ = false;
}

int32_t CreateThumbReq::getTar() const
{
    return tar_;
}

void CreateThumbReq::setTar(int32_t value)
{
    tar_ = value;
    tarIsSet_ = true;
}

bool CreateThumbReq::tarIsSet() const
{
    return tarIsSet_;
}

void CreateThumbReq::unsettar()
{
    tarIsSet_ = false;
}

int32_t CreateThumbReq::getSync() const
{
    return sync_;
}

void CreateThumbReq::setSync(int32_t value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool CreateThumbReq::syncIsSet() const
{
    return syncIsSet_;
}

void CreateThumbReq::unsetsync()
{
    syncIsSet_ = false;
}

int32_t CreateThumbReq::getOriginalDir() const
{
    return originalDir_;
}

void CreateThumbReq::setOriginalDir(int32_t value)
{
    originalDir_ = value;
    originalDirIsSet_ = true;
}

bool CreateThumbReq::originalDirIsSet() const
{
    return originalDirIsSet_;
}

void CreateThumbReq::unsetoriginalDir()
{
    originalDirIsSet_ = false;
}

}
}
}
}
}


