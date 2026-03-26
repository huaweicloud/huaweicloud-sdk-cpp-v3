
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceBackupsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceBackupsRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowInstanceBackupsRequest
    : public ModelBase
{
public:
    ShowInstanceBackupsRequest();
    virtual ~ShowInstanceBackupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceBackupsRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us - zh-cn  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  获取方法请参见[查询实例列表](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlInstancesUnifyStatus.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：    索引位置，偏移量。从第一条数据偏移offset条数据后开始查询。    **约束限制**：    必须为整数，不能为负数。    **取值范围**：    ≥0。  **默认取值**：    0。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// **参数解释**：  查询记录数。  **约束限制**：  必须为整数，不能为负数。  **取值范围**：  1-100。  **默认取值**：  100。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// **参数解释**:  根据指定字段排序。  **约束限制**:  不涉及。  **取值范围**:  - name：备份名称。 - beginTime：备份开启时间。 - type：备份类型。  **默认取值**: 不涉及。
    /// </summary>

    std::string getOrderField() const;
    bool orderFieldIsSet() const;
    void unsetorderField();
    void setOrderField(const std::string& value);

    /// <summary>
    /// **参数解释**: 排序规则。  **约束限制**: 不涉及。  **取值范围**: - asc：升序。 - desc：降序。  **默认取值**: 不涉及。
    /// </summary>

    std::string getOrderRule() const;
    bool orderRuleIsSet() const;
    void unsetorderRule();
    void setOrderRule(const std::string& value);

    /// <summary>
    /// **参数解释**: 过滤字段类型。 **约束限制**: 不涉及。 **取值范围**: name：根据备份名称进行过滤。 **默认取值**: 不涉及。
    /// </summary>

    std::string getFilterField() const;
    bool filterFieldIsSet() const;
    void unsetfilterField();
    void setFilterField(const std::string& value);

    /// <summary>
    /// **参数解释**: 过滤内容。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getFilterContent() const;
    bool filterContentIsSet() const;
    void unsetfilterContent();
    void setFilterContent(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string orderField_;
    bool orderFieldIsSet_;
    std::string orderRule_;
    bool orderRuleIsSet_;
    std::string filterField_;
    bool filterFieldIsSet_;
    std::string filterContent_;
    bool filterContentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowInstanceBackupsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowInstanceBackupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceBackupsRequest_H_
