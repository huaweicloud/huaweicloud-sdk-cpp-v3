
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordContentInfoV2_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordContentInfoV2_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/RecordObsFileAddr.h>
#include <huaweicloud/live/v1/model/VodInfoV2.h>
#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  RecordContentInfoV2
    : public ModelBase
{
public:
    RecordContentInfoV2();
    virtual ~RecordContentInfoV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordContentInfoV2 members

    /// <summary>
    /// 直播推流域名
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// 录制文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

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
    /// 录制格式flv，hls，mp4
    /// </summary>

    std::string getRecordFormat() const;
    bool recordFormatIsSet() const;
    void unsetrecordFormat();
    void setRecordFormat(const std::string& value);

    /// <summary>
    /// 录制类型，CONTINUOUS_RECORD，COMMAND_RECORD，PLAN_RECORD, ON_DEMAND_RECORD。默认CONTINUOUS_RECORD。 - CONTINUOUS_RECORD：持续录制，在该规则类型配置后，只要有流到推送到录制系统，就触发录制。 - COMMAND_RECORD：命令录制，在该规则类型配置后，在流推送到录制系统后，租户需要通过命令控制该流的录制开始和结束。 - PLAN_RECORD：计划录制，在该规则类型配置后，推的流如果在计划录制的时间区间则触发录制。 - ON_DEMAND_RECORD：按需录制，在该规则类型配置后，录制系统收到推流后，需要调用租户提供的接口查询录制规则，并根据规则录制。 
    /// </summary>

    std::string getRecordType() const;
    bool recordTypeIsSet() const;
    void unsetrecordType();
    void setRecordType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecordObsFileAddr getObsAddr() const;
    bool obsAddrIsSet() const;
    void unsetobsAddr();
    void setObsAddr(const RecordObsFileAddr& value);

    /// <summary>
    /// 
    /// </summary>

    VodInfoV2 getVodInfo() const;
    bool vodInfoIsSet() const;
    void unsetvodInfo();
    void setVodInfo(const VodInfoV2& value);

    /// <summary>
    /// OBS下载地址
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);

    /// <summary>
    /// 录制开始时间，格式：yyyy-mm-ddThh:mm:ssZ，UTC时间。对record_type为PLAN_RECORD有效
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// 录制结束时间，格式：yyyy-mm-ddThh:mm:ssZ，UTC时间。对record_type为PLAN_RECORD有效
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 该录制文件时长，单位为秒
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


protected:
    std::string publishDomain_;
    bool publishDomainIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::string recordFormat_;
    bool recordFormatIsSet_;
    std::string recordType_;
    bool recordTypeIsSet_;
    RecordObsFileAddr obsAddr_;
    bool obsAddrIsSet_;
    VodInfoV2 vodInfo_;
    bool vodInfoIsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordContentInfoV2_H_
