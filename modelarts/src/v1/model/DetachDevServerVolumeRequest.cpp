

#include "huaweicloud/modelarts/v1/model/DetachDevServerVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DetachDevServerVolumeRequest::DetachDevServerVolumeRequest()
{
    id_ = "";
    idIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

DetachDevServerVolumeRequest::~DetachDevServerVolumeRequest() = default;

void DetachDevServerVolumeRequest::validate()
{
}

web::json::value DetachDevServerVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool DetachDevServerVolumeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}


std::string DetachDevServerVolumeRequest::getId() const
{
    return id_;
}

void DetachDevServerVolumeRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DetachDevServerVolumeRequest::idIsSet() const
{
    return idIsSet_;
}

void DetachDevServerVolumeRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DetachDevServerVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void DetachDevServerVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool DetachDevServerVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void DetachDevServerVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


