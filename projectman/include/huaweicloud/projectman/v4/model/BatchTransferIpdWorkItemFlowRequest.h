
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchTransferIpdWorkItemFlowRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchTransferIpdWorkItemFlowRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/WorkItemFlowVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchTransferIpdWorkItemFlowRequest
    : public ModelBase
{
public:
    BatchTransferIpdWorkItemFlowRequest();
    virtual ~BatchTransferIpdWorkItemFlowRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchTransferIpdWorkItemFlowRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否覆盖对应字段。 **约束限制**： 不涉及 **取值范围**： true:本开关开启时，当前弹窗的相应字段值将覆盖全部所选工作项的对应字段值。 false:本开关关闭时，除「当前责任人」之外，所选工作项的对应字段如果已经有值，将保持原状，不会被当前弹窗的相应字段值覆盖。 **默认取值**： false。
    /// </summary>

    bool isIsRecover() const;
    bool isRecoverIsSet() const;
    void unsetisRecover();
    void setIsRecover(bool value);

    /// <summary>
    /// 
    /// </summary>

    WorkItemFlowVO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WorkItemFlowVO& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    bool isRecover_;
    bool isRecoverIsSet_;
    WorkItemFlowVO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchTransferIpdWorkItemFlowRequest& dereference_from_shared_ptr(std::shared_ptr<BatchTransferIpdWorkItemFlowRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchTransferIpdWorkItemFlowRequest_H_
