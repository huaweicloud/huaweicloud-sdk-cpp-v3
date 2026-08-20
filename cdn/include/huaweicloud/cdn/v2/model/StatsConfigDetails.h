
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_StatsConfigDetails_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_StatsConfigDetails_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ConfigInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置详情
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  StatsConfigDetails
    : public ModelBase
{
public:
    StatsConfigDetails();
    virtual ~StatsConfigDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatsConfigDetails members

    /// <summary>
    /// **参数解释：** 配置类型 **取值范围：** - 0：热点统计 - 1：ces上报
    /// </summary>

    int32_t getConfigType() const;
    bool configTypeIsSet() const;
    void unsetconfigType();
    void setConfigType(int32_t value);

    /// <summary>
    /// **参数解释：** 资源类型 **取值范围：** - domain：域名，对应resource_name需配置为域名 - account：账号，对应resource_name需配置为账号
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源名称 &gt; 账号或域名  **约束限制：** 不涉及 **取值范围：** 多个域名以英文逗号分隔
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigInfo getConfigInfo() const;
    bool configInfoIsSet() const;
    void unsetconfigInfo();
    void setConfigInfo(const ConfigInfo& value);


protected:
    int32_t configType_;
    bool configTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    ConfigInfo configInfo_;
    bool configInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_StatsConfigDetails_H_
