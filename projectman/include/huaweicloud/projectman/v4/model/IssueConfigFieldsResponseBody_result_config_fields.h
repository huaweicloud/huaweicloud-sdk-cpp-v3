
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueConfigFieldsResponseBody_result_config_fields_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueConfigFieldsResponseBody_result_config_fields_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueConfigFieldsResponseBody_result_config_fields
    : public ModelBase
{
public:
    IssueConfigFieldsResponseBody_result_config_fields();
    virtual ~IssueConfigFieldsResponseBody_result_config_fields();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueConfigFieldsResponseBody_result_config_fields members

    /// <summary>
    /// 查询结果
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 是否显示
    /// </summary>

    bool isShow() const;
    bool showIsSet() const;
    void unsetshow();
    void setShow(bool value);

    /// <summary>
    /// 是否可编辑
    /// </summary>

    bool isShowEditable() const;
    bool showEditableIsSet() const;
    void unsetshowEditable();
    void setShowEditable(bool value);

    /// <summary>
    /// 是否必填
    /// </summary>

    bool isOptional() const;
    bool optionalIsSet() const;
    void unsetoptional();
    void setOptional(bool value);

    /// <summary>
    /// 是否受控
    /// </summary>

    bool isControlled() const;
    bool controlledIsSet() const;
    void unsetcontrolled();
    void setControlled(bool value);

    /// <summary>
    /// 可编辑的角色
    /// </summary>

    std::vector<std::string>& getIssueRoles();
    bool issueRolesIsSet() const;
    void unsetissueRoles();
    void setIssueRoles(const std::vector<std::string>& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;
    bool show_;
    bool showIsSet_;
    bool showEditable_;
    bool showEditableIsSet_;
    bool optional_;
    bool optionalIsSet_;
    bool controlled_;
    bool controlledIsSet_;
    std::vector<std::string> issueRoles_;
    bool issueRolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueConfigFieldsResponseBody_result_config_fields_H_
