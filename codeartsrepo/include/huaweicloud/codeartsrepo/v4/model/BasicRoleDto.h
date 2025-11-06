
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BasicRoleDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BasicRoleDto_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BasicRoleDto
    : public ModelBase
{
public:
    BasicRoleDto();
    virtual ~BasicRoleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasicRoleDto members

    /// <summary>
    /// **参数解释：** 角色ID。 **取值范围：** 1-2147483647
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 角色名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：**  关联角色ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRelatedRoleId() const;
    bool relatedRoleIdIsSet() const;
    void unsetrelatedRoleId();
    void setRelatedRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色中文名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getChineseName() const;
    bool chineseNameIsSet() const;
    void unsetchineseName();
    void setChineseName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string relatedRoleId_;
    bool relatedRoleIdIsSet_;
    std::string chineseName_;
    bool chineseNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BasicRoleDto_H_
