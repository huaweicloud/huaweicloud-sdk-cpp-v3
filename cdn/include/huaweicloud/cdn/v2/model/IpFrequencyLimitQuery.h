
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_IpFrequencyLimitQuery_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_IpFrequencyLimitQuery_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Ip访问限频。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  IpFrequencyLimitQuery
    : public ModelBase
{
public:
    IpFrequencyLimitQuery();
    virtual ~IpFrequencyLimitQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpFrequencyLimitQuery members

    /// <summary>
    /// 状态，on：打开，off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 访问阈值，单位：次/秒。
    /// </summary>

    int32_t getQps() const;
    bool qpsIsSet() const;
    void unsetqps();
    void setQps(int32_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    int32_t qps_;
    bool qpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_IpFrequencyLimitQuery_H_
