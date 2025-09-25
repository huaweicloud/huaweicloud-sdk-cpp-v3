
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSqlPatchResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSqlPatchResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowSqlPatchResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSqlPatchResponse();
    virtual ~ShowSqlPatchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSqlPatchResponse members

    /// <summary>
    /// **参数解释**: PATCH名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPatchName() const;
    bool patchNameIsSet() const;
    void unsetpatchName();
    void setPatchName(const std::string& value);

    /// <summary>
    /// **参数解释**: PATCH内容（Hint文本）。对于abort 类型的SQL PATCH此字段为空。 **取值范围**: 不涉及。
    /// </summary>

    std::string getHint() const;
    bool hintIsSet() const;
    void unsethint();
    void setHint(const std::string& value);

    /// <summary>
    /// **参数解释**: PATCH状态。 **取值范围**: - enabled：表示SQL PATCH生效。 - disabled：表示SQL PATCH失效。
    /// </summary>

    std::string getPatchStatus() const;
    bool patchStatusIsSet() const;
    void unsetpatchStatus();
    void setPatchStatus(const std::string& value);


protected:
    std::string patchName_;
    bool patchNameIsSet_;
    std::string hint_;
    bool hintIsSet_;
    std::string patchStatus_;
    bool patchStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSqlPatchResponse_H_
