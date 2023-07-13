
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareResultInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareResultInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TableLineCompareDetailInfo.h>
#include <huaweicloud/drs/v5/model/LineCompareOverviewInfo.h>
#include <huaweicloud/drs/v5/model/ObjectsCompareTaskInfo.h>
#include <huaweicloud/drs/v5/model/ObjectsCompareDetailInfo.h>
#include <huaweicloud/drs/v5/model/ContentCompareOverviewInfo.h>
#include <huaweicloud/drs/v5/model/ContentCompareDetailInfo.h>
#include <vector>
#include <huaweicloud/drs/v5/model/CompareJobInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询对比任务信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CompareResultInfo
    : public ModelBase
{
public:
    CompareResultInfo();
    virtual ~CompareResultInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompareResultInfo members

    /// <summary>
    /// 
    /// </summary>

    ObjectsCompareTaskInfo getObjectsCompareOverviewInfo() const;
    bool objectsCompareOverviewInfoIsSet() const;
    void unsetobjectsCompareOverviewInfo();
    void setObjectsCompareOverviewInfo(const ObjectsCompareTaskInfo& value);

    /// <summary>
    /// 对象级对比详情信息体。
    /// </summary>

    std::vector<ObjectsCompareDetailInfo>& getObjectsCompareDetailInfos();
    bool objectsCompareDetailInfosIsSet() const;
    void unsetobjectsCompareDetailInfos();
    void setObjectsCompareDetailInfos(const std::vector<ObjectsCompareDetailInfo>& value);

    /// <summary>
    /// 数据对比任务列表。
    /// </summary>

    std::vector<CompareJobInfo>& getDataCompareTaskList();
    bool dataCompareTaskListIsSet() const;
    void unsetdataCompareTaskList();
    void setDataCompareTaskList(const std::vector<CompareJobInfo>& value);

    /// <summary>
    /// 行数对比概览信息体。
    /// </summary>

    std::vector<LineCompareOverviewInfo>& getLineCompareOverviewInfos();
    bool lineCompareOverviewInfosIsSet() const;
    void unsetlineCompareOverviewInfos();
    void setLineCompareOverviewInfos(const std::vector<LineCompareOverviewInfo>& value);

    /// <summary>
    /// 行数对比任务表级详情。
    /// </summary>

    std::vector<TableLineCompareDetailInfo>& getLineCompareDetailInfos();
    bool lineCompareDetailInfosIsSet() const;
    void unsetlineCompareDetailInfos();
    void setLineCompareDetailInfos(const std::vector<TableLineCompareDetailInfo>& value);

    /// <summary>
    /// 内容对比概览信息体。
    /// </summary>

    std::vector<ContentCompareOverviewInfo>& getContentCompareOverviewInfos();
    bool contentCompareOverviewInfosIsSet() const;
    void unsetcontentCompareOverviewInfos();
    void setContentCompareOverviewInfos(const std::vector<ContentCompareOverviewInfo>& value);

    /// <summary>
    /// 内容对比详情信息体。
    /// </summary>

    std::vector<ContentCompareDetailInfo>& getContentCompareDetailInfos();
    bool contentCompareDetailInfosIsSet() const;
    void unsetcontentCompareDetailInfos();
    void setContentCompareDetailInfos(const std::vector<ContentCompareDetailInfo>& value);


protected:
    ObjectsCompareTaskInfo objectsCompareOverviewInfo_;
    bool objectsCompareOverviewInfoIsSet_;
    std::vector<ObjectsCompareDetailInfo> objectsCompareDetailInfos_;
    bool objectsCompareDetailInfosIsSet_;
    std::vector<CompareJobInfo> dataCompareTaskList_;
    bool dataCompareTaskListIsSet_;
    std::vector<LineCompareOverviewInfo> lineCompareOverviewInfos_;
    bool lineCompareOverviewInfosIsSet_;
    std::vector<TableLineCompareDetailInfo> lineCompareDetailInfos_;
    bool lineCompareDetailInfosIsSet_;
    std::vector<ContentCompareOverviewInfo> contentCompareOverviewInfos_;
    bool contentCompareOverviewInfosIsSet_;
    std::vector<ContentCompareDetailInfo> contentCompareDetailInfos_;
    bool contentCompareDetailInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareResultInfo_H_
