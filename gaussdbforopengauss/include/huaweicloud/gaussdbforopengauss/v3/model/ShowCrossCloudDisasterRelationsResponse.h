
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterRelationsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterRelationsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/DisasterRelations.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowCrossCloudDisasterRelationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCrossCloudDisasterRelationsResponse();
    virtual ~ShowCrossCloudDisasterRelationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCrossCloudDisasterRelationsResponse members

    /// <summary>
    /// 查询结果总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 容灾关系详情。
    /// </summary>

    std::vector<DisasterRelations>& getRelations();
    bool relationsIsSet() const;
    void unsetrelations();
    void setRelations(const std::vector<DisasterRelations>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<DisasterRelations> relations_;
    bool relationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterRelationsResponse_H_
