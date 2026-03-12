
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CollectedWdrSnapshotInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CollectedWdrSnapshotInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/CollectedWdrSnapshotInfoResult_obs_bucket.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CollectedWdrSnapshotInfoResult
    : public ModelBase
{
public:
    CollectedWdrSnapshotInfoResult();
    virtual ~CollectedWdrSnapshotInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectedWdrSnapshotInfoResult members

    /// <summary>
    /// **参数解释**： 任务ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**： 采集类型。 **取值范围**： - 实例级则为cluster。 - 组件级则为component。
    /// </summary>

    std::string getWdrType() const;
    bool wdrTypeIsSet() const;
    void unsetwdrType();
    void setWdrType(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件大小单位kb。当status为SUCCESS时，该值不为空。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int32_t value);

    /// <summary>
    /// **参数解释**： 下发采集时填写的开始snapshot时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**： 不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 下发采集时填写的结束snapshot时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**： 不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 报告下载链接，有效时间为30分钟。当status为SUCCESS时，该值不为空。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 采集状态。 **取值范围**: - SUCCESS：采集成功。 - FAILED：采集失败。 - EXPORTING：采集中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 备注。采集类型为组件级时，内容包括采集的组件ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getNotes() const;
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(const std::string& value);

    /// <summary>
    /// **参数解释**： WDR报告生成任务的创建时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始，Z指时区偏移量，当前时间固定为+0时区。例如，\&quot;2025-07-08T10:57:59+0000\&quot;。 **取值范围**： 不涉及。
    /// </summary>

    std::string getJobCreateTime() const;
    bool jobCreateTimeIsSet() const;
    void unsetjobCreateTime();
    void setJobCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于生成WDR报告的第一个对比快照ID。例如：\&quot;20024\&quot;。只针对使用报告生成模式为对比快照ID（mode&#x3D;snapshot_id）的采集任务生效；如果该任务使用的是时间区间查询方式（mode&#x3D;time_range），则该字段为空。 **取值范围**： 不涉及。
    /// </summary>

    std::string getStartSnapshotId() const;
    bool startSnapshotIdIsSet() const;
    void unsetstartSnapshotId();
    void setStartSnapshotId(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于生成WDR报告的第二个对比快照ID。例如：\&quot;20025\&quot;。只针对使用报告生成模式为对比快照ID（mode&#x3D;snapshot_id）的采集任务生效；如果该任务使用的是时间区间查询方式（mode&#x3D;time_range）来生成的，则该字段为空。 **取值范围**： 不涉及。
    /// </summary>

    std::string getEndSnapshotId() const;
    bool endSnapshotIdIsSet() const;
    void unsetendSnapshotId();
    void setEndSnapshotId(const std::string& value);

    /// <summary>
    /// **参数解释**： WDR报告临时文件名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释**： WDR报告临时文件保存路径。 **取值范围**： 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CollectedWdrSnapshotInfoResult_obs_bucket getObsBucket() const;
    bool obsBucketIsSet() const;
    void unsetobsBucket();
    void setObsBucket(const CollectedWdrSnapshotInfoResult_obs_bucket& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string wdrType_;
    bool wdrTypeIsSet_;
    int32_t fileSize_;
    bool fileSizeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string notes_;
    bool notesIsSet_;
    std::string jobCreateTime_;
    bool jobCreateTimeIsSet_;
    std::string startSnapshotId_;
    bool startSnapshotIdIsSet_;
    std::string endSnapshotId_;
    bool endSnapshotIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    CollectedWdrSnapshotInfoResult_obs_bucket obsBucket_;
    bool obsBucketIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CollectedWdrSnapshotInfoResult_H_
