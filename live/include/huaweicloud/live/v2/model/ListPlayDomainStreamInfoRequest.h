
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListPlayDomainStreamInfoRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListPlayDomainStreamInfoRequest_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListPlayDomainStreamInfoRequest
    : public ModelBase
{
public:
    ListPlayDomainStreamInfoRequest();
    virtual ~ListPlayDomainStreamInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPlayDomainStreamInfoRequest members

    /// <summary>
    /// 项目ID，获取方法请参考[获取项目ID](live_03_0023.xml)。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 播放域名列表，最多支持查询10个域名，多个域名以逗号分隔。  如果不传入域名，则查询租户下所有播放域名的流数据。 
    /// </summary>

    std::vector<std::string>& getPlayDomains();
    bool playDomainsIsSet() const;
    void unsetplayDomains();
    void setPlayDomains(const std::vector<std::string>& value);

    /// <summary>
    /// 查询数据的时间点，精确到分钟。  日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ，最大查询周期七天。  时间必须为时间粒度整时刻点，如：2024-02-02T08:01:00Z。 
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> playDomains_;
    bool playDomainsIsSet_;
    std::string time_;
    bool timeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPlayDomainStreamInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ListPlayDomainStreamInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListPlayDomainStreamInfoRequest_H_
