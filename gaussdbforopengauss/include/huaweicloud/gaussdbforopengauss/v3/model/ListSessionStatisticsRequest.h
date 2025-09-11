
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionStatisticsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionStatisticsRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSessionStatisticsRequest
    : public ModelBase
{
public:
    ListSessionStatisticsRequest();
    virtual ~ListSessionStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSessionStatisticsRequest members

    /// <summary>
    /// **参数解释**: 语言。 **约束限制**: 不涉及。 **取值范围**:   - zh-cn   - en-us  **默认取值**: en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例ID，此参数是用户创建实例的唯一标识。 **约束限制**: 不涉及。 **取值范围**: 只能由英文字母、数字组成，且长度为36个字符。 **默认取值**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**  统计维度。 **约束限制**: 不涉及。 **取值范围** - usename：用户名。 - client_addr：访问来源。 - datname：数据库名。  **默认取值**: 不涉及。 
    /// </summary>

    std::string getDimension() const;
    bool dimensionIsSet() const;
    void unsetdimension();
    void setDimension(const std::string& value);

    /// <summary>
    /// **参数解释** 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询。 **约束限制**: 不涉及。 **取值范围** [0, 2^31-1] **默认取值** 默认为0（偏移0条数据，表示从第一条数据开始查询）。 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释** 查询记录数。 **约束限制**: 不涉及。 **取值范围** [1, 100] **默认取值** 默认为100。 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释** 实时会话统计排序字段。 **约束限制**: 不涉及。 **取值范围** - active_num：活跃会话数。 - total_num：总会话数。  **默认取值**: 不涉及。 
    /// </summary>

    std::string getOrderField() const;
    bool orderFieldIsSet() const;
    void unsetorderField();
    void setOrderField(const std::string& value);

    /// <summary>
    /// **参数解释** 实时会话统计排序方式。 **约束限制**: 不涉及。 **取值范围** - ASC：根据order_field值升序。 - DESC：根据order_field值降序。  **默认取值** ASC 
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string dimension_;
    bool dimensionIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string orderField_;
    bool orderFieldIsSet_;
    std::string order_;
    bool orderIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSessionStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSessionStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionStatisticsRequest_H_
