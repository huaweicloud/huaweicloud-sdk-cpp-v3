

#include "huaweicloud/drs/v5/model/FlowCompareData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




FlowCompareData::FlowCompareData()
{
    srcDb_ = "";
    srcDbIsSet_ = false;
    srcTb_ = "";
    srcTbIsSet_ = false;
    dstDb_ = "";
    dstDbIsSet_ = false;
    dstTb_ = "";
    dstTbIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
}

FlowCompareData::~FlowCompareData() = default;

void FlowCompareData::validate()
{
}

web::json::value FlowCompareData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(srcDbIsSet_) {
        val[utility::conversions::to_string_t("src_db")] = ModelBase::toJson(srcDb_);
    }
    if(srcTbIsSet_) {
        val[utility::conversions::to_string_t("src_tb")] = ModelBase::toJson(srcTb_);
    }
    if(dstDbIsSet_) {
        val[utility::conversions::to_string_t("dst_db")] = ModelBase::toJson(dstDb_);
    }
    if(dstTbIsSet_) {
        val[utility::conversions::to_string_t("dst_tb")] = ModelBase::toJson(dstTb_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }

    return val;
}
bool FlowCompareData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("src_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_tb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_tb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcTb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_tb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_tb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstTb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    return ok;
}


std::string FlowCompareData::getSrcDb() const
{
    return srcDb_;
}

void FlowCompareData::setSrcDb(const std::string& value)
{
    srcDb_ = value;
    srcDbIsSet_ = true;
}

bool FlowCompareData::srcDbIsSet() const
{
    return srcDbIsSet_;
}

void FlowCompareData::unsetsrcDb()
{
    srcDbIsSet_ = false;
}

std::string FlowCompareData::getSrcTb() const
{
    return srcTb_;
}

void FlowCompareData::setSrcTb(const std::string& value)
{
    srcTb_ = value;
    srcTbIsSet_ = true;
}

bool FlowCompareData::srcTbIsSet() const
{
    return srcTbIsSet_;
}

void FlowCompareData::unsetsrcTb()
{
    srcTbIsSet_ = false;
}

std::string FlowCompareData::getDstDb() const
{
    return dstDb_;
}

void FlowCompareData::setDstDb(const std::string& value)
{
    dstDb_ = value;
    dstDbIsSet_ = true;
}

bool FlowCompareData::dstDbIsSet() const
{
    return dstDbIsSet_;
}

void FlowCompareData::unsetdstDb()
{
    dstDbIsSet_ = false;
}

std::string FlowCompareData::getDstTb() const
{
    return dstTb_;
}

void FlowCompareData::setDstTb(const std::string& value)
{
    dstTb_ = value;
    dstTbIsSet_ = true;
}

bool FlowCompareData::dstTbIsSet() const
{
    return dstTbIsSet_;
}

void FlowCompareData::unsetdstTb()
{
    dstTbIsSet_ = false;
}

int32_t FlowCompareData::getProgress() const
{
    return progress_;
}

void FlowCompareData::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool FlowCompareData::progressIsSet() const
{
    return progressIsSet_;
}

void FlowCompareData::unsetprogress()
{
    progressIsSet_ = false;
}

}
}
}
}
}


