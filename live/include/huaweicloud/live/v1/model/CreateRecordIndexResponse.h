
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordIndexResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordIndexResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateRecordIndexResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateRecordIndexResponse();
    virtual ~CreateRecordIndexResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRecordIndexResponse members

    /// <summary>
    /// 索引文件地址
    /// </summary>

    std::string getIndexUrl() const;
    bool indexUrlIsSet() const;
    void unsetindexUrl();
    void setIndexUrl(const std::string& value);

    /// <summary>
    /// 直播推流域名
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// 应用名，如果任意应用填写*。录制规则匹配的时候，优先精确app匹配，如果匹配不到，则匹配*
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 录制的流名，如果任意流名则填写*。录制规则匹配的时候，优先精确stream匹配，如果匹配不到，则匹配*
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 开始时间。格式为：yyyy-MM-ddTHH:mm:ssZ（UTC时间）。(实际视频的开始时间)
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// 结束时间。格式为：yyyy-MM-ddTHH:mm:ssZ（UTC时间）。(实际视频的结束时间)
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 录制时长。单位：秒。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 视频宽。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// OBS Bucket所在RegionID
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// 桶名称
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// m3u8文件路径。默认Index/{publish_domain}/{app}/{stream}-{start_time}-{end_time}
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string indexUrl_;
    bool indexUrlIsSet_;
    std::string publishDomain_;
    bool publishDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string bucket_;
    bool bucketIsSet_;
    std::string object_;
    bool objectIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordIndexResponse_H_
