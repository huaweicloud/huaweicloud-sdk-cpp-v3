
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Status_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Status_H_


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
/// 工作项状态
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  Status
    : public ModelBase
{
public:
    Status();
    virtual ~Status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Status members

    /// <summary>
    /// **参数解释：** 状态名称 **取值范围：** 新建 进行中 已解决 测试中 已关闭 已拒绝
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 状态id。 **取值范围：** 1（新建） 2（进行中） 3（已解决） 4（测试中） 5（ 已关闭） 6（已拒绝）
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Status_H_
