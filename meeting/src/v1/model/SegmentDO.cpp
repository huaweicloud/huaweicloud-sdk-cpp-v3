

#include "huaweicloud/meeting/v1/model/SegmentDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SegmentDO::SegmentDO()
{
    manualOrder_ = 0;
    manualOrderIsSet_ = false;
    segmentOrder_ = 0;
    segmentOrderIsSet_ = false;
    segmentSize_ = "";
    segmentSizeIsSet_ = false;
    fileListIsSet_ = false;
}

SegmentDO::~SegmentDO() = default;

void SegmentDO::validate()
{
}

web::json::value SegmentDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manualOrderIsSet_) {
        val[utility::conversions::to_string_t("manualOrder")] = ModelBase::toJson(manualOrder_);
    }
    if(segmentOrderIsSet_) {
        val[utility::conversions::to_string_t("segmentOrder")] = ModelBase::toJson(segmentOrder_);
    }
    if(segmentSizeIsSet_) {
        val[utility::conversions::to_string_t("segmentSize")] = ModelBase::toJson(segmentSize_);
    }
    if(fileListIsSet_) {
        val[utility::conversions::to_string_t("fileList")] = ModelBase::toJson(fileList_);
    }

    return val;
}
bool SegmentDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("manualOrder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manualOrder"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManualOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segmentOrder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segmentOrder"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segmentSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segmentSize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileList"));
        if(!fieldValue.is_null())
        {
            std::vector<SegmentFileDO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileList(refVal);
        }
    }
    return ok;
}


int32_t SegmentDO::getManualOrder() const
{
    return manualOrder_;
}

void SegmentDO::setManualOrder(int32_t value)
{
    manualOrder_ = value;
    manualOrderIsSet_ = true;
}

bool SegmentDO::manualOrderIsSet() const
{
    return manualOrderIsSet_;
}

void SegmentDO::unsetmanualOrder()
{
    manualOrderIsSet_ = false;
}

int32_t SegmentDO::getSegmentOrder() const
{
    return segmentOrder_;
}

void SegmentDO::setSegmentOrder(int32_t value)
{
    segmentOrder_ = value;
    segmentOrderIsSet_ = true;
}

bool SegmentDO::segmentOrderIsSet() const
{
    return segmentOrderIsSet_;
}

void SegmentDO::unsetsegmentOrder()
{
    segmentOrderIsSet_ = false;
}

std::string SegmentDO::getSegmentSize() const
{
    return segmentSize_;
}

void SegmentDO::setSegmentSize(const std::string& value)
{
    segmentSize_ = value;
    segmentSizeIsSet_ = true;
}

bool SegmentDO::segmentSizeIsSet() const
{
    return segmentSizeIsSet_;
}

void SegmentDO::unsetsegmentSize()
{
    segmentSizeIsSet_ = false;
}

std::vector<SegmentFileDO>& SegmentDO::getFileList()
{
    return fileList_;
}

void SegmentDO::setFileList(const std::vector<SegmentFileDO>& value)
{
    fileList_ = value;
    fileListIsSet_ = true;
}

bool SegmentDO::fileListIsSet() const
{
    return fileListIsSet_;
}

void SegmentDO::unsetfileList()
{
    fileListIsSet_ = false;
}

}
}
}
}
}


