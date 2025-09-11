
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListEcsSpecificationNewResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListEcsSpecificationNewResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/EcsSpecificationBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListEcsSpecificationNewResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEcsSpecificationNewResponse();
    virtual ~ListEcsSpecificationNewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEcsSpecificationNewResponse members

    /// <summary>
    /// ecs规格集合
    /// </summary>

    std::vector<EcsSpecificationBean>& getSpecification();
    bool specificationIsSet() const;
    void unsetspecification();
    void setSpecification(const std::vector<EcsSpecificationBean>& value);


protected:
    std::vector<EcsSpecificationBean> specification_;
    bool specificationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListEcsSpecificationNewResponse_H_
