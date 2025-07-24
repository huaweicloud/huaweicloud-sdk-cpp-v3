
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlansRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlansRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowPlansRequest
    : public ModelBase
{
public:
    ShowPlansRequest();
    virtual ~ShowPlansRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPlansRequest members

    /// <summary>
    /// 项目id，项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 模糊查询使用(针对测试计划名称)
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 测试计划所处阶段（create,design,execute,report）
    /// </summary>

    std::string getCurrentStage() const;
    bool currentStageIsSet() const;
    void unsetcurrentStage();
    void setCurrentStage(const std::string& value);

    /// <summary>
    /// 页号，取值范围为1-20000
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，取值范围为1-200
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string currentStage_;
    bool currentStageIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPlansRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPlansRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlansRequest_H_
