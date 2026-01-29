
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowApplicableInstancesRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowApplicableInstancesRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowApplicableInstancesRequest
    : public ModelBase
{
public:
    ShowApplicableInstancesRequest();
    virtual ~ShowApplicableInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowApplicableInstancesRequest members

    /// <summary>
    /// 参数模板id
    /// </summary>

    std::string getConfigId() const;
    bool configIdIsSet() const;
    void unsetconfigId();
    void setConfigId(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。  从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询）。  取值必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询个数上限值。   - 取值范围: 1~100。   - 不传该参数时，默认查询前100条信息。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 实例名称，支持模糊搜索。 **约束限制：** 不涉及。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例ID，支持模糊搜索。 **约束限制：** 不涉及。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string configId_;
    bool configIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowApplicableInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowApplicableInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowApplicableInstancesRequest_H_
