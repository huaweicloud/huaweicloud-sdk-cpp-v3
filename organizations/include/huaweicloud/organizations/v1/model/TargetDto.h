
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TargetDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TargetDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 要邀请加入组织的账号的标识符（ID）。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  TargetDto
    : public ModelBase
{
public:
    TargetDto();
    virtual ~TargetDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TargetDto members

    /// <summary>
    /// 目标类型，account：账户，email：邮箱。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 如果指定 \&quot;type:account\&quot;，则必须提供账号ID作为实体。如果指定\&quot;type:email\&quot;，则必须指定与账号关联的电子邮件地址。
    /// </summary>

    std::string getEntity() const;
    bool entityIsSet() const;
    void unsetentity();
    void setEntity(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string entity_;
    bool entityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TargetDto_H_
