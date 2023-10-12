

#include "huaweicloud/drs/v5/model/CompareResultInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CompareResultInfo::CompareResultInfo()
{
    objectsCompareOverviewInfoIsSet_ = false;
    objectsCompareDetailInfosIsSet_ = false;
    dataCompareTaskListIsSet_ = false;
    lineCompareOverviewInfosIsSet_ = false;
    lineCompareDetailInfosIsSet_ = false;
    contentCompareOverviewInfosIsSet_ = false;
    contentCompareDetailInfosIsSet_ = false;
}

CompareResultInfo::~CompareResultInfo() = default;

void CompareResultInfo::validate()
{
}

web::json::value CompareResultInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectsCompareOverviewInfoIsSet_) {
        val[utility::conversions::to_string_t("objects_compare_overview_info")] = ModelBase::toJson(objectsCompareOverviewInfo_);
    }
    if(objectsCompareDetailInfosIsSet_) {
        val[utility::conversions::to_string_t("objects_compare_detail_infos")] = ModelBase::toJson(objectsCompareDetailInfos_);
    }
    if(dataCompareTaskListIsSet_) {
        val[utility::conversions::to_string_t("data_compare_task_list")] = ModelBase::toJson(dataCompareTaskList_);
    }
    if(lineCompareOverviewInfosIsSet_) {
        val[utility::conversions::to_string_t("line_compare_overview_infos")] = ModelBase::toJson(lineCompareOverviewInfos_);
    }
    if(lineCompareDetailInfosIsSet_) {
        val[utility::conversions::to_string_t("line_compare_detail_infos")] = ModelBase::toJson(lineCompareDetailInfos_);
    }
    if(contentCompareOverviewInfosIsSet_) {
        val[utility::conversions::to_string_t("content_compare_overview_infos")] = ModelBase::toJson(contentCompareOverviewInfos_);
    }
    if(contentCompareDetailInfosIsSet_) {
        val[utility::conversions::to_string_t("content_compare_detail_infos")] = ModelBase::toJson(contentCompareDetailInfos_);
    }

    return val;
}
bool CompareResultInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objects_compare_overview_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objects_compare_overview_info"));
        if(!fieldValue.is_null())
        {
            ObjectsCompareTaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectsCompareOverviewInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objects_compare_detail_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objects_compare_detail_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectsCompareDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectsCompareDetailInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_compare_task_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_compare_task_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareJobInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataCompareTaskList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_overview_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_overview_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<LineCompareOverviewInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareOverviewInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_detail_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_detail_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TableLineCompareDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareDetailInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_overview_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_overview_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareOverviewInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareOverviewInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_detail_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_detail_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareDetailInfos(refVal);
        }
    }
    return ok;
}


ObjectsCompareTaskInfo CompareResultInfo::getObjectsCompareOverviewInfo() const
{
    return objectsCompareOverviewInfo_;
}

void CompareResultInfo::setObjectsCompareOverviewInfo(const ObjectsCompareTaskInfo& value)
{
    objectsCompareOverviewInfo_ = value;
    objectsCompareOverviewInfoIsSet_ = true;
}

bool CompareResultInfo::objectsCompareOverviewInfoIsSet() const
{
    return objectsCompareOverviewInfoIsSet_;
}

void CompareResultInfo::unsetobjectsCompareOverviewInfo()
{
    objectsCompareOverviewInfoIsSet_ = false;
}

std::vector<ObjectsCompareDetailInfo>& CompareResultInfo::getObjectsCompareDetailInfos()
{
    return objectsCompareDetailInfos_;
}

void CompareResultInfo::setObjectsCompareDetailInfos(const std::vector<ObjectsCompareDetailInfo>& value)
{
    objectsCompareDetailInfos_ = value;
    objectsCompareDetailInfosIsSet_ = true;
}

bool CompareResultInfo::objectsCompareDetailInfosIsSet() const
{
    return objectsCompareDetailInfosIsSet_;
}

void CompareResultInfo::unsetobjectsCompareDetailInfos()
{
    objectsCompareDetailInfosIsSet_ = false;
}

std::vector<CompareJobInfo>& CompareResultInfo::getDataCompareTaskList()
{
    return dataCompareTaskList_;
}

void CompareResultInfo::setDataCompareTaskList(const std::vector<CompareJobInfo>& value)
{
    dataCompareTaskList_ = value;
    dataCompareTaskListIsSet_ = true;
}

bool CompareResultInfo::dataCompareTaskListIsSet() const
{
    return dataCompareTaskListIsSet_;
}

void CompareResultInfo::unsetdataCompareTaskList()
{
    dataCompareTaskListIsSet_ = false;
}

std::vector<LineCompareOverviewInfo>& CompareResultInfo::getLineCompareOverviewInfos()
{
    return lineCompareOverviewInfos_;
}

void CompareResultInfo::setLineCompareOverviewInfos(const std::vector<LineCompareOverviewInfo>& value)
{
    lineCompareOverviewInfos_ = value;
    lineCompareOverviewInfosIsSet_ = true;
}

bool CompareResultInfo::lineCompareOverviewInfosIsSet() const
{
    return lineCompareOverviewInfosIsSet_;
}

void CompareResultInfo::unsetlineCompareOverviewInfos()
{
    lineCompareOverviewInfosIsSet_ = false;
}

std::vector<TableLineCompareDetailInfo>& CompareResultInfo::getLineCompareDetailInfos()
{
    return lineCompareDetailInfos_;
}

void CompareResultInfo::setLineCompareDetailInfos(const std::vector<TableLineCompareDetailInfo>& value)
{
    lineCompareDetailInfos_ = value;
    lineCompareDetailInfosIsSet_ = true;
}

bool CompareResultInfo::lineCompareDetailInfosIsSet() const
{
    return lineCompareDetailInfosIsSet_;
}

void CompareResultInfo::unsetlineCompareDetailInfos()
{
    lineCompareDetailInfosIsSet_ = false;
}

std::vector<ContentCompareOverviewInfo>& CompareResultInfo::getContentCompareOverviewInfos()
{
    return contentCompareOverviewInfos_;
}

void CompareResultInfo::setContentCompareOverviewInfos(const std::vector<ContentCompareOverviewInfo>& value)
{
    contentCompareOverviewInfos_ = value;
    contentCompareOverviewInfosIsSet_ = true;
}

bool CompareResultInfo::contentCompareOverviewInfosIsSet() const
{
    return contentCompareOverviewInfosIsSet_;
}

void CompareResultInfo::unsetcontentCompareOverviewInfos()
{
    contentCompareOverviewInfosIsSet_ = false;
}

std::vector<ContentCompareDetailInfo>& CompareResultInfo::getContentCompareDetailInfos()
{
    return contentCompareDetailInfos_;
}

void CompareResultInfo::setContentCompareDetailInfos(const std::vector<ContentCompareDetailInfo>& value)
{
    contentCompareDetailInfos_ = value;
    contentCompareDetailInfosIsSet_ = true;
}

bool CompareResultInfo::contentCompareDetailInfosIsSet() const
{
    return contentCompareDetailInfosIsSet_;
}

void CompareResultInfo::unsetcontentCompareDetailInfos()
{
    contentCompareDetailInfosIsSet_ = false;
}

}
}
}
}
}


