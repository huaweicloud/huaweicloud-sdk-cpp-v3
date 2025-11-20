

#include "huaweicloud/lts/v2/model/ListLogContextRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogContextRequestBody::ListLogContextRequestBody()
{
    lineNum_ = "";
    lineNumIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    backwardsSize_ = 0;
    backwardsSizeIsSet_ = false;
    forwardsSize_ = 0;
    forwardsSizeIsSet_ = false;
}

ListLogContextRequestBody::~ListLogContextRequestBody() = default;

void ListLogContextRequestBody::validate()
{
}

web::json::value ListLogContextRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("__time__")] = ModelBase::toJson(time_);
    }
    if(backwardsSizeIsSet_) {
        val[utility::conversions::to_string_t("backwards_size")] = ModelBase::toJson(backwardsSize_);
    }
    if(forwardsSizeIsSet_) {
        val[utility::conversions::to_string_t("forwards_size")] = ModelBase::toJson(forwardsSize_);
    }

    return val;
}
bool ListLogContextRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__time__"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__time__"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backwards_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backwards_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackwardsSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forwards_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forwards_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForwardsSize(refVal);
        }
    }
    return ok;
}


std::string ListLogContextRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListLogContextRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListLogContextRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListLogContextRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListLogContextRequestBody::getTime() const
{
    return time_;
}

void ListLogContextRequestBody::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ListLogContextRequestBody::timeIsSet() const
{
    return timeIsSet_;
}

void ListLogContextRequestBody::unsettime()
{
    timeIsSet_ = false;
}

int32_t ListLogContextRequestBody::getBackwardsSize() const
{
    return backwardsSize_;
}

void ListLogContextRequestBody::setBackwardsSize(int32_t value)
{
    backwardsSize_ = value;
    backwardsSizeIsSet_ = true;
}

bool ListLogContextRequestBody::backwardsSizeIsSet() const
{
    return backwardsSizeIsSet_;
}

void ListLogContextRequestBody::unsetbackwardsSize()
{
    backwardsSizeIsSet_ = false;
}

int32_t ListLogContextRequestBody::getForwardsSize() const
{
    return forwardsSize_;
}

void ListLogContextRequestBody::setForwardsSize(int32_t value)
{
    forwardsSize_ = value;
    forwardsSizeIsSet_ = true;
}

bool ListLogContextRequestBody::forwardsSizeIsSet() const
{
    return forwardsSizeIsSet_;
}

void ListLogContextRequestBody::unsetforwardsSize()
{
    forwardsSizeIsSet_ = false;
}

}
}
}
}
}


