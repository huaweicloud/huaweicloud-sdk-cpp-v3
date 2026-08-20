
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SetStatsConfigBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SetStatsConfigBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置统计配置请求体
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SetStatsConfigBody
    : public ModelBase
{
public:
    SetStatsConfigBody();
    virtual ~SetStatsConfigBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetStatsConfigBody members

    /// <summary>
    /// **参数解释：** 配置类型 **约束限制：** 不涉及 **取值范围：** - 0：热点统计 - 1：ces上报 **默认取值：** 不涉及
    /// </summary>

    int32_t getConfigType() const;
    bool configTypeIsSet() const;
    void unsetconfigType();
    void setConfigType(int32_t value);

    /// <summary>
    /// **参数解释：** 资源类型 **约束限制：** 不涉及 **取值范围：** - domain：域名，对应resource_name需配置为域名 - account：账号，对应resource_name需配置为账号 **默认取值：** 不涉及
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源名称 &gt; 账号或域名  **约束限制：** 不涉及 **取值范围：** 多个资源名称以英文逗号分隔 **默认取值：** 不涉及
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置信息 **约束限制：** 不涉及 **取值范围：** - ua：HTTP请求头User-Agent的值 - refer：HTTP请求头referer的值 - url：客户访问的http地址 - originurl：回源url **默认取值：** 不涉及
    /// </summary>

    Object getConfigInfo() const;
    bool configInfoIsSet() const;
    void unsetconfigInfo();
    void setConfigInfo(const Object& value);


protected:
    int32_t configType_;
    bool configTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    Object configInfo_;
    bool configInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SetStatsConfigBody_H_
