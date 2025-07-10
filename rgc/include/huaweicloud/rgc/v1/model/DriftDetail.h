
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_DriftDetail_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_DriftDetail_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 漂移详细信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  DriftDetail
    : public ModelBase
{
public:
    DriftDetail();
    virtual ~DriftDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DriftDetail members

    /// <summary>
    /// 管理纳管账号ID。
    /// </summary>

    std::string getManagedAccountId() const;
    bool managedAccountIdIsSet() const;
    void unsetmanagedAccountId();
    void setManagedAccountId(const std::string& value);

    /// <summary>
    /// 漂移类型。
    /// </summary>

    std::string getDriftType() const;
    bool driftTypeIsSet() const;
    void unsetdriftType();
    void setDriftType(const std::string& value);

    /// <summary>
    /// 漂移发生的纳管账号ID或注册OU ID。
    /// </summary>

    std::string getDriftTargetId() const;
    bool driftTargetIdIsSet() const;
    void unsetdriftTargetId();
    void setDriftTargetId(const std::string& value);

    /// <summary>
    /// 漂移目标类型，类型有account、ou和policy。
    /// </summary>

    std::string getDriftTargetType() const;
    bool driftTargetTypeIsSet() const;
    void unsetdriftTargetType();
    void setDriftTargetType(const std::string& value);

    /// <summary>
    /// 漂移信息。
    /// </summary>

    std::string getDriftMessage() const;
    bool driftMessageIsSet() const;
    void unsetdriftMessage();
    void setDriftMessage(const std::string& value);

    /// <summary>
    /// 父注册OU ID。
    /// </summary>

    std::string getParentOrganizationalUnitId() const;
    bool parentOrganizationalUnitIdIsSet() const;
    void unsetparentOrganizationalUnitId();
    void setParentOrganizationalUnitId(const std::string& value);

    /// <summary>
    /// 漂移修复方法。
    /// </summary>

    std::string getSolveSolution() const;
    bool solveSolutionIsSet() const;
    void unsetsolveSolution();
    void setSolveSolution(const std::string& value);


protected:
    std::string managedAccountId_;
    bool managedAccountIdIsSet_;
    std::string driftType_;
    bool driftTypeIsSet_;
    std::string driftTargetId_;
    bool driftTargetIdIsSet_;
    std::string driftTargetType_;
    bool driftTargetTypeIsSet_;
    std::string driftMessage_;
    bool driftMessageIsSet_;
    std::string parentOrganizationalUnitId_;
    bool parentOrganizationalUnitIdIsSet_;
    std::string solveSolution_;
    bool solveSolutionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_DriftDetail_H_
