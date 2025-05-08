
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>
#include <huaweicloud/vod/v1/model/ObjectMetaData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateRealTimeClipResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateRealTimeClipResponse();
    virtual ~CreateRealTimeClipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRealTimeClipResponse members

    /// <summary>
    /// 截取的任务id，回调时会返回该任务id 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 直播推流域名 
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// 应用名 
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 录制的流名 
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 录制完成文件对应的启动录制时间，UNIX时间戳 
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);

    /// <summary>
    /// 录制完成文件对应的完成录制时间，UNIX时间戳 
    /// </summary>

    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int32_t value);

    /// <summary>
    /// 粉丝截取响应的obs地址 
    /// </summary>

    std::string getFileUrl() const;
    bool fileUrlIsSet() const;
    void unsetfileUrl();
    void setFileUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObjectMetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const ObjectMetaData& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string publishDomain_;
    bool publishDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t endTime_;
    bool endTimeIsSet_;
    std::string fileUrl_;
    bool fileUrlIsSet_;
    ObsInfo output_;
    bool outputIsSet_;
    ObjectMetaData metaData_;
    bool metaDataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipResponse_H_
