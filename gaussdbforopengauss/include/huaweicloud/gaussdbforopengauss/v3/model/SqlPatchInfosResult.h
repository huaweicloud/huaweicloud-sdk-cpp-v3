
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPatchInfosResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPatchInfosResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SqlPatchInfosResult
    : public ModelBase
{
public:
    SqlPatchInfosResult();
    virtual ~SqlPatchInfosResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlPatchInfosResult members

    /// <summary>
    /// **参数解释**: Patch名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPatchName() const;
    bool patchNameIsSet() const;
    void unsetpatchName();
    void setPatchName(const std::string& value);

    /// <summary>
    /// **参数解释**: unique_sql_id，标识SQL文本的ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: Patch是否生效。 **取值范围**: - true：生效 - false：不生效
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释**: Patch的状态。d表示SQL ID模式，h表示SQL Hash模式。 **取值范围**: - d：SQL ID模式 - h：SQL Hash模式
    /// </summary>

    std::string getPatchStatus() const;
    bool patchStatusIsSet() const;
    void unsetpatchStatus();
    void setPatchStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否为Abort Patch。 **取值范围**: - true：是 - false：否
    /// </summary>

    bool isAbortPatch() const;
    bool abortPatchIsSet() const;
    void unsetabortPatch();
    void setAbortPatch(bool value);

    /// <summary>
    /// **参数解释**: Patch内容（Hint文本）。 **取值范围**: 不涉及。
    /// </summary>

    std::string getHint() const;
    bool hintIsSet() const;
    void unsethint();
    void setHint(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL文本。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlText() const;
    bool sqlTextIsSet() const;
    void unsetsqlText();
    void setSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL Patch所属的节点。主备版为主DN，分布式版为CN。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);


protected:
    std::string patchName_;
    bool patchNameIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    std::string patchStatus_;
    bool patchStatusIsSet_;
    bool abortPatch_;
    bool abortPatchIsSet_;
    std::string hint_;
    bool hintIsSet_;
    std::string sqlText_;
    bool sqlTextIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPatchInfosResult_H_
