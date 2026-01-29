
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DomainVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DomainVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目空间对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DomainVO
    : public ModelBase
{
public:
    DomainVO();
    virtual ~DomainVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainVO members

    /// <summary>
    /// **参数解释：**  项目空间的唯一Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：**  项目空间名称。 **取值范围：**  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：**  项目空间名称。 **取值范围：**  不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：**  项目空间对应的32位UUId。 **取值范围：**  不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：**  项目空间的父项目空间Id，仅在项目群中使用。 **取值范围：**  不涉及。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释：**  项目空间类型。 **取值范围：**  -  Project：项目 - Group：项目群
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释：**  项目空间创建人Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释：**  项目空间对应的模型Id。 **取值范围：**  不涉及。 - 10001：系统设备类 - 10002：独立软件类 - 10003：自营软件/云服务类
    /// </summary>

    std::string getModelId() const;
    bool modelIdIsSet() const;
    void unsetmodelId();
    void setModelId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string modelId_;
    bool modelIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DomainVO_H_
