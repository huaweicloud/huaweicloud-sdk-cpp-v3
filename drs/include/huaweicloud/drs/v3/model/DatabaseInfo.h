
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库对象选择信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DatabaseInfo
    : public ModelBase
{
public:
    DatabaseInfo();
    virtual ~DatabaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseInfo members

    /// <summary>
    /// **参数解释**：  数据库对象的标识，具体含义取决于object_type的取值。object_type为database时，为库名；object_type为table或view时，字段值参考请求示例。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库对象的父级标识，object_type为table或view时需要填写，为库名。  **约束限制**：  - object_type为table或view时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库对象的类型，用于标识迁移或同步对象是数据库、表、模式还是视图。  **约束限制**：  不涉及。  **取值范围**：  - database：数据库 - table：表 - schema：模式 - view：视图  **默认取值**：  不涉及
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库对象名称，可以是库名、表名或视图名。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getObjectName() const;
    bool objectNameIsSet() const;
    void unsetobjectName();
    void setObjectName(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库对象的别名，即映射后的新名称。  **约束限制**：  - 仅支持同步任务使用。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getObjectAliasName() const;
    bool objectAliasNameIsSet() const;
    void unsetobjectAliasName();
    void setObjectAliasName(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否选中该数据库对象进行迁移，用于控制对象级别的迁移选择。  **约束限制**：  不涉及。  **取值范围**：  - true：选中，该数据库对象会进行迁移 - false：不选中，该数据库对象不会迁移 - partial：部分选择，迁移库下面的部分表  **默认取值**：  false
    /// </summary>

    std::string getSelect() const;
    bool selectIsSet() const;
    void unsetselect();
    void setSelect(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string objectName_;
    bool objectNameIsSet_;
    std::string objectAliasName_;
    bool objectAliasNameIsSet_;
    std::string select_;
    bool selectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseInfo_H_
