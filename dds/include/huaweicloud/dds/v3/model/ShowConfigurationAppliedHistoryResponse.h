
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConfigurationAppliedHistoryResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConfigurationAppliedHistoryResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/dds/v3/model/ApplyHistoryInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowConfigurationAppliedHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowConfigurationAppliedHistoryResponse();
    virtual ~ShowConfigurationAppliedHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowConfigurationAppliedHistoryResponse members

    /// <summary>
    /// 参数模板应用历史列表
    /// </summary>

    std::vector<ApplyHistoryInfo>& getHistories();
    bool historiesIsSet() const;
    void unsethistories();
    void setHistories(const std::vector<ApplyHistoryInfo>& value);


protected:
    std::vector<ApplyHistoryInfo> histories_;
    bool historiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConfigurationAppliedHistoryResponse_H_
