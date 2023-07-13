
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDRequestBody_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/BatchCopyConfigs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 域名复制请求体。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BatchCopyDRequestBody
    : public ModelBase
{
public:
    BatchCopyDRequestBody();
    virtual ~BatchCopyDRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCopyDRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchCopyConfigs getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const BatchCopyConfigs& value);


protected:
    BatchCopyConfigs configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDRequestBody_H_
