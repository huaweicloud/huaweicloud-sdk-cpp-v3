
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationAssignmentDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationAssignmentDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序分配的主体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ApplicationAssignmentDto
    : public ModelBase
{
public:
    ApplicationAssignmentDto();
    virtual ~ApplicationAssignmentDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicationAssignmentDto members

    /// <summary>
    /// 应用程序URN
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);

    /// <summary>
    /// 主体Id
    /// </summary>

    std::string getPrincipalId() const;
    bool principalIdIsSet() const;
    void unsetprincipalId();
    void setPrincipalId(const std::string& value);

    /// <summary>
    /// 主体类型
    /// </summary>

    std::string getPrincipalType() const;
    bool principalTypeIsSet() const;
    void unsetprincipalType();
    void setPrincipalType(const std::string& value);


protected:
    std::string applicationUrn_;
    bool applicationUrnIsSet_;
    std::string principalId_;
    bool principalIdIsSet_;
    std::string principalType_;
    bool principalTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationAssignmentDto_H_
