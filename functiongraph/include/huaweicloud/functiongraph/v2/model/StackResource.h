
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StackResource_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StackResource_H_


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
/// 资源栈
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  StackResource
    : public ModelBase
{
public:
    StackResource();
    virtual ~StackResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StackResource members

    /// <summary>
    /// 物理资源id
    /// </summary>

    std::string getPhysicalResourceId() const;
    bool physicalResourceIdIsSet() const;
    void unsetphysicalResourceId();
    void setPhysicalResourceId(const std::string& value);

    /// <summary>
    /// 物理资源名称
    /// </summary>

    std::string getPhysicalResourceName() const;
    bool physicalResourceNameIsSet() const;
    void unsetphysicalResourceName();
    void setPhysicalResourceName(const std::string& value);

    /// <summary>
    /// 逻辑资源名称
    /// </summary>

    std::string getLogicalResourceName() const;
    bool logicalResourceNameIsSet() const;
    void unsetlogicalResourceName();
    void setLogicalResourceName(const std::string& value);

    /// <summary>
    /// 逻辑资源类型
    /// </summary>

    std::string getLogicalResourceType() const;
    bool logicalResourceTypeIsSet() const;
    void unsetlogicalResourceType();
    void setLogicalResourceType(const std::string& value);

    /// <summary>
    /// 资源状态
    /// </summary>

    std::string getResourceStatus() const;
    bool resourceStatusIsSet() const;
    void unsetresourceStatus();
    void setResourceStatus(const std::string& value);

    /// <summary>
    /// 状态信息
    /// </summary>

    std::string getStatusMessage() const;
    bool statusMessageIsSet() const;
    void unsetstatusMessage();
    void setStatusMessage(const std::string& value);

    /// <summary>
    /// 超链接地址
    /// </summary>

    std::string getHref() const;
    bool hrefIsSet() const;
    void unsethref();
    void setHref(const std::string& value);

    /// <summary>
    /// 云服务名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);


protected:
    std::string physicalResourceId_;
    bool physicalResourceIdIsSet_;
    std::string physicalResourceName_;
    bool physicalResourceNameIsSet_;
    std::string logicalResourceName_;
    bool logicalResourceNameIsSet_;
    std::string logicalResourceType_;
    bool logicalResourceTypeIsSet_;
    std::string resourceStatus_;
    bool resourceStatusIsSet_;
    std::string statusMessage_;
    bool statusMessageIsSet_;
    std::string href_;
    bool hrefIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StackResource_H_
