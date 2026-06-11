
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DownloadInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DownloadInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 下载信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DownloadInfo
    : public ModelBase
{
public:
    DownloadInfo();
    virtual ~DownloadInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadInfo members

    /// <summary>
    /// 参数解释： 任务ID。 取值范围： 不涉及。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 参数解释： 生成的下载文件名。 取值范围： 不涉及。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 参数解释： 当前链接的生成状态。 取值范围： 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 参数解释： 文件大小。单位Byte 取值范围： 不涉及。
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// 参数解释： 下载链接。 取值范围： 不涉及。
    /// </summary>

    std::string getFileLink() const;
    bool fileLinkIsSet() const;
    void unsetfileLink();
    void setFileLink(const std::string& value);

    /// <summary>
    /// 下载链接过期时间
    /// </summary>

    int64_t getFileLinkExpirationTime() const;
    bool fileLinkExpirationTimeIsSet() const;
    void unsetfileLinkExpirationTime();
    void setFileLinkExpirationTime(int64_t value);

    /// <summary>
    /// 参数解释： 开始时间。 格式为UTC时间戳。 取值范围： 不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 参数解释： 结束时间。 格式为UTC时间戳。 取值范围： 不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string fileLink_;
    bool fileLinkIsSet_;
    int64_t fileLinkExpirationTime_;
    bool fileLinkExpirationTimeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DownloadInfo_H_
