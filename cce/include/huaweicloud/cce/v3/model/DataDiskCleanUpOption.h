
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DataDiskCleanUpOption_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DataDiskCleanUpOption_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DataDiskCleanUpOption
    : public ModelBase
{
public:
    DataDiskCleanUpOption();
    virtual ~DataDiskCleanUpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataDiskCleanUpOption members

    /// <summary>
    /// **参数解释：** 该参数用于控制腾挪节点时，是否擦除节点的除系统盘外的数据盘。 **约束限制：** 不涉及 **取值范围：** - false：腾挪节点时，不擦除节点的除系统盘外的数据盘。           - true：腾挪节点时，擦除节点的除系统盘外的数据盘。  **默认取值：** false
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释：** 该参数用于控制腾挪节点时，擦除节点的数据盘失败时的处理策略。 **约束限制：** 不涉及 **取值范围：** - ignore：表示清理数据盘失败时忽略错误，继续执行。 - abort：表示清理数据盘失败时立即停止，并向上报错。  **默认取值：** ignore
    /// </summary>

    std::string getOnFailure() const;
    bool onFailureIsSet() const;
    void unsetonFailure();
    void setOnFailure(const std::string& value);


protected:
    bool enable_;
    bool enableIsSet_;
    std::string onFailure_;
    bool onFailureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DataDiskCleanUpOption_H_
