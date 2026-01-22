
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceSetsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceSetsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/BatchDeleteServiceSetsResp_data.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  BatchDeleteServiceSetsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteServiceSetsResponse();
    virtual ~BatchDeleteServiceSetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteServiceSetsResponse members

    /// <summary>
    /// **参数解释**： 服务组信息 **取值范围**： 不涉及
    /// </summary>

    std::vector<BatchDeleteServiceSetsResp_data>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<BatchDeleteServiceSetsResp_data>& value);


protected:
    std::vector<BatchDeleteServiceSetsResp_data> data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceSetsResponse_H_
