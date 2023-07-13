
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/UpdateKeywordsAlarmRuleRequestBody.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateKeywordsAlarmRuleRequest
    : public ModelBase
{
public:
    UpdateKeywordsAlarmRuleRequest();
    virtual ~UpdateKeywordsAlarmRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateKeywordsAlarmRuleRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateKeywordsAlarmRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateKeywordsAlarmRuleRequestBody& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    UpdateKeywordsAlarmRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateKeywordsAlarmRuleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateKeywordsAlarmRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateKeywordsAlarmRuleRequest_H_
