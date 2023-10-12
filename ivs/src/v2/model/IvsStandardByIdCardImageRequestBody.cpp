

#include "huaweicloud/ivs/v2/model/IvsStandardByIdCardImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByIdCardImageRequestBody::IvsStandardByIdCardImageRequestBody()
{
    metaIsSet_ = false;
    dataIsSet_ = false;
}

IvsStandardByIdCardImageRequestBody::~IvsStandardByIdCardImageRequestBody() = default;

void IvsStandardByIdCardImageRequestBody::validate()
{
}

web::json::value IvsStandardByIdCardImageRequestBody::toJson() const
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
bool IvsStandardByIdCardImageRequestBody::fromJson(const web::json::value& val)
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
            IvsStandardByIdCardImageRequestBody_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Meta IvsStandardByIdCardImageRequestBody::getMeta() const
{
    return meta_;
}

void IvsStandardByIdCardImageRequestBody::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool IvsStandardByIdCardImageRequestBody::metaIsSet() const
{
    return metaIsSet_;
}

void IvsStandardByIdCardImageRequestBody::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByIdCardImageRequestBody_data IvsStandardByIdCardImageRequestBody::getData() const
{
    return data_;
}

void IvsStandardByIdCardImageRequestBody::setData(const IvsStandardByIdCardImageRequestBody_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool IvsStandardByIdCardImageRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void IvsStandardByIdCardImageRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


