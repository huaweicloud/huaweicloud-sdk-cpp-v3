
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentExtendAttribute_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentExtendAttribute_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UserVO.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CommentExtendAttribute
    : public ModelBase
{
public:
    CommentExtendAttribute();
    virtual ~CommentExtendAttribute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentExtendAttribute members

    /// <summary>
    /// 
    /// </summary>

    UserVO getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const UserVO& value);

    /// <summary>
    /// 操作人Id
    /// </summary>

    std::string getOperatorId() const;
    bool operatorIdIsSet() const;
    void unsetoperatorId();
    void setOperatorId(const std::string& value);

    /// <summary>
    /// 系统生成评论时执行的动作
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 系统生成评论时执行的动作(英文)
    /// </summary>

    std::string getActionUs() const;
    bool actionUsIsSet() const;
    void unsetactionUs();
    void setActionUs(const std::string& value);

    /// <summary>
    /// 系统生成评论对应的对象类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 工作项流转前的状态Code
    /// </summary>

    std::string getPreStatusCode() const;
    bool preStatusCodeIsSet() const;
    void unsetpreStatusCode();
    void setPreStatusCode(const std::string& value);

    /// <summary>
    /// 工作项流转后的状态Code
    /// </summary>

    std::string getNewStatusCode() const;
    bool newStatusCodeIsSet() const;
    void unsetnewStatusCode();
    void setNewStatusCode(const std::string& value);

    /// <summary>
    /// 对象类型根据field_type_id值变化而变化。 field_type_id&#x3D;10001时，为StatusVO field_type_id&#x3D;10007、10008时，为字符串 field_type_id&#x3D;10003、10004时，为日期时间 field_type_id&#x3D;10005、10006时，为数字
    /// </summary>

    Object getPreStatus() const;
    bool preStatusIsSet() const;
    void unsetpreStatus();
    void setPreStatus(const Object& value);

    /// <summary>
    /// 对象类型根据field_type_id值变化而变化。 field_type_id&#x3D;10001、10002时，为StatusVO field_type_id&#x3D;10007、10008时，为字符串 field_type_id&#x3D;10003、10004时，为日期时间 field_type_id&#x3D;10005、10006时，为数字 field_type_id&#x3D;10009、10010时，为UserVO
    /// </summary>

    Object getNewStatus() const;
    bool newStatusIsSet() const;
    void unsetnewStatus();
    void setNewStatus(const Object& value);

    /// <summary>
    /// 字段类型
    /// </summary>

    std::string getFieldType() const;
    bool fieldTypeIsSet() const;
    void unsetfieldType();
    void setFieldType(const std::string& value);

    /// <summary>
    /// 字段类型对应的Id
    /// </summary>

    std::string getFieldTypeId() const;
    bool fieldTypeIdIsSet() const;
    void unsetfieldTypeId();
    void setFieldTypeId(const std::string& value);

    /// <summary>
    /// 字段显示名
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);


protected:
    UserVO operator_;
    bool operatorIsSet_;
    std::string operatorId_;
    bool operatorIdIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string actionUs_;
    bool actionUsIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string preStatusCode_;
    bool preStatusCodeIsSet_;
    std::string newStatusCode_;
    bool newStatusCodeIsSet_;
    Object preStatus_;
    bool preStatusIsSet_;
    Object newStatus_;
    bool newStatusIsSet_;
    std::string fieldType_;
    bool fieldTypeIsSet_;
    std::string fieldTypeId_;
    bool fieldTypeIdIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentExtendAttribute_H_
