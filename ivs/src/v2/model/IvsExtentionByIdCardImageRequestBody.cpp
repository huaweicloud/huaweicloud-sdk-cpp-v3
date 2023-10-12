

#include "huaweicloud/ivs/v2/model/IvsExtentionByIdCardImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsExtentionByIdCardImageRequestBody::IvsExtentionByIdCardImageRequestBody()
{
    metaIsSet_ = false;
    dataIsSet_ = false;
}

IvsExtentionByIdCardImageRequestBody::~IvsExtentionByIdCardImageRequestBody() = default;

void IvsExtentionByIdCardImageRequestBody::validate()
{
}

web::json::value IvsExtentionByIdCardImageRequestBody::toJson() const
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
bool IvsExtentionByIdCardImageRequestBody::fromJson(const web::json::value& val)
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
            IvsExtentionByIdCardImageRequestBody_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Meta IvsExtentionByIdCardImageRequestBody::getMeta() const
{
    return meta_;
}

void IvsExtentionByIdCardImageRequestBody::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool IvsExtentionByIdCardImageRequestBody::metaIsSet() const
{
    return metaIsSet_;
}

void IvsExtentionByIdCardImageRequestBody::unsetmeta()
{
    metaIsSet_ = false;
}

IvsExtentionByIdCardImageRequestBody_data IvsExtentionByIdCardImageRequestBody::getData() const
{
    return data_;
}

void IvsExtentionByIdCardImageRequestBody::setData(const IvsExtentionByIdCardImageRequestBody_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool IvsExtentionByIdCardImageRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void IvsExtentionByIdCardImageRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


