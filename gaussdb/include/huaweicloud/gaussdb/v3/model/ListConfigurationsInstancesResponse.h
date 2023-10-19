
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsInstancesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsInstancesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/ApplicableInstances.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListConfigurationsInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConfigurationsInstancesResponse();
    virtual ~ListConfigurationsInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConfigurationsInstancesResponse members

    /// <summary>
    /// 可以应用的实例列表。
    /// </summary>

    std::vector<ApplicableInstances>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<ApplicableInstances>& value);

    /// <summary>
    /// 可应用的实例列表数量。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ApplicableInstances> instances_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsInstancesResponse_H_
