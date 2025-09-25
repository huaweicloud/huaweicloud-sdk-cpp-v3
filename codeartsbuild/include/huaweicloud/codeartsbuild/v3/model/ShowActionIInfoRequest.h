
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowActionIInfoRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowActionIInfoRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowActionIInfoRequest
    : public ModelBase
{
public:
    ShowActionIInfoRequest();
    virtual ~ShowActionIInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowActionIInfoRequest members

    /// <summary>
    /// 构建的任务ID； 编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建任务的构建编号，从1开始，每次构建递增1
    /// </summary>

    int32_t getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(int32_t value);

    /// <summary>
    /// **参数解释**： 起始偏移量，表示从此开始查询。 **约束限制**： 不涉及。 **取值范围**： 只能使用数字，大于等于0。
    /// </summary>

    int32_t getStartOffset() const;
    bool startOffsetIsSet() const;
    void unsetstartOffset();
    void setStartOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 结束偏移量，表示查询到此结束。 **约束限制**： 不涉及。 **取值范围**： 只能使用数字，大于等于0。
    /// </summary>

    int32_t getEndOffset() const;
    bool endOffsetIsSet() const;
    void unsetendOffset();
    void setEndOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 排序方式。 **约束限制**： 不涉及。 **取值范围**： AES|DESC。
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    int32_t startOffset_;
    bool startOffsetIsSet_;
    int32_t endOffset_;
    bool endOffsetIsSet_;
    std::string sort_;
    bool sortIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowActionIInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowActionIInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowActionIInfoRequest_H_
