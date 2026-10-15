
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplaySupportSourceConfigResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplaySupportSourceConfigResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ReplaySourceConfigResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListReplaySupportSourceConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReplaySupportSourceConfigResponse();
    virtual ~ListReplaySupportSourceConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplaySupportSourceConfigResponse members

    /// <summary>
    /// 流量回放源数据配置信息
    /// </summary>

    std::vector<ReplaySourceConfigResp>& getConfigList();
    bool configListIsSet() const;
    void unsetconfigList();
    void setConfigList(const std::vector<ReplaySourceConfigResp>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ReplaySourceConfigResp> configList_;
    bool configListIsSet_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplaySupportSourceConfigResponse_H_
