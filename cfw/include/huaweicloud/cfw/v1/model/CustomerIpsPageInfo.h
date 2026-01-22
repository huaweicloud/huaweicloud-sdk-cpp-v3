
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CustomerIpsPageInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CustomerIpsPageInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/CustomerIpsListVO.h>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  CustomerIpsPageInfo
    : public ModelBase
{
public:
    CustomerIpsPageInfo();
    virtual ~CustomerIpsPageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomerIpsPageInfo members

    /// <summary>
    /// **参数解释**： 查询返回记录的数量限制 **约束限制**：   不涉及 **取值范围**： 1-1024 **默认取值**：   不涉及
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 偏移量，表示查询该偏移量后面的记录 **约束限制**：   不涉及 **取值范围**： 0 - 1024 **默认取值**：   不涉及
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 自定义IPS规则列表 **约束限制**：   不涉及 **取值范围**： 不涉及 **默认取值**：   不涉及
    /// </summary>

    std::vector<CustomerIpsListVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<CustomerIpsListVO>& value);

    /// <summary>
    /// **参数解释**： 自定义IPS规则数量 **约束限制**：   不涉及 **取值范围**： 不涉及 **默认取值**：   不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<CustomerIpsListVO> records_;
    bool recordsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CustomerIpsPageInfo_H_
