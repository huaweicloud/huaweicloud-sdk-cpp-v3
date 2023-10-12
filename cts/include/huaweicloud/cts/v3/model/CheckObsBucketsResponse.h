
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/Bucket.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  CheckObsBucketsResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckObsBucketsResponse();
    virtual ~CheckObsBucketsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckObsBucketsResponse members

    /// <summary>
    /// 检查OBS桶状态响应体。
    /// </summary>

    std::vector<Bucket>& getBuckets();
    bool bucketsIsSet() const;
    void unsetbuckets();
    void setBuckets(const std::vector<Bucket>& value);


protected:
    std::vector<Bucket> buckets_;
    bool bucketsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsResponse_H_
