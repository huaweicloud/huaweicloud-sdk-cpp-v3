
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSubscriptionListsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSubscriptionListsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BaseResp.h>
#include <huaweicloud/drs/v5/model/SubscriptionListResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowSubscriptionListsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSubscriptionListsResponse();
    virtual ~ShowSubscriptionListsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSubscriptionListsResponse members

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionListResp getJobs() const;
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const SubscriptionListResp& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    SubscriptionListResp jobs_;
    bool jobsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSubscriptionListsResponse_H_
