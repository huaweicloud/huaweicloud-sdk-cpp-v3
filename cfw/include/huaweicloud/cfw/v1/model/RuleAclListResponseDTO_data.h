
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAclListResponseDTO_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAclListResponseDTO_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/RuleAclListResponseDTO_data_records.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 查询规则列表返回值数据
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleAclListResponseDTO_data
    : public ModelBase
{
public:
    RuleAclListResponseDTO_data();
    virtual ~RuleAclListResponseDTO_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleAclListResponseDTO_data members

    /// <summary>
    /// **参数解释**： 偏移量：指定返回记录的开始位置 **取值范围**： 大于或等于0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 每页显示个数 **取值范围**： 1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 查询规则列表总条数 **取值范围**： 大于0
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，type为0时，object_id为互联网边界防护对象ID，type为1时，object_id为VPC边界防护对象ID，type可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得  **取值范围**：  32位UUID
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 顶部规则数量 **取值范围**： 不涉及
    /// </summary>

    int32_t getUpRulesCount() const;
    bool upRulesCountIsSet() const;
    void unsetupRulesCount();
    void setUpRulesCount(int32_t value);

    /// <summary>
    /// **参数解释**： 查询规则列表记录
    /// </summary>

    std::vector<RuleAclListResponseDTO_data_records>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<RuleAclListResponseDTO_data_records>& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t upRulesCount_;
    bool upRulesCountIsSet_;
    std::vector<RuleAclListResponseDTO_data_records> records_;
    bool recordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAclListResponseDTO_data_H_
