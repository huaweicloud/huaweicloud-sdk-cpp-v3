
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriberInstancesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriberInstancesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ReplicationInstanceInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSubscriberInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubscriberInstancesResponse();
    virtual ~ListSubscriberInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriberInstancesResponse members

    /// <summary>
    /// 实例列表。
    /// </summary>

    std::vector<ReplicationInstanceInfo>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<ReplicationInstanceInfo>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ReplicationInstanceInfo> instances_;
    bool instancesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriberInstancesResponse_H_
