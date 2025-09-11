
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_SyncExecutionNodeErrorDetail_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_SyncExecutionNodeErrorDetail_H_


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
/// 函数流节点错误信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  SyncExecutionNodeErrorDetail
    : public ModelBase
{
public:
    SyncExecutionNodeErrorDetail();
    virtual ~SyncExecutionNodeErrorDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SyncExecutionNodeErrorDetail members

    /// <summary>
    /// 流程节点ID
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 错误详细信息
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);

    /// <summary>
    /// 流程实例创建时间，格式：yyyy-MM-ddTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 流程实例结束时间，格式：yyyy-MM-ddTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_SyncExecutionNodeErrorDetail_H_
