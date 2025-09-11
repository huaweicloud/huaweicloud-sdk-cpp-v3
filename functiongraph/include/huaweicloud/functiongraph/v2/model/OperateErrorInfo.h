
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OperateErrorInfo_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OperateErrorInfo_H_


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
/// 批量执行错误信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  OperateErrorInfo
    : public ModelBase
{
public:
    OperateErrorInfo();
    virtual ~OperateErrorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateErrorInfo members

    /// <summary>
    /// 唯一标识ID，流程URN
    /// </summary>

    std::string getWorkflowUrn() const;
    bool workflowUrnIsSet() const;
    void unsetworkflowUrn();
    void setWorkflowUrn(const std::string& value);

    /// <summary>
    /// 错误详情
    /// </summary>

    std::string getErrorDetail() const;
    bool errorDetailIsSet() const;
    void unseterrorDetail();
    void setErrorDetail(const std::string& value);


protected:
    std::string workflowUrn_;
    bool workflowUrnIsSet_;
    std::string errorDetail_;
    bool errorDetailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OperateErrorInfo_H_
