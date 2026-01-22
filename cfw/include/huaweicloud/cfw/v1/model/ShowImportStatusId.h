
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowImportStatusId_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowImportStatusId_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowImportStatusId
    : public ModelBase
{
public:
    ShowImportStatusId();
    virtual ~ShowImportStatusId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowImportStatusId members

    /// <summary>
    /// **参数解释**： 防护对象id **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则导入状态 **约束限制**： 不涉及 **取值范围**： 0: 无任务态 1: 任务等待 2: 任务执行 3: 任务成功 4: 任务失败 5: 任务部分成功 6: 任务全部失败 **默认取值**： 不涉及
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowImportStatusId_H_
