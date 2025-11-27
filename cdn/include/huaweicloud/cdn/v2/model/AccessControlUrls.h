
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessControlUrls_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessControlUrls_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 需要解禁或封禁的URL信息
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  AccessControlUrls
    : public ModelBase
{
public:
    AccessControlUrls();
    virtual ~AccessControlUrls();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessControlUrls members

    /// <summary>
    /// URL必须带有“http://”或“https://”，单次最多输入1000个url。
    /// </summary>

    std::vector<std::string>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<std::string>& value);

    /// <summary>
    /// URL封禁天数，默认7天，取值范围1-30。
    /// </summary>

    int32_t getBanDuration() const;
    bool banDurationIsSet() const;
    void unsetbanDuration();
    void setBanDuration(int32_t value);


protected:
    std::vector<std::string> urls_;
    bool urlsIsSet_;
    int32_t banDuration_;
    bool banDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessControlUrls_H_
