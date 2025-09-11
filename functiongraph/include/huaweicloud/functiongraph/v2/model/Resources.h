
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Resources_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Resources_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  Resources
    : public ModelBase
{
public:
    Resources();
    virtual ~Resources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Resources members

    /// <summary>
    /// 函数配额限制。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// 已使用的配额。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 资源类型。 fgs_func_scale_down_timeout：v1版本函数的实例闲置释放时间 fgs_func_occurs：v1版本函数为实例数配额, v2版本函数为预留实例配额 fgs_func_pat_idle_time：vpc函数的pat闲置释放时间 fgs_func_num：用户函数数量配额 fgs_func_code_size：用户函数总代码大小配额 fgs_workflow_num：用户函数流数量配额 fgs_on_demand_instance_limit：v2版本函数单函数最大实例数配额 fgs_func_qos_limit 用户函数实例数配额
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 资源的计数单位。fgs_func_code_size,单位为MB,其他场景无单位
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    int32_t quota_;
    bool quotaIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Resources_H_
