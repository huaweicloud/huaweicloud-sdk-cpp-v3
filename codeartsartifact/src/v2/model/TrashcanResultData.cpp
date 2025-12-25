

#include "huaweicloud/codeartsartifact/v2/model/TrashcanResultData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




TrashcanResultData::TrashcanResultData()
{
    successNum_ = 0;
    successNumIsSet_ = false;
    failedNum_ = 0;
    failedNumIsSet_ = false;
    failedMessagesIsSet_ = false;
}

TrashcanResultData::~TrashcanResultData() = default;

void TrashcanResultData::validate()
{
}

web::json::value TrashcanResultData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successNumIsSet_) {
        val[utility::conversions::to_string_t("successNum")] = ModelBase::toJson(successNum_);
    }
    if(failedNumIsSet_) {
        val[utility::conversions::to_string_t("failedNum")] = ModelBase::toJson(failedNum_);
    }
    if(failedMessagesIsSet_) {
        val[utility::conversions::to_string_t("failedMessages")] = ModelBase::toJson(failedMessages_);
    }

    return val;
}
bool TrashcanResultData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("successNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("successNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failedNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failedNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failedMessages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failedMessages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedMessages(refVal);
        }
    }
    return ok;
}


int32_t TrashcanResultData::getSuccessNum() const
{
    return successNum_;
}

void TrashcanResultData::setSuccessNum(int32_t value)
{
    successNum_ = value;
    successNumIsSet_ = true;
}

bool TrashcanResultData::successNumIsSet() const
{
    return successNumIsSet_;
}

void TrashcanResultData::unsetsuccessNum()
{
    successNumIsSet_ = false;
}

int32_t TrashcanResultData::getFailedNum() const
{
    return failedNum_;
}

void TrashcanResultData::setFailedNum(int32_t value)
{
    failedNum_ = value;
    failedNumIsSet_ = true;
}

bool TrashcanResultData::failedNumIsSet() const
{
    return failedNumIsSet_;
}

void TrashcanResultData::unsetfailedNum()
{
    failedNumIsSet_ = false;
}

std::vector<std::string>& TrashcanResultData::getFailedMessages()
{
    return failedMessages_;
}

void TrashcanResultData::setFailedMessages(const std::vector<std::string>& value)
{
    failedMessages_ = value;
    failedMessagesIsSet_ = true;
}

bool TrashcanResultData::failedMessagesIsSet() const
{
    return failedMessagesIsSet_;
}

void TrashcanResultData::unsetfailedMessages()
{
    failedMessagesIsSet_ = false;
}

}
}
}
}
}


