
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSubscriptionTasksResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSubscriptionTasksResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/SubscriptionTask.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListSubscriptionTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubscriptionTasksResponse();
    virtual ~ListSubscriptionTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionTasksResponse members

    /// <summary>
    /// 订阅任务总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<SubscriptionTask>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<SubscriptionTask>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SubscriptionTask> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSubscriptionTasksResponse_H_
