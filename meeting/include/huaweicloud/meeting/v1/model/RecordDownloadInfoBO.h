
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordDownloadInfoBO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordDownloadInfoBO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RecordDownloadUrlDO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议录制文件下载链接信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RecordDownloadInfoBO
    : public ModelBase
{
public:
    RecordDownloadInfoBO();
    virtual ~RecordDownloadInfoBO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordDownloadInfoBO members

    /// <summary>
    /// 会议UUID。
    /// </summary>

    std::string getConfUuid() const;
    bool confUuidIsSet() const;
    void unsetconfUuid();
    void setConfUuid(const std::string& value);

    /// <summary>
    /// 下载链接信息。
    /// </summary>

    std::vector<RecordDownloadUrlDO>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<RecordDownloadUrlDO>& value);


protected:
    std::string confUuid_;
    bool confUuidIsSet_;
    std::vector<RecordDownloadUrlDO> urls_;
    bool urlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordDownloadInfoBO_H_
