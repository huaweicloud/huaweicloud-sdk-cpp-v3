
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_IpFrequencyLimit_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_IpFrequencyLimit_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// IP访问限频，通过对单IP每秒访问单个节点的次数限制，实现CC攻击防御及恶意盗刷防护。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  IpFrequencyLimit
    : public ModelBase
{
public:
    IpFrequencyLimit();
    virtual ~IpFrequencyLimit();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IpFrequencyLimit members

    /// <summary>
    /// 状态，on：打开，off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 访问阈值,单位：次/秒，取值范围：1-100000。   &gt; 当开启ip限频时，访问阈值必填。
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_IpFrequencyLimit_H_
