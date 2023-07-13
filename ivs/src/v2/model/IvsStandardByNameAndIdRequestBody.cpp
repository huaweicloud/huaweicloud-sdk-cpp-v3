

#include "huaweicloud/ivs/v2/model/IvsStandardByNameAndIdRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByNameAndIdRequestBody::IvsStandardByNameAndIdRequestBody()
{
    metaIsSet_ = false;
    dataIsSet_ = false;
}

IvsStandardByNameAndIdRequestBody::~IvsStandardByNameAndIdRequestBody() = default;

void IvsStandardByNameAndIdRequestBody::validate()
{
}

web::json::value IvsStandardByNameAndIdRequestBody::toJson() const
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

bool IvsStandardByNameAndIdRequestBody::fromJson(const web::json::value& val)
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
            IvsStandardByNameAndIdRequestBody_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

Meta IvsStandardByNameAndIdRequestBody::getMeta() const
{
    return meta_;
}

void IvsStandardByNameAndIdRequestBody::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool IvsStandardByNameAndIdRequestBody::metaIsSet() const
{
    return metaIsSet_;
}

void IvsStandardByNameAndIdRequestBody::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByNameAndIdRequestBody_data IvsStandardByNameAndIdRequestBody::getData() const
{
    return data_;
}

void IvsStandardByNameAndIdRequestBody::setData(const IvsStandardByNameAndIdRequestBody_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool IvsStandardByNameAndIdRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void IvsStandardByNameAndIdRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


