
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupsInheritResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupsInheritResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowGroupsInheritResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGroupsInheritResponse();
    virtual ~ShowGroupsInheritResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupsInheritResponse members

    /// <summary>
    /// **参数解释：** 代码组id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源类型设置。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getSourceSetting() const;
    bool sourceSettingIsSet() const;
    void unsetsourceSetting();
    void setSourceSetting(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 向上继承是否可编辑。
    /// </summary>

    bool isUpwardInheritEditable() const;
    bool upwardInheritEditableIsSet() const;
    void unsetupwardInheritEditable();
    void setUpwardInheritEditable(bool value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string sourceSetting_;
    bool sourceSettingIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool upwardInheritEditable_;
    bool upwardInheritEditableIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupsInheritResponse_H_
