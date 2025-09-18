
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectFragmentV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectFragmentV2_H_


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
/// start_offset和end_offset均为-1，表示该行不是缺陷片段或者整行都是，需要结合DefectInfoV2中的line_number属性一起判断哪一行是具体的缺陷片段。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  DefectFragmentV2
    : public ModelBase
{
public:
    DefectFragmentV2();
    virtual ~DefectFragmentV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefectFragmentV2 members

    /// <summary>
    /// 行号
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// 该行代码内容
    /// </summary>

    std::string getLineContent() const;
    bool lineContentIsSet() const;
    void unsetlineContent();
    void setLineContent(const std::string& value);

    /// <summary>
    /// 缺陷开始列号
    /// </summary>

    int32_t getStartOffset() const;
    bool startOffsetIsSet() const;
    void unsetstartOffset();
    void setStartOffset(int32_t value);

    /// <summary>
    /// 缺陷结束列号
    /// </summary>

    int32_t getEndOffset() const;
    bool endOffsetIsSet() const;
    void unsetendOffset();
    void setEndOffset(int32_t value);


protected:
    std::string lineNum_;
    bool lineNumIsSet_;
    std::string lineContent_;
    bool lineContentIsSet_;
    int32_t startOffset_;
    bool startOffsetIsSet_;
    int32_t endOffset_;
    bool endOffsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectFragmentV2_H_
