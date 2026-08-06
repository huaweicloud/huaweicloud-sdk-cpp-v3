
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateHostGroupRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateHostGroupRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/HostGroupTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新主机组请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateHostGroupRequestBody
    : public ModelBase
{
public:
    UpdateHostGroupRequestBody();
    virtual ~UpdateHostGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHostGroupRequestBody members

    /// <summary>
    /// 主机组ID
    /// </summary>

    std::string getHostGroupId() const;
    bool hostGroupIdIsSet() const;
    void unsethostGroupId();
    void setHostGroupId(const std::string& value);

    /// <summary>
    /// 主机组名称
    /// </summary>

    std::string getHostGroupName() const;
    bool hostGroupNameIsSet() const;
    void unsethostGroupName();
    void setHostGroupName(const std::string& value);

    /// <summary>
    /// 主机ID列表。主机类型必须与主机组类型一致
    /// </summary>

    std::vector<std::string>& getHostIdList();
    bool hostIdListIsSet() const;
    void unsethostIdList();
    void setHostIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 主机组标签。KEY不能重复
    /// </summary>

    std::vector<HostGroupTag>& getHostGroupTag();
    bool hostGroupTagIsSet() const;
    void unsethostGroupTag();
    void setHostGroupTag(const std::vector<HostGroupTag>& value);

    /// <summary>
    /// **参数解释：** 主机组类型。支持两种主机组类型，分别为IP类型和LABEL类型。 **约束限制：** 不涉及 **取值范围：** - IP - LABEL **默认取值：** IP。
    /// </summary>

    std::string getAgentAccessType() const;
    bool agentAccessTypeIsSet() const;
    void unsetagentAccessType();
    void setAgentAccessType(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义标识。主机组类型为LABEL类型，该字段必填。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);


protected:
    std::string hostGroupId_;
    bool hostGroupIdIsSet_;
    std::string hostGroupName_;
    bool hostGroupNameIsSet_;
    std::vector<std::string> hostIdList_;
    bool hostIdListIsSet_;
    std::vector<HostGroupTag> hostGroupTag_;
    bool hostGroupTagIsSet_;
    std::string agentAccessType_;
    bool agentAccessTypeIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateHostGroupRequestBody_H_
