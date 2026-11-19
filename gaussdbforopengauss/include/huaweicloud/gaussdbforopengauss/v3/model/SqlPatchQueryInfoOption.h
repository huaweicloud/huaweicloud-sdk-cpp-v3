
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPatchQueryInfoOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPatchQueryInfoOption_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SqlPatchQueryInfoOption
    : public ModelBase
{
public:
    SqlPatchQueryInfoOption();
    virtual ~SqlPatchQueryInfoOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlPatchQueryInfoOption members

    /// <summary>
    /// **参数解释**: unique_sql_id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL文本。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlText() const;
    bool sqlTextIsSet() const;
    void unsetsqlText();
    void setSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL Patch名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPatchName() const;
    bool patchNameIsSet() const;
    void unsetpatchName();
    void setPatchName(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: Patch是否生效。 **取值范围**: - true：生效 - false：不生效
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释**: Patch类型。 **取值范围**: - true：Abort Patch - false：非Abort Patch
    /// </summary>

    bool isAbortPatch() const;
    bool abortPatchIsSet() const;
    void unsetabortPatch();
    void setAbortPatch(bool value);


protected:
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string sqlText_;
    bool sqlTextIsSet_;
    std::string patchName_;
    bool patchNameIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    bool abortPatch_;
    bool abortPatchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPatchQueryInfoOption_H_
