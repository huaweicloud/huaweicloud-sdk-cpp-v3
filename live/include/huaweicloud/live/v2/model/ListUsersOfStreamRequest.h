
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListUsersOfStreamRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListUsersOfStreamRequest_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListUsersOfStreamRequest
    : public ModelBase
{
public:
    ListUsersOfStreamRequest();
    virtual ~ListUsersOfStreamRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListUsersOfStreamRequest members

    /// <summary>
    /// 项目ID。获取方法请参考[获取项目ID](live_03_0023.xml)。 
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
    /// app名。 
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 流名。 
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 运营商列表，取值如下： - CMCC ：移动 - CTCC ： 电信 - CUCC ：联通 - OTHER ：其他  不填写查询所有运营商。 
    /// </summary>

    std::vector<std::string>& getIsp();
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::vector<std::string>& value);

    /// <summary>
    /// 国家列表。具体取值请参考[国家名称缩写](vod_08_0172.xml)，不填写查询所有国家。 
    /// </summary>

    std::vector<std::string>& getCountry();
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::vector<std::string>& value);

    /// <summary>
    /// 区域列表。具体取值请参考[省份名称缩写](live_03_0043.xml)，不填写查询所有区域。 
    /// </summary>

    std::vector<std::string>& getRegion();
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::vector<std::string>& value);

    /// <summary>
    /// 请求协议
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 查询数据的时间粒度，支持60（默认值）, 300秒。不传值时，使用默认值60秒。 
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 起始时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。最大查询跨度31天，最大查询周期一年。  若参数为空，默认查询7天数据。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。日期格式按照ISO8601表示法，并使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。  若参数为空，默认为当前时间。结束时间需大于起始时间。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 服务类型： - Live：直播 - LLL：超低时延直播 - ALL: 默认所有直播 
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string playDomain_;
    bool playDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::vector<std::string> isp_;
    bool ispIsSet_;
    std::vector<std::string> country_;
    bool countryIsSet_;
    std::vector<std::string> region_;
    bool regionIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUsersOfStreamRequest& dereference_from_shared_ptr(std::shared_ptr<ListUsersOfStreamRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListUsersOfStreamRequest_H_
