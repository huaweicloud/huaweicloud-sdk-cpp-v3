

#include "huaweicloud/vod/v1/model/VodSampleData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




VodSampleData::VodSampleData()
{
    storage_ = 0.0f;
    storageIsSet_ = false;
    transcode_ = 0L;
    transcodeIsSet_ = false;
}

VodSampleData::~VodSampleData() = default;

void VodSampleData::validate()
{
}

web::json::value VodSampleData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }
    if(transcodeIsSet_) {
        val[utility::conversions::to_string_t("transcode")] = ModelBase::toJson(transcode_);
    }

    return val;
}
bool VodSampleData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscode(refVal);
        }
    }
    return ok;
}


float VodSampleData::getStorage() const
{
    return storage_;
}

void VodSampleData::setStorage(float value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool VodSampleData::storageIsSet() const
{
    return storageIsSet_;
}

void VodSampleData::unsetstorage()
{
    storageIsSet_ = false;
}

int64_t VodSampleData::getTranscode() const
{
    return transcode_;
}

void VodSampleData::setTranscode(int64_t value)
{
    transcode_ = value;
    transcodeIsSet_ = true;
}

bool VodSampleData::transcodeIsSet() const
{
    return transcodeIsSet_;
}

void VodSampleData::unsettranscode()
{
    transcodeIsSet_ = false;
}

}
}
}
}
}


