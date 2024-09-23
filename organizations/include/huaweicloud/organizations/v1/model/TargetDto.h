
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
    /// 目标类型，account：账户id，name：账户名称。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 如果指定 &#39;type:account&#39;，则必须提供账号ID作为实体。如果指定 &#39;type:name&#39;，则必须指定账号名称作为实体。
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
