
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_Quota_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_Quota_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <vector>
#include "huaweicloud/ims/model/QuotaInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// quota响应
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  Quota
    : public ModelBase
{
public:
    Quota();
    virtual ~Quota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Quota members

    /// <summary>
    /// 查询的配额信息。
    /// </summary>

    std::vector<QuotaInfo>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<QuotaInfo>& value);


protected:
    std::vector<QuotaInfo> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_Quota_H_
