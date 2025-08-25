
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAutopilotChartRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAutopilotChartRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DeleteAutopilotChartRequest
    : public ModelBase
{
public:
    DeleteAutopilotChartRequest();
    virtual ~DeleteAutopilotChartRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAutopilotChartRequest members

    /// <summary>
    /// 模板的ID
    /// </summary>

    std::string getChartId() const;
    bool chartIdIsSet() const;
    void unsetchartId();
    void setChartId(const std::string& value);


protected:
    std::string chartId_;
    bool chartIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAutopilotChartRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAutopilotChartRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAutopilotChartRequest_H_
