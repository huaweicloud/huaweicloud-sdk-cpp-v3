
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StepInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StepInfo_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子步骤信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  StepInfo
    : public ModelBase
{
public:
    StepInfo();
    virtual ~StepInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StepInfo members

    /// <summary>
    /// 请求的region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 应用id
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// 偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 是否启用
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 步骤名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 当前偏移量
    /// </summary>

    int32_t getCurrentOffset() const;
    bool currentOffsetIsSet() const;
    void unsetcurrentOffset();
    void setCurrentOffset(int32_t value);

    /// <summary>
    /// 任务执行时长
    /// </summary>

    int64_t getElapsedTime() const;
    bool elapsedTimeIsSet() const;
    void unsetelapsedTime();
    void setElapsedTime(int64_t value);

    /// <summary>
    /// 常见问题
    /// </summary>

    std::string getFaqUrl() const;
    bool faqUrlIsSet() const;
    void unsetfaqUrl();
    void setFaqUrl(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    int64_t id_;
    bool idIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t currentOffset_;
    bool currentOffsetIsSet_;
    int64_t elapsedTime_;
    bool elapsedTimeIsSet_;
    std::string faqUrl_;
    bool faqUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StepInfo_H_
