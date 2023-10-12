

#include "huaweicloud/kms/v2/model/ListKeysRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeysRequestBody::ListKeysRequestBody()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

ListKeysRequestBody::~ListKeysRequestBody() = default;

void ListKeysRequestBody::validate()
{
}

web::json::value ListKeysRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool ListKeysRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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


std::string ListKeysRequestBody::getLimit() const
{
    return limit_;
}

void ListKeysRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKeysRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListKeysRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListKeysRequestBody::getMarker() const
{
    return marker_;
}

void ListKeysRequestBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListKeysRequestBody::markerIsSet() const
{
    return markerIsSet_;
}

void ListKeysRequestBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListKeysRequestBody::getKeyState() const
{
    return keyState_;
}

void ListKeysRequestBody::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool ListKeysRequestBody::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void ListKeysRequestBody::unsetkeyState()
{
    keyStateIsSet_ = false;
}

std::string ListKeysRequestBody::getKeySpec() const
{
    return keySpec_;
}

void ListKeysRequestBody::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool ListKeysRequestBody::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void ListKeysRequestBody::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

std::string ListKeysRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListKeysRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListKeysRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListKeysRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListKeysRequestBody::getSequence() const
{
    return sequence_;
}

void ListKeysRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ListKeysRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ListKeysRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


