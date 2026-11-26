
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetOperationRecordsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetOperationRecordsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AssetOperationRecordRsp.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAssetOperationRecordsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetOperationRecordsResponse();
    virtual ~ListAssetOperationRecordsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetOperationRecordsResponse members

    /// <summary>
    /// **参数解释**：操作记录总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：模型操作记录。
    /// </summary>

    std::vector<AssetOperationRecordRsp>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<AssetOperationRecordRsp>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<AssetOperationRecordRsp> data_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetOperationRecordsResponse_H_
