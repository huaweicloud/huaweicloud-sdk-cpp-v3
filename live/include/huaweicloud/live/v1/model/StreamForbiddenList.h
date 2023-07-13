
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamForbiddenList_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamForbiddenList_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  StreamForbiddenList
    : public ModelBase
{
public:
    StreamForbiddenList();
    virtual ~StreamForbiddenList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StreamForbiddenList members

    /// <summary>
    /// 流应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 流名称
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);

    /// <summary>
    /// 恢复流时间，格式：yyyy-mm-ddThh:mm:ssZ，UTC时间，不指定则默认7天，最大禁推为90天
    /// </summary>

    std::string getResumeTime() const;
    bool resumeTimeIsSet() const;
    void unsetresumeTime();
    void setResumeTime(const std::string& value);


protected:
    std::string appName_;
    bool appNameIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;
    std::string resumeTime_;
    bool resumeTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamForbiddenList_H_
