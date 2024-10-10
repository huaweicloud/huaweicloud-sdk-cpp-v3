
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafBandwidthRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafBandwidthRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListWafBandwidthRequest
    : public ModelBase
{
public:
    ListWafBandwidthRequest();
    virtual ~ListWafBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWafBandwidthRequest members

    /// <summary>
    /// 不传时代表全部域名
    /// </summary>

    std::string getDomains() const;
    bool domainsIsSet() const;
    void unsetdomains();
    void setDomains(const std::string& value);

    /// <summary>
    /// 平均值 mean、峰值 peak
    /// </summary>

    std::string getValueType() const;
    bool valueTypeIsSet() const;
    void unsetvalueType();
    void setValueType(const std::string& value);

    /// <summary>
    /// 开始时间（毫秒时间戳）
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间（毫秒时间戳）
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 枚举值：yesterday,today,3days,1week,1month 与开始结束时间不同时为空
    /// </summary>

    std::string getRecent() const;
    bool recentIsSet() const;
    void unsetrecent();
    void setRecent(const std::string& value);

    /// <summary>
    /// 实例类型，0-大陆，1-海外
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);


protected:
    std::string domains_;
    bool domainsIsSet_;
    std::string valueType_;
    bool valueTypeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string recent_;
    bool recentIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWafBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<ListWafBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafBandwidthRequest_H_
