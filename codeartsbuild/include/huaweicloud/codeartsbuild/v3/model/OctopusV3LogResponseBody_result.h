
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_OctopusV3LogResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_OctopusV3LogResponseBody_result_H_


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
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  OctopusV3LogResponseBody_result
    : public ModelBase
{
public:
    OctopusV3LogResponseBody_result();
    virtual ~OctopusV3LogResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OctopusV3LogResponseBody_result members

    /// <summary>
    /// **参数解释**： 是否还有剩余日志标识。 **约束限制**： 不涉及。 **取值范围**： true或false。 **默认取值**： 不涉及。
    /// </summary>

    bool isHasMore() const;
    bool hasMoreIsSet() const;
    void unsethasMore();
    void setHasMore(bool value);

    /// <summary>
    /// **参数解释**： 日志查询起始偏移量。 **约束限制**： 不涉及。 **取值范围**： 数字组成。 **默认取值**： 不涉及。
    /// </summary>

    std::string getStartOffset() const;
    bool startOffsetIsSet() const;
    void unsetstartOffset();
    void setStartOffset(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志查询结束偏移量。 **约束限制**： 不涉及。 **取值范围**： 数字组成。 **默认取值**： 不涉及。
    /// </summary>

    std::string getEndOffset() const;
    bool endOffsetIsSet() const;
    void unsetendOffset();
    void setEndOffset(const std::string& value);

    /// <summary>
    /// **参数解释**： 返回日志内容，可能会空，请再次请求。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getLog() const;
    bool logIsSet() const;
    void unsetlog();
    void setLog(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志来源。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);


protected:
    bool hasMore_;
    bool hasMoreIsSet_;
    std::string startOffset_;
    bool startOffsetIsSet_;
    std::string endOffset_;
    bool endOffsetIsSet_;
    std::string log_;
    bool logIsSet_;
    std::string location_;
    bool locationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_OctopusV3LogResponseBody_result_H_
