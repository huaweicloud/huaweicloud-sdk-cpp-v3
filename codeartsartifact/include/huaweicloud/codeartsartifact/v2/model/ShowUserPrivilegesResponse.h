
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowUserPrivilegesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowUserPrivilegesResponse_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsartifact/v2/model/PrivilegesResponse_result.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowUserPrivilegesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserPrivilegesResponse();
    virtual ~ShowUserPrivilegesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserPrivilegesResponse members

    /// <summary>
    /// **参数解释**:  请求成功、失败状态。 **取值范围**: success: 请求成功。 error: 请求失败。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**:  请求id，当前请求唯一标识。 **取值范围**: 数字及中划线(-)组成的字符串。 
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrivilegesResponse_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const PrivilegesResponse_result& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    PrivilegesResponse_result result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowUserPrivilegesResponse_H_
