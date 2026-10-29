
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskInfoByIdRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskInfoByIdRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskInfoByIdRequest
    : public ModelBase
{
public:
    ShowTaskInfoByIdRequest();
    virtual ~ShowTaskInfoByIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskInfoByIdRequest members

    /// <summary>
    /// **参数解释：** 任务ID，即新建检查任务接口的返回值，每个代码检查任务及其下的分支任务、通过API创建的增量任务都有唯一的任务ID。即[[查询任务列表](https://support.huaweicloud.com/api-codecheck/ShowTasksList.html)](tag:hws)[[查询任务列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ShowTasksList.html)](tag:hws_hk)[查询任务列表](tag:hcs,hcs_sm)接口响应中的id字段。 **约束限制：** 不涉及。 **取值范围：** 长度为[1~32]个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求ID。 **约束限制：** 不涉及。 **取值范围：** 长度为[1~128]个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMergeId() const;
    bool mergeIdIsSet() const;
    void unsetmergeId();
    void setMergeId(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行记录ID，即每一次执行版本级或门禁级扫描的唯一ID。通过[[执行检查任务](https://support.huaweicloud.com/api-codecheck/RunTaskV2.html)](tag:hws)[[执行检查任务](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/RunTaskV2.html)](tag:hws_hk)[执行检查任务](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)接口的返回值可获取执行记录ID。 **约束限制：** 不涉及。 **取值范围：** 长度为[1~64]个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释：** 操作者。 **约束限制：** 不涉及。 **取值范围：** 长度为[1~128]个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string mergeId_;
    bool mergeIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string operator_;
    bool operatorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTaskInfoByIdRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTaskInfoByIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskInfoByIdRequest_H_
