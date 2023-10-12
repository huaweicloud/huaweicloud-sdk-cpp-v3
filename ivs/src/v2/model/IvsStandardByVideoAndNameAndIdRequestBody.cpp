

#include "huaweicloud/ivs/v2/model/IvsStandardByVideoAndNameAndIdRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByVideoAndNameAndIdRequestBody::IvsStandardByVideoAndNameAndIdRequestBody()
{
    metaIsSet_ = false;
    dataIsSet_ = false;
}

IvsStandardByVideoAndNameAndIdRequestBody::~IvsStandardByVideoAndNameAndIdRequestBody() = default;

void IvsStandardByVideoAndNameAndIdRequestBody::validate()
{
}

web::json::value IvsStandardByVideoAndNameAndIdRequestBody::toJson() const
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
bool IvsStandardByVideoAndNameAndIdRequestBody::fromJson(const web::json::value& val)
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
            IvsStandardByVideoAndNameAndIdRequestBody_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Meta IvsStandardByVideoAndNameAndIdRequestBody::getMeta() const
{
    return meta_;
}

void IvsStandardByVideoAndNameAndIdRequestBody::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool IvsStandardByVideoAndNameAndIdRequestBody::metaIsSet() const
{
    return metaIsSet_;
}

void IvsStandardByVideoAndNameAndIdRequestBody::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByVideoAndNameAndIdRequestBody_data IvsStandardByVideoAndNameAndIdRequestBody::getData() const
{
    return data_;
}

void IvsStandardByVideoAndNameAndIdRequestBody::setData(const IvsStandardByVideoAndNameAndIdRequestBody_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool IvsStandardByVideoAndNameAndIdRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void IvsStandardByVideoAndNameAndIdRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


