
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestCasesRequestBody
    : public ModelBase
{
public:
    ListTestCasesRequestBody();
    virtual ~ListTestCasesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestCasesRequestBody members

    /// <summary>
    /// 起始偏移量，表示从此偏移量开始查询，offset大于等于0，小于等于100000
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，最大支持200条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 用例测试执行方式ID
    /// </summary>

    int32_t getExecutionTypeId() const;
    bool executionTypeIdIsSet() const;
    void unsetexecutionTypeId();
    void setExecutionTypeId(int32_t value);

    /// <summary>
    /// 分支/测试计划ID，长度11-34位字符（字母和数字）。
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t executionTypeId_;
    bool executionTypeIdIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesRequestBody_H_
