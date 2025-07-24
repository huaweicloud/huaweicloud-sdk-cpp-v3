

#include "huaweicloud/cloudtest/v1/model/BackUpMindmapParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BackUpMindmapParam::BackUpMindmapParam()
{
    bakName_ = "";
    bakNameIsSet_ = false;
    memo_ = "";
    memoIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
}

BackUpMindmapParam::~BackUpMindmapParam() = default;

void BackUpMindmapParam::validate()
{
}

web::json::value BackUpMindmapParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bakNameIsSet_) {
        val[utility::conversions::to_string_t("bak_name")] = ModelBase::toJson(bakName_);
    }
    if(memoIsSet_) {
        val[utility::conversions::to_string_t("memo")] = ModelBase::toJson(memo_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }

    return val;
}
bool BackUpMindmapParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bak_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
        }
    }
    return ok;
}


std::string BackUpMindmapParam::getBakName() const
{
    return bakName_;
}

void BackUpMindmapParam::setBakName(const std::string& value)
{
    bakName_ = value;
    bakNameIsSet_ = true;
}

bool BackUpMindmapParam::bakNameIsSet() const
{
    return bakNameIsSet_;
}

void BackUpMindmapParam::unsetbakName()
{
    bakNameIsSet_ = false;
}

std::string BackUpMindmapParam::getMemo() const
{
    return memo_;
}

void BackUpMindmapParam::setMemo(const std::string& value)
{
    memo_ = value;
    memoIsSet_ = true;
}

bool BackUpMindmapParam::memoIsSet() const
{
    return memoIsSet_;
}

void BackUpMindmapParam::unsetmemo()
{
    memoIsSet_ = false;
}

std::string BackUpMindmapParam::getMindmapId() const
{
    return mindmapId_;
}

void BackUpMindmapParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool BackUpMindmapParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void BackUpMindmapParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

}
}
}
}
}


