
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRecycleInstancesDetailsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRecycleInstancesDetailsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/RecycleInstancesDetailResultV1.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListRecycleInstancesDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRecycleInstancesDetailsResponse();
    virtual ~ListRecycleInstancesDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecycleInstancesDetailsResponse members

    /// <summary>
    /// 回收站所有引擎实例总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 回收站所有引擎实例信息。
    /// </summary>

    std::vector<RecycleInstancesDetailResultV1>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<RecycleInstancesDetailResultV1>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<RecycleInstancesDetailResultV1> instances_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRecycleInstancesDetailsResponse_H_
