
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CollectedWdrSnapshotInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CollectedWdrSnapshotInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CollectedWdrSnapshotInfoResult_H_
