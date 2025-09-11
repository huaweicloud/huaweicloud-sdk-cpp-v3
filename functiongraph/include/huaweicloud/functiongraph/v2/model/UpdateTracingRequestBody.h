
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateTracingRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateTracingRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新函数调用链请求体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateTracingRequestBody
    : public ModelBase
{
public:
    UpdateTracingRequestBody();
    virtual ~UpdateTracingRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTracingRequestBody members

    /// <summary>
    /// apm的ak
    /// </summary>

    std::string getTracingAk() const;
    bool tracingAkIsSet() const;
    void unsettracingAk();
    void setTracingAk(const std::string& value);

    /// <summary>
    /// apm的sk
    /// </summary>

    std::string getTracingSk() const;
    bool tracingSkIsSet() const;
    void unsettracingSk();
    void setTracingSk(const std::string& value);


protected:
    std::string tracingAk_;
    bool tracingAkIsSet_;
    std::string tracingSk_;
    bool tracingSkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateTracingRequestBody_H_
