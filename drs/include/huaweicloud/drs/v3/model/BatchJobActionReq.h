
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchJobActionReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchJobActionReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务动作请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchJobActionReq
    : public ModelBase
{
public:
    BatchJobActionReq();
    virtual ~BatchJobActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchJobActionReq members

    /// <summary>
    /// 执行操作
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 任务ID（集群模式 取父任务的任务id）
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 操作对应的参数（API参考文档-批量测试连接-集群模式-property字段数据结构说明）[字段说明参考](https://support.huaweicloud.com/api-drs/zh-cn_topic_0295171516.html)
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string property_;
    bool propertyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchJobActionReq_H_
