
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateResponse_result_project_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateResponse_result_project_H_


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
/// **参数解释：** 项目。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchUpdateResponse_result_project
    : public ModelBase
{
public:
    BatchUpdateResponse_result_project();
    virtual ~BatchUpdateResponse_result_project();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateResponse_result_project members

    /// <summary>
    /// **参数解释：** 项目数字id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 项目uuid。 **取值范围：** 不涉及。
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// **参数解释：** 批量编辑工作项的总数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释：** 项目是否关闭。 **取值范围：** 0（打开） 1（关闭）
    /// </summary>

    int32_t getClose() const;
    bool closeIsSet() const;
    void unsetclose();
    void setClose(int32_t value);

    /// <summary>
    /// **参数解释：** 批量编辑数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项类型。 **取值范围：** scrum。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项是否归档。 **取值范围：** true(归档) false(未归档)
    /// </summary>

    bool isArchive() const;
    bool archiveIsSet() const;
    void unsetarchive();
    void setArchive(bool value);

    /// <summary>
    /// **参数解释：** 项目数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getMemCount() const;
    bool memCountIsSet() const;
    void unsetmemCount();
    void setMemCount(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string identifier_;
    bool identifierIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int32_t close_;
    bool closeIsSet_;
    int32_t role_;
    bool roleIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool archive_;
    bool archiveIsSet_;
    int32_t memCount_;
    bool memCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateResponse_result_project_H_
