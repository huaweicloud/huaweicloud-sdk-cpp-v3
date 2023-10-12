

#include "huaweicloud/kms/v2/model/GenRandomRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




GenRandomRequestBody::GenRandomRequestBody()
{
    randomDataLength_ = "";
    randomDataLengthIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

GenRandomRequestBody::~GenRandomRequestBody() = default;

void GenRandomRequestBody::validate()
{
}

web::json::value GenRandomRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(randomDataLengthIsSet_) {
        val[utility::conversions::to_string_t("random_data_length")] = ModelBase::toJson(randomDataLength_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool GenRandomRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("random_data_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random_data_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandomDataLength(refVal);
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


std::string GenRandomRequestBody::getRandomDataLength() const
{
    return randomDataLength_;
}

void GenRandomRequestBody::setRandomDataLength(const std::string& value)
{
    randomDataLength_ = value;
    randomDataLengthIsSet_ = true;
}

bool GenRandomRequestBody::randomDataLengthIsSet() const
{
    return randomDataLengthIsSet_;
}

void GenRandomRequestBody::unsetrandomDataLength()
{
    randomDataLengthIsSet_ = false;
}

std::string GenRandomRequestBody::getSequence() const
{
    return sequence_;
}

void GenRandomRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool GenRandomRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void GenRandomRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


