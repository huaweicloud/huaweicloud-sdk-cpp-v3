
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAccessControlTaskRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAccessControlTaskRequestBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/AccessControlUrls.h>

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
class HUAWEICLOUD_CDN_V2_EXPORT  UrlAccessControlTaskRequestBody
    : public ModelBase
{
public:
    UrlAccessControlTaskRequestBody();
    virtual ~UrlAccessControlTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UrlAccessControlTaskRequestBody members

    /// <summary>
    /// 
    /// </summary>

    AccessControlUrls getAccessControlUrls() const;
    bool accessControlUrlsIsSet() const;
    void unsetaccessControlUrls();
    void setAccessControlUrls(const AccessControlUrls& value);


protected:
    AccessControlUrls accessControlUrls_;
    bool accessControlUrlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAccessControlTaskRequestBody_H_
