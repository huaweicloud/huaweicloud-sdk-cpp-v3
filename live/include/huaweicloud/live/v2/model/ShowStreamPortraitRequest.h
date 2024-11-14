
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamPortraitRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamPortraitRequest_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ShowStreamPortraitRequest
    : public ModelBase
{
public:
    ShowStreamPortraitRequest();
    virtual ~ShowStreamPortraitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStreamPortraitRequest members

    /// <summary>
    /// 项目ID，获取方法请参考[获取项目ID](https://support.huaweicloud.com/api-live/live_03_0023.html)。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 播放域名。 
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);

    /// <summary>
    /// 流名。 
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 统计日期，日期格式按照ISO8601表示法，格式：YYYYMMDD，如20200904。可以查询过去31天的数据（不含当天）。 
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string playDomain_;
    bool playDomainIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::string time_;
    bool timeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStreamPortraitRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStreamPortraitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamPortraitRequest_H_
