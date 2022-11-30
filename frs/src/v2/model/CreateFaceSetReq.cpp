

#include "huaweicloud/frs/v2/model/CreateFaceSetReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CreateFaceSetReq::CreateFaceSetReq()
{
    externalFieldsIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    faceSetCapacity_ = 0;
    faceSetCapacityIsSet_ = false;
}

CreateFaceSetReq::~CreateFaceSetReq() = default;

void CreateFaceSetReq::validate()
{
}

web::json::value CreateFaceSetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(externalFieldsIsSet_) {
        val[utility::conversions::to_string_t("external_fields")] = ModelBase::toJson(externalFields_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(faceSetCapacityIsSet_) {
        val[utility::conversions::to_string_t("face_set_capacity")] = ModelBase::toJson(faceSetCapacity_);
    }

    return val;
}

bool CreateFaceSetReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("external_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_fields"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, TypeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_set_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_capacity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetCapacity(refVal);
        }
    }
    return ok;
}


std::map<std::string, TypeInfo>& CreateFaceSetReq::getExternalFields()
{
    return externalFields_;
}

void CreateFaceSetReq::setExternalFields(const std::map<std::string, TypeInfo>& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool CreateFaceSetReq::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void CreateFaceSetReq::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

std::string CreateFaceSetReq::getFaceSetName() const
{
    return faceSetName_;
}

void CreateFaceSetReq::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool CreateFaceSetReq::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void CreateFaceSetReq::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

int32_t CreateFaceSetReq::getFaceSetCapacity() const
{
    return faceSetCapacity_;
}

void CreateFaceSetReq::setFaceSetCapacity(int32_t value)
{
    faceSetCapacity_ = value;
    faceSetCapacityIsSet_ = true;
}

bool CreateFaceSetReq::faceSetCapacityIsSet() const
{
    return faceSetCapacityIsSet_;
}

void CreateFaceSetReq::unsetfaceSetCapacity()
{
    faceSetCapacityIsSet_ = false;
}

}
}
}
}
}


