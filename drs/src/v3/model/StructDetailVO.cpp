

#include "huaweicloud/drs/v3/model/StructDetailVO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




StructDetailVO::StructDetailVO()
{
    progress_ = 0;
    progressIsSet_ = false;
    srcDB_ = "";
    srcDBIsSet_ = false;
    srcTB_ = "";
    srcTBIsSet_ = false;
    dstDB_ = "";
    dstDBIsSet_ = false;
    dstTB_ = "";
    dstTBIsSet_ = false;
}

StructDetailVO::~StructDetailVO() = default;

void StructDetailVO::validate()
{
}

web::json::value StructDetailVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(srcDBIsSet_) {
        val[utility::conversions::to_string_t("src_DB")] = ModelBase::toJson(srcDB_);
    }
    if(srcTBIsSet_) {
        val[utility::conversions::to_string_t("src_TB")] = ModelBase::toJson(srcTB_);
    }
    if(dstDBIsSet_) {
        val[utility::conversions::to_string_t("dst_DB")] = ModelBase::toJson(dstDB_);
    }
    if(dstTBIsSet_) {
        val[utility::conversions::to_string_t("dst_TB")] = ModelBase::toJson(dstTB_);
    }

    return val;
}

bool StructDetailVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_DB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_DB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_TB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_TB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcTB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_DB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_DB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstDB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_TB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_TB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstTB(refVal);
        }
    }
    return ok;
}

int32_t StructDetailVO::getProgress() const
{
    return progress_;
}

void StructDetailVO::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool StructDetailVO::progressIsSet() const
{
    return progressIsSet_;
}

void StructDetailVO::unsetprogress()
{
    progressIsSet_ = false;
}

std::string StructDetailVO::getSrcDB() const
{
    return srcDB_;
}

void StructDetailVO::setSrcDB(const std::string& value)
{
    srcDB_ = value;
    srcDBIsSet_ = true;
}

bool StructDetailVO::srcDBIsSet() const
{
    return srcDBIsSet_;
}

void StructDetailVO::unsetsrcDB()
{
    srcDBIsSet_ = false;
}

std::string StructDetailVO::getSrcTB() const
{
    return srcTB_;
}

void StructDetailVO::setSrcTB(const std::string& value)
{
    srcTB_ = value;
    srcTBIsSet_ = true;
}

bool StructDetailVO::srcTBIsSet() const
{
    return srcTBIsSet_;
}

void StructDetailVO::unsetsrcTB()
{
    srcTBIsSet_ = false;
}

std::string StructDetailVO::getDstDB() const
{
    return dstDB_;
}

void StructDetailVO::setDstDB(const std::string& value)
{
    dstDB_ = value;
    dstDBIsSet_ = true;
}

bool StructDetailVO::dstDBIsSet() const
{
    return dstDBIsSet_;
}

void StructDetailVO::unsetdstDB()
{
    dstDBIsSet_ = false;
}

std::string StructDetailVO::getDstTB() const
{
    return dstTB_;
}

void StructDetailVO::setDstTB(const std::string& value)
{
    dstTB_ = value;
    dstTBIsSet_ = true;
}

bool StructDetailVO::dstTBIsSet() const
{
    return dstTBIsSet_;
}

void StructDetailVO::unsetdstTB()
{
    dstTBIsSet_ = false;
}

}
}
}
}
}


