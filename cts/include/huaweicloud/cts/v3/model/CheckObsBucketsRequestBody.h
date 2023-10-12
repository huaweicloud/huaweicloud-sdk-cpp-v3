
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsRequestBody_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsRequestBody_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/CheckBucketRequest.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  CheckObsBucketsRequestBody
    : public ModelBase
{
public:
    CheckObsBucketsRequestBody();
    virtual ~CheckObsBucketsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckObsBucketsRequestBody members

    /// <summary>
    /// 请求检查的OBS桶列表。
    /// </summary>

    std::vector<CheckBucketRequest>& getBuckets();
    bool bucketsIsSet() const;
    void unsetbuckets();
    void setBuckets(const std::vector<CheckBucketRequest>& value);


protected:
    std::vector<CheckBucketRequest> buckets_;
    bool bucketsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsRequestBody_H_
