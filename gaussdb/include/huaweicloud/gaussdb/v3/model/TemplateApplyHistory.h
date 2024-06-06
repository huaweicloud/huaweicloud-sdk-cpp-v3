
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TemplateApplyHistory_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TemplateApplyHistory_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TemplateApplyHistory
    : public ModelBase
{
public:
    TemplateApplyHistory();
    virtual ~TemplateApplyHistory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateApplyHistory members

    /// <summary>
    /// 应用实例ID。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// 应用实例名称。
    /// </summary>

    std::string getTargetName() const;
    bool targetNameIsSet() const;
    void unsettargetName();
    void setTargetName(const std::string& value);

    /// <summary>
    /// 应用结果。
    /// </summary>

    std::string getApplyResult() const;
    bool applyResultIsSet() const;
    void unsetapplyResult();
    void setApplyResult(const std::string& value);

    /// <summary>
    /// 应用时间。
    /// </summary>

    double getAppliedAt() const;
    bool appliedAtIsSet() const;
    void unsetappliedAt();
    void setAppliedAt(double value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


protected:
    std::string targetId_;
    bool targetIdIsSet_;
    std::string targetName_;
    bool targetNameIsSet_;
    std::string applyResult_;
    bool applyResultIsSet_;
    double appliedAt_;
    bool appliedAtIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TemplateApplyHistory_H_
