
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/LogExportPathResp.h>
#include <huaweicloud/modelarts/v1/model/CustomMetrics.h>
#include <huaweicloud/modelarts/v1/model/Resource.h>
#include <huaweicloud/modelarts/v1/model/JobVolumeResp.h>
#include <huaweicloud/modelarts/v1/model/AssetModelResp.h>
#include <huaweicloud/modelarts/v1/model/OutputModelResp.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/SchedulePolicyResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业规格参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SpecResponse
    : public ModelBase
{
public:
    SpecResponse();
    virtual ~SpecResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpecResponse members

    /// <summary>
    /// 
    /// </summary>

    Resource getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const Resource& value);

    /// <summary>
    /// **参数解释**：训练作业挂载卷信息。
    /// </summary>

    std::vector<JobVolumeResp>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<JobVolumeResp>& value);

    /// <summary>
    /// 
    /// </summary>

    LogExportPathResp getLogExportPath() const;
    bool logExportPathIsSet() const;
    void unsetlogExportPath();
    void setLogExportPath(const LogExportPathResp& value);

    /// <summary>
    /// 
    /// </summary>

    SchedulePolicyResp getSchedulePolicy() const;
    bool schedulePolicyIsSet() const;
    void unsetschedulePolicy();
    void setSchedulePolicy(const SchedulePolicyResp& value);

    /// <summary>
    /// **参数解释**：指标采集配置。
    /// </summary>

    std::vector<CustomMetrics>& getCustomMetrics();
    bool customMetricsIsSet() const;
    void unsetcustomMetrics();
    void setCustomMetrics(const std::vector<CustomMetrics>& value);

    /// <summary>
    /// 
    /// </summary>

    OutputModelResp getOutputModel() const;
    bool outputModelIsSet() const;
    void unsetoutputModel();
    void setOutputModel(const OutputModelResp& value);

    /// <summary>
    /// 
    /// </summary>

    AssetModelResp getAssetModel() const;
    bool assetModelIsSet() const;
    void unsetassetModel();
    void setAssetModel(const AssetModelResp& value);


protected:
    Resource resource_;
    bool resourceIsSet_;
    std::vector<JobVolumeResp> volumes_;
    bool volumesIsSet_;
    LogExportPathResp logExportPath_;
    bool logExportPathIsSet_;
    SchedulePolicyResp schedulePolicy_;
    bool schedulePolicyIsSet_;
    std::vector<CustomMetrics> customMetrics_;
    bool customMetricsIsSet_;
    OutputModelResp outputModel_;
    bool outputModelIsSet_;
    AssetModelResp assetModel_;
    bool assetModelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecResponse_H_
