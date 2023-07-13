
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListQueryHttpCodeRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListQueryHttpCodeRequest_H_

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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListQueryHttpCodeRequest
    : public ModelBase
{
public:
    ListQueryHttpCodeRequest();
    virtual ~ListQueryHttpCodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListQueryHttpCodeRequest members

    /// <summary>
    /// 播放域名列表，最多支持查询100个域名，多个域名以逗号分隔。 
    /// </summary>

    std::vector<std::string>& getPlayDomains();
    bool playDomainsIsSet() const;
    void unsetplayDomains();
    void setPlayDomains(const std::vector<std::string>& value);

    /// <summary>
    /// 状态码。 
    /// </summary>

    std::vector<std::string>& getCode();
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::vector<std::string>& value);

    /// <summary>
    /// 区域列表。具体取值请参考[省份名称缩写](live_03_0043.xml)，不填写查询所有区域。 
    /// </summary>

    std::vector<std::string>& getRegion();
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::vector<std::string>& value);

    /// <summary>
    /// 运营商列表，取值如下： - CMCC ：移动 - CTCC ： 电信 - CUCC ：联通 - OTHER ：其他  不填写查询所有运营商。 
    /// </summary>

    std::vector<std::string>& getIsp();
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::vector<std::string>& value);

    /// <summary>
    /// 起始时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。若参数为空，默认查询最近1小时数据。  最大查询跨度1天，最大查询周期7天。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。  若参数为空，默认为当前时间。结束时间需大于起始时间。  最大查询跨度1天，最大查询周期7天。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::vector<std::string> playDomains_;
    bool playDomainsIsSet_;
    std::vector<std::string> code_;
    bool codeIsSet_;
    std::vector<std::string> region_;
    bool regionIsSet_;
    std::vector<std::string> isp_;
    bool ispIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListQueryHttpCodeRequest& dereference_from_shared_ptr(std::shared_ptr<ListQueryHttpCodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListQueryHttpCodeRequest_H_
