
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesRequestBody_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesRequestBody_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/FlowSource.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改入流信息请求体
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyFlowSourcesRequestBody
    : public ModelBase
{
public:
    ModifyFlowSourcesRequestBody();
    virtual ~ModifyFlowSourcesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyFlowSourcesRequestBody members

    /// <summary>
    /// 
    /// </summary>

    FlowSource getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const FlowSource& value);


protected:
    FlowSource source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowSourcesRequestBody_H_
