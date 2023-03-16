

#include "huaweicloud/ivs/v2/model/IvsStandardByVideoAndIdCardImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByVideoAndIdCardImageRequestBody::IvsStandardByVideoAndIdCardImageRequestBody()
{
    metaIsSet_ = false;
    dataIsSet_ = false;
}

IvsStandardByVideoAndIdCardImageRequestBody::~IvsStandardByVideoAndIdCardImageRequestBody() = default;

void IvsStandardByVideoAndIdCardImageRequestBody::validate()
{
}

web::json::value IvsStandardByVideoAndIdCardImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metaIsSet_) {
        val[utility::conversions::to_string_t("meta")] = ModelBase::toJson(meta_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool IvsStandardByVideoAndIdCardImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta"));
        if(!fieldValue.is_null())
        {
            Meta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IvsStandardByVideoAndIdCardImageRequestBody_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Meta IvsStandardByVideoAndIdCardImageRequestBody::getMeta() const
{
    return meta_;
}

void IvsStandardByVideoAndIdCardImageRequestBody::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool IvsStandardByVideoAndIdCardImageRequestBody::metaIsSet() const
{
    return metaIsSet_;
}

void IvsStandardByVideoAndIdCardImageRequestBody::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByVideoAndIdCardImageRequestBody_data IvsStandardByVideoAndIdCardImageRequestBody::getData() const
{
    return data_;
}

void IvsStandardByVideoAndIdCardImageRequestBody::setData(const IvsStandardByVideoAndIdCardImageRequestBody_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool IvsStandardByVideoAndIdCardImageRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void IvsStandardByVideoAndIdCardImageRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


