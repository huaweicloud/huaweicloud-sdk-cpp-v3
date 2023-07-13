
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordIndexRequestBody_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordIndexRequestBody_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  RecordIndexRequestBody
    : public ModelBase
{
public:
    RecordIndexRequestBody();
    virtual ~RecordIndexRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecordIndexRequestBody members

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// app名
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 流名
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 开始时间。格式为：YYYY-MM-DDTHH:mm:ssZ（UTC时间），开始时间与结束时间的间隔最大为12小时。
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// 结束时间。格式为：YYYY-MM-DDTHH:mm:ssZ（UTC时间），开始时间与结束时间的间隔最大为12小时。结束时间不允许大于当前时间。
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// \&quot;m3u8文件在OBS中的储存路径。支持下列字符串的转义   - {publish_domain}   - {app}   - {stream}   - {start_time}   - {end_time} 其中{start_time},{end_time}为返回结果的实际时间。 默认值为Index/{publish_domain}/{app}/{stream}/{stream}-{start_time}-{end_time}\&quot;
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);


protected:
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
    std::string object_;
    bool objectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordIndexRequestBody_H_
