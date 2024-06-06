
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListRecycleInstancesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListRecycleInstancesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RecycleInstanceV3.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListRecycleInstancesResponse
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
    /// 数据总数
    /// </summary>

    std::string getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(const std::string& value);

    /// <summary>
    /// 回收站实例信息
    /// </summary>

    std::vector<RecycleInstanceV3>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<RecycleInstanceV3>& value);


protected:
    std::string totalCount_;
    bool totalCountIsSet_;
    std::vector<RecycleInstanceV3> instances_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListRecycleInstancesResponse_H_
