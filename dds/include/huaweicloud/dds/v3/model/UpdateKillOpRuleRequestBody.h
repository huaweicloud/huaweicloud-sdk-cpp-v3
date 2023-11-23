
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateKillOpRuleRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateKillOpRuleRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateKillOpRuleRequestBody
    : public ModelBase
{
public:
    UpdateKillOpRuleRequestBody();
    virtual ~UpdateKillOpRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKillOpRuleRequestBody members

    /// <summary>
    /// killOp规则ID列表。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// 启用/禁用 killOp规则。  - enable，启用killOp规则。 - disable，禁用killOp规则。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateKillOpRuleRequestBody_H_
