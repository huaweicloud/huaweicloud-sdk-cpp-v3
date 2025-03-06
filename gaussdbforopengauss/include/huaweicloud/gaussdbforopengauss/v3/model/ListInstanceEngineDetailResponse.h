
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceEngineDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceEngineDetailResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/InstanceEngineDetail.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListInstanceEngineDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceEngineDetailResponse();
    virtual ~ListInstanceEngineDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceEngineDetailResponse members

    /// <summary>
    /// 引擎版本和相应的实例详情。
    /// </summary>

    std::vector<InstanceEngineDetail>& getEngineInstanceDetails();
    bool engineInstanceDetailsIsSet() const;
    void unsetengineInstanceDetails();
    void setEngineInstanceDetails(const std::vector<InstanceEngineDetail>& value);

    /// <summary>
    /// 引擎版本数量。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<InstanceEngineDetail> engineInstanceDetails_;
    bool engineInstanceDetailsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceEngineDetailResponse_H_
