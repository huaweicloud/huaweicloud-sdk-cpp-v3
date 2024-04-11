

#include "huaweicloud/drs/v3/model/AddDataTransformationReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




AddDataTransformationReq::AddDataTransformationReq()
{
    objectInfoIsSet_ = false;
    transformationInfoIsSet_ = false;
}

AddDataTransformationReq::~AddDataTransformationReq() = default;

void AddDataTransformationReq::validate()
{
}

web::json::value AddDataTransformationReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectInfoIsSet_) {
        val[utility::conversions::to_string_t("object_info")] = ModelBase::toJson(objectInfo_);
    }
    if(transformationInfoIsSet_) {
        val[utility::conversions::to_string_t("transformation_info")] = ModelBase::toJson(transformationInfo_);
    }

    return val;
}
bool AddDataTransformationReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_info"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateDataCompareDatabaseObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transformation_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transformation_info"));
        if(!fieldValue.is_null())
        {
            CreateDataCompareTransformationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransformationInfo(refVal);
        }
    }
    return ok;
}


std::vector<CreateDataCompareDatabaseObject>& AddDataTransformationReq::getObjectInfo()
{
    return objectInfo_;
}

void AddDataTransformationReq::setObjectInfo(const std::vector<CreateDataCompareDatabaseObject>& value)
{
    objectInfo_ = value;
    objectInfoIsSet_ = true;
}

bool AddDataTransformationReq::objectInfoIsSet() const
{
    return objectInfoIsSet_;
}

void AddDataTransformationReq::unsetobjectInfo()
{
    objectInfoIsSet_ = false;
}

CreateDataCompareTransformationInfo AddDataTransformationReq::getTransformationInfo() const
{
    return transformationInfo_;
}

void AddDataTransformationReq::setTransformationInfo(const CreateDataCompareTransformationInfo& value)
{
    transformationInfo_ = value;
    transformationInfoIsSet_ = true;
}

bool AddDataTransformationReq::transformationInfoIsSet() const
{
    return transformationInfoIsSet_;
}

void AddDataTransformationReq::unsettransformationInfo()
{
    transformationInfoIsSet_ = false;
}

}
}
}
}
}


