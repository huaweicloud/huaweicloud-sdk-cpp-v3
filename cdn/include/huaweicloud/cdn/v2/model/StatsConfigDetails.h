
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
    /// 配置类别.0：热点统计类
    /// </summary>

    int32_t getConfigType() const;
    bool configTypeIsSet() const;
    void unsetconfigType();
    void setConfigType(int32_t value);

    /// <summary>
    /// 资源类型。domain:resource_name为域名，account:resource_name为账号
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 资源名称为账号或域名。多个域名以英文逗号分隔
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

    /// <summary>
    /// 统计配置失效时间，秒时间戳
    /// </summary>

    int64_t getExpiredTime() const;
    bool expiredTimeIsSet() const;
    void unsetexpiredTime();
    void setExpiredTime(int64_t value);


protected:
    int32_t configType_;
    bool configTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    ConfigInfo configInfo_;
    bool configInfoIsSet_;
    int64_t expiredTime_;
    bool expiredTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_StatsConfigDetails_H_
