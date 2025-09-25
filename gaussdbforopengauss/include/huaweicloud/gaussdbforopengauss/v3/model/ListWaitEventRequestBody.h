
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWaitEventRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWaitEventRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/WaitEventQueryInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListWaitEventRequestBody
    : public ModelBase
{
public:
    ListWaitEventRequestBody();
    virtual ~ListWaitEventRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWaitEventRequestBody members

    /// <summary>
    /// **参数解释**: 节点ID，仅支持包含有CN或DN（主、备）组件的节点。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否查询系统用户。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    bool isSystem() const;
    bool systemIsSet() const;
    void unsetsystem();
    void setSystem(bool value);

    /// <summary>
    /// **参数解释**: 查询记录数。 **约束限制**: 不能为负数。 **取值范围**: [1，100]。 **默认取值**: 默认为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**: 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询。 **约束限制**: 必须为数字，不能为负数。 **取值范围**: 不涉及。 **默认取值**: 默认为0（偏移0条数据，表示从第一条数据开始查询）。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**: 排序字段列表，内部List&lt;String&gt;。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<std::vector<std::string>>& getOrderFields();
    bool orderFieldsIsSet() const;
    void unsetorderFields();
    void setOrderFields(const std::vector<std::vector<std::string>>& value);

    /// <summary>
    /// 
    /// </summary>

    WaitEventQueryInfo getWaitEventQueryInfo() const;
    bool waitEventQueryInfoIsSet() const;
    void unsetwaitEventQueryInfo();
    void setWaitEventQueryInfo(const WaitEventQueryInfo& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    bool system_;
    bool systemIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<std::vector<std::string>> orderFields_;
    bool orderFieldsIsSet_;
    WaitEventQueryInfo waitEventQueryInfo_;
    bool waitEventQueryInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWaitEventRequestBody_H_
