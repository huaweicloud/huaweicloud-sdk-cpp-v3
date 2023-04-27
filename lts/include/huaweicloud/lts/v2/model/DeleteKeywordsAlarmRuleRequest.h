
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteKeywordsAlarmRuleRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteKeywordsAlarmRuleRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteKeywordsAlarmRuleRequest
    : public ModelBase
{
public:
    DeleteKeywordsAlarmRuleRequest();
    virtual ~DeleteKeywordsAlarmRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteKeywordsAlarmRuleRequest members

    /// <summary>
    /// 关键词告警规则id
    /// </summary>

    std::string getKeywordsAlarmRuleId() const;
    bool keywordsAlarmRuleIdIsSet() const;
    void unsetkeywordsAlarmRuleId();
    void setKeywordsAlarmRuleId(const std::string& value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string keywordsAlarmRuleId_;
    bool keywordsAlarmRuleIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteKeywordsAlarmRuleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteKeywordsAlarmRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteKeywordsAlarmRuleRequest_H_
