
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrInfosResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrInfosResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/InstanceDrInfo.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListDrInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDrInfosResponse();
    virtual ~ListDrInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDrInfosResponse members

    /// <summary>
    /// 总记录数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 实例容灾信息
    /// </summary>

    std::vector<InstanceDrInfo>& getInstanceDrInfos();
    bool instanceDrInfosIsSet() const;
    void unsetinstanceDrInfos();
    void setInstanceDrInfos(const std::vector<InstanceDrInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<InstanceDrInfo> instanceDrInfos_;
    bool instanceDrInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrInfosResponse_H_
