
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopIoTrafficsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopIoTrafficsRequest_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListTopIoTrafficsRequest
    : public ModelBase
{
public:
    ListTopIoTrafficsRequest();
    virtual ~ListTopIoTrafficsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopIoTrafficsRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 节点ID。节点应为CN或者非日志角色的DN节点，并且节点状态为正常。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 组件ID。组件应为CN或者非日志角色的DN组件。 DN：Data Node，和CN对应的概念。负责实际执行表数据的存储、查询操作。 CN：Coordinator Node，负责数据库系统元数据存储、查询任务的分解和部分执行，以及将DN中查询结果汇聚在一起。
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// 期望查询数据库进程下TOP IO线程数（默认值为20）。接口返回TOP IO线程与会话信息关联后的结果，数量最大不超过该值。
    /// </summary>

    int32_t getTopIoNum() const;
    bool topIoNumIsSet() const;
    void unsettopIoNum();
    void setTopIoNum(int32_t value);

    /// <summary>
    /// TOP IO排序条件
    /// </summary>

    std::string getSortCondition() const;
    bool sortConditionIsSet() const;
    void unsetsortCondition();
    void setSortCondition(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string componentId_;
    bool componentIdIsSet_;
    int32_t topIoNum_;
    bool topIoNumIsSet_;
    std::string sortCondition_;
    bool sortConditionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTopIoTrafficsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTopIoTrafficsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopIoTrafficsRequest_H_
