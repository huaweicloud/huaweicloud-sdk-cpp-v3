
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRecycleInstancesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRecycleInstancesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RecycleInstsanceV3.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListRecycleInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRecycleInstancesResponse();
    virtual ~ListRecycleInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListRecycleInstancesResponse members

    /// <summary>
    /// 回收站数据条数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 回收站信息
    /// </summary>

    std::vector<RecycleInstsanceV3>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<RecycleInstsanceV3>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<RecycleInstsanceV3> instances_;
    bool instancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRecycleInstancesResponse_H_
