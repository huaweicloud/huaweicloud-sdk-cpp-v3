
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGeneralPolicyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGeneralPolicyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateGeneralPolicyDto
    : public ModelBase
{
public:
    UpdateGeneralPolicyDto();
    virtual ~UpdateGeneralPolicyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGeneralPolicyDto members

    /// <summary>
    /// **参数解释：** 是否禁用fork。
    /// </summary>

    bool isDisableFork() const;
    bool disableForkIsSet() const;
    void unsetdisableFork();
    void setDisableFork(bool value);

    /// <summary>
    /// **参数解释：** 分支名称正则表达式。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getBranchNameRegex() const;
    bool branchNameRegexIsSet() const;
    void unsetbranchNameRegex();
    void setBranchNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签名正则表达式。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTagNameRegex() const;
    bool tagNameRegexIsSet() const;
    void unsettagNameRegex();
    void setTagNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 生成合并请求预合并。
    /// </summary>

    bool isGeneratePreMergeRef() const;
    bool generatePreMergeRefIsSet() const;
    void unsetgeneratePreMergeRef();
    void setGeneratePreMergeRef(bool value);


protected:
    bool disableFork_;
    bool disableForkIsSet_;
    std::string branchNameRegex_;
    bool branchNameRegexIsSet_;
    std::string tagNameRegex_;
    bool tagNameRegexIsSet_;
    bool generatePreMergeRef_;
    bool generatePreMergeRefIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGeneralPolicyDto_H_
