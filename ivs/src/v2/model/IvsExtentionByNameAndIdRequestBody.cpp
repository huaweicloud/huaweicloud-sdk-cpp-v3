

#include "huaweicloud/ivs/v2/model/IvsExtentionByNameAndIdRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsExtentionByNameAndIdRequestBody::IvsExtentionByNameAndIdRequestBody()
{
    metaIsSet_ = false;
    dataIsSet_ = false;
}

IvsExtentionByNameAndIdRequestBody::~IvsExtentionByNameAndIdRequestBody() = default;

void IvsExtentionByNameAndIdRequestBody::validate()
{
}

web::json::value IvsExtentionByNameAndIdRequestBody::toJson() const
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
bool IvsExtentionByNameAndIdRequestBody::fromJson(const web::json::value& val)
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
            IvsExtentionByNameAndIdRequestBody_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Meta IvsExtentionByNameAndIdRequestBody::getMeta() const
{
    return meta_;
}

void IvsExtentionByNameAndIdRequestBody::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool IvsExtentionByNameAndIdRequestBody::metaIsSet() const
{
    return metaIsSet_;
}

void IvsExtentionByNameAndIdRequestBody::unsetmeta()
{
    metaIsSet_ = false;
}

IvsExtentionByNameAndIdRequestBody_data IvsExtentionByNameAndIdRequestBody::getData() const
{
    return data_;
}

void IvsExtentionByNameAndIdRequestBody::setData(const IvsExtentionByNameAndIdRequestBody_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool IvsExtentionByNameAndIdRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void IvsExtentionByNameAndIdRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


