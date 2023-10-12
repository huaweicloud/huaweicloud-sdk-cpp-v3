

#include "huaweicloud/kms/v2/model/CreateKmsTagRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKmsTagRequestBody::CreateKmsTagRequestBody()
{
    tagIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

CreateKmsTagRequestBody::~CreateKmsTagRequestBody() = default;

void CreateKmsTagRequestBody::validate()
{
}

web::json::value CreateKmsTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool CreateKmsTagRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            TagItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


TagItem CreateKmsTagRequestBody::getTag() const
{
    return tag_;
}

void CreateKmsTagRequestBody::setTag(const TagItem& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateKmsTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreateKmsTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

std::string CreateKmsTagRequestBody::getSequence() const
{
    return sequence_;
}

void CreateKmsTagRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CreateKmsTagRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CreateKmsTagRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


