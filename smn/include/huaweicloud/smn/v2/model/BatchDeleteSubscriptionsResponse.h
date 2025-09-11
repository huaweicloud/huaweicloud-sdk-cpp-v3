
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/BatchDeleteSubscriptionsResponseItemInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  BatchDeleteSubscriptionsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteSubscriptionsResponse();
    virtual ~BatchDeleteSubscriptionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSubscriptionsResponse members

    /// <summary>
    /// 取消订阅结果列表。
    /// </summary>

    std::vector<BatchDeleteSubscriptionsResponseItemInfo>& getSubscriptionsResult();
    bool subscriptionsResultIsSet() const;
    void unsetsubscriptionsResult();
    void setSubscriptionsResult(const std::vector<BatchDeleteSubscriptionsResponseItemInfo>& value);


protected:
    std::vector<BatchDeleteSubscriptionsResponseItemInfo> subscriptionsResult_;
    bool subscriptionsResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsResponse_H_
