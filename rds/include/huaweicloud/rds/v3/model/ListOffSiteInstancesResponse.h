
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteInstancesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteInstancesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/OffsiteBackupInstance.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListOffSiteInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOffSiteInstancesResponse();
    virtual ~ListOffSiteInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListOffSiteInstancesResponse members

    /// <summary>
    /// 跨区域备份实例信息。
    /// </summary>

    std::vector<OffsiteBackupInstance>& getOffsiteBackupInstances();
    bool offsiteBackupInstancesIsSet() const;
    void unsetoffsiteBackupInstances();
    void setOffsiteBackupInstances(const std::vector<OffsiteBackupInstance>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<OffsiteBackupInstance> offsiteBackupInstances_;
    bool offsiteBackupInstancesIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteInstancesResponse_H_
