
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AssetDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAssetResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetResponse();
    virtual ~ListAssetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetResponse members

    /// <summary>
    /// **参数解释**：符合条件的资产总数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：树节点列表及关系。
    /// </summary>

    std::vector<AssetDetail>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<AssetDetail>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<AssetDetail> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetResponse_H_
