
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListAreaDetailRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListAreaDetailRequest_H_

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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListAreaDetailRequest
    : public ModelBase
{
public:
    ListAreaDetailRequest();
    virtual ~ListAreaDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAreaDetailRequest members

    /// <summary>
    /// 项目ID，获取方法请参考[获取项目ID](live_03_0023.xml)。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 查询起始时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。最大查询跨度1天，最大查询周期90天。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 查询结束时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。最大查询跨度1天，最大查询周期90天。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 需查询的播放域名列表，最多支持查询100个域名。 
    /// </summary>

    std::vector<std::string>& getPlayDomains();
    bool playDomainsIsSet() const;
    void unsetplayDomains();
    void setPlayDomains(const std::vector<std::string>& value);

    /// <summary>
    /// 需查询的app。 
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 流名称。
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 查询数据的时间粒度。支持300（默认值）、3600和86400秒。若参数为空，则默认为300秒。  注意，若metric的值为player（观众数），则interval填入的值不起效果，查询粒度interval默认为60秒。 
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 运营商列表，取值如下： - CMCC：移动 - CTCC：电信 - CUCC：联通 - OTHER：其他  若参数为空，则查询所有运营商。 
    /// </summary>

    std::vector<std::string>& getIsp();
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::vector<std::string>& value);

    /// <summary>
    /// 需查询的计费大区，取值如下： - CN：中国内地。 - AP1：亚太1区。 - AP2：亚太2区。 - AP3：亚太3区。 - MEAA：中东非洲。 - SA：南美。 - EU：欧洲。 - ALL：全部。  中国内地返回结果为省份/直辖市的中文名称，比如：广东、上海； 海外大区与地区/国家的对应关系请参考[地区/国家代码对照表](live_03_0049.xml)。 
    /// </summary>

    std::vector<std::string>& getArea();
    bool areaIsSet() const;
    void unsetarea();
    void setArea(const std::vector<std::string>& value);

    /// <summary>
    /// 指标，取值如下： - bandwidth：带宽 - traffic：流量 - player：观众数 
    /// </summary>

    std::string getMetric() const;
    bool metricIsSet() const;
    void unsetmetric();
    void setMetric(const std::string& value);

    /// <summary>
    /// 请求协议，取值如下： - flv - hls 
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> playDomains_;
    bool playDomainsIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    std::vector<std::string> isp_;
    bool ispIsSet_;
    std::vector<std::string> area_;
    bool areaIsSet_;
    std::string metric_;
    bool metricIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAreaDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListAreaDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListAreaDetailRequest_H_
