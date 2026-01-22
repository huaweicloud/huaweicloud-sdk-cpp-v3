
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitCountRecords_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitCountRecords_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/RuleHitCountObject.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 规则击中次数记录
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleHitCountRecords
    : public ModelBase
{
public:
    RuleHitCountRecords();
    virtual ~RuleHitCountRecords();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleHitCountRecords members

    /// <summary>
    /// **参数解释**： 每页显示个数 **取值范围**： 1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 偏移量：指定返回记录的开始位置，必须为数字 **取值范围**： 大于或等于0，默认0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 获取规则击中次数总条数 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 规则击中次数信息列表 **约束限制**： 不涉及
    /// </summary>

    std::vector<RuleHitCountObject>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<RuleHitCountObject>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::vector<RuleHitCountObject> records_;
    bool recordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitCountRecords_H_
