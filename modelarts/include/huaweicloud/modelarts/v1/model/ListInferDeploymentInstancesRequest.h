
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentInstancesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentInstancesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferDeploymentInstancesRequest
    : public ModelBase
{
public:
    ListInferDeploymentInstancesRequest();
    virtual ~ListInferDeploymentInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferDeploymentInstancesRequest members

    /// <summary>
    /// **参数解释：** 服务唯一id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务部署名字，可以为all
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例状态，一次支持多种状态筛选，多种状态以\&quot;,\&quot;连接，不能存在空格。默认不过滤。取值范围有4种RUNNING（运行中）、ERROR（错误）、INIT（初始化）、DELETED（已删除)。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 指定每一页返回的最大条目数。 **约束限制：** 不涉及。 **取值范围：** [1,500] **默认取值：** 10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 分页列表的起始页。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 0。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// **参数解释：** pod名字。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodName() const;
    bool podNameIsSet() const;
    void unsetpodName();
    void setPodName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string podName_;
    bool podNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInferDeploymentInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListInferDeploymentInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentInstancesRequest_H_
