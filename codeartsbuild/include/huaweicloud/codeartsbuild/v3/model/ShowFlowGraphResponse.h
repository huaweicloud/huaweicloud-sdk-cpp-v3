
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowFlowGraphResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowFlowGraphResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/FlowGraph2_result.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowFlowGraphResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFlowGraphResponse();
    virtual ~ShowFlowGraphResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFlowGraphResponse members

    /// <summary>
    /// 状态
    /// </summary>

    bool isSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(bool value);

    /// <summary>
    /// 消息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrCode() const;
    bool errCodeIsSet() const;
    void unseterrCode();
    void setErrCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FlowGraph2_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const FlowGraph2_result& value);


protected:
    bool success_;
    bool successIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string errCode_;
    bool errCodeIsSet_;
    FlowGraph2_result result_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowFlowGraphResponse_H_
