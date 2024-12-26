
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleChangeDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleChangeDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsRuleChangeDto
    : public ModelBase
{
public:
    IpsRuleChangeDto();
    virtual ~IpsRuleChangeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsRuleChangeDto members

    /// <summary>
    /// ips的id列表
    /// </summary>

    std::vector<std::string>& getIpsIds();
    bool ipsIdsIsSet() const;
    void unsetipsIds();
    void setIpsIds(const std::vector<std::string>& value);

    /// <summary>
    /// 防护对象id
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// ips规则状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::vector<std::string> ipsIds_;
    bool ipsIdsIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleChangeDto_H_
